This file contains programs which implement a Hash Table

A Hash table is a data structure that maps key to values. It uses a hash function to compute indexes for keys. You can store a value at the appropriate location based on the hash table index.

So, you hash function which you feed a key(unique identifier) and it returns an index into the hash table. Using the index you go to the hast table and can access the value of the respective key.

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

0-hash_table_create - hash_table_t *hash_table_create(unsigned long int size) - this function is creating a hash table based on the size of the hash_table_t struct and returns a pointer to the beginning of the table

1-djb2 - this is an index assigning function. It uses the djb2 algorithm to work
Prototype: unsigned long int hash_djb2(const unsigned char *str)

2- key_index - this function is given a key and is passes it to djb2 then returns an index. In the return statement  we take the index returned and get the remainder of its division by size giving us a valid index in the hash table.

3- hash_table_set - this function is supposed to add elements to the hash table. A node(iko hapo kwa struct) is the like the individual item t be stored(key + value yake) it implements a linked list to work. The function checks if there is a hash table if not return null and also checks if the key is empty or NULL and if so also returns NULL. If not the key is passed to the indexing functionwhich returns an index. IF the index exists we pass the value to it and return. If not we have to create a new node(malloc :) )and set its key to our key, value to the value passed and its pointer points to next node.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value)

4- hash_table_get - this function is to retrieve a value associated with a given key. checks if the table exists and if the key is not null. it then gets the index of the key. To traverse the linked list at that index we take the pointer to the hash table array at that index given and pass it to node.(basically tunasearch for data at that given point(node) enter a while loop checking if any key in that linked list matches our key and if does we return its value if node we move to the next node  otherwise we return NULL.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key)

5- hash_table_print - prints a hash table as desired. pass to it pointer to the hash table. If the pointer is null we end execution at that point. Otherwise we enter a loop limited by size of the table entering each index checking each if they are empty if so  otherwise print the key and its corresponding value and move to the next node until ifike mwisho wa hiyo linked list(next pointer is NULL) then moves to the next index in the hush table.

Prototype: void hash_table_print(const hash_table_t *ht)


6- hash_table_delete - this function is to delete a hash table.
Checks if the table exists if not ends execution. Otherwise(the table exists) at each index, first pass the pointer to next linkedlist element to tmp_node the free the key, value and itself then pass back pointer to next to be its actual pointer(imejidelete) then moves on to every node at each index. after wards you free the array itself then the memory allocated to the hash table.
