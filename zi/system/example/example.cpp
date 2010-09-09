/*
 * AUTHORS:
 *   Aleksandar Zlateski <zlateski@mit.edu>
 *
 * Do not share without authors permission.
 */

#include <iostream>
#include <zi/system/system.hpp>

int main()
{

    std::cout << "CPU Count   : " << zi::system::cpu_count << "\n\n";

    std::cout << "Memory Size : " << zi::system::memory_size << "\n";
    std::cout << "Memory KB   : " << zi::system::memory_kb << "\n";
    std::cout << "Memory MB   : " << zi::system::memory_mb << "\n";
    std::cout << "Memory GB   : " << zi::system::memory_gb << "\n\n";

    std::cout << "Memory Size : " << zi::system::memory::total() << "\n";
    std::cout << "Memory KB   : " << zi::system::memory::total_kb() << "\n";
    std::cout << "Memory MB   : " << zi::system::memory::total_mb() << "\n";
    std::cout << "Memory GB   : " << zi::system::memory::total_gb() << "\n\n";

    std::cout << "Memory Size : " << zi::system::memory::total<float>() << "\n";
    std::cout << "Memory KB   : " << zi::system::memory::total_kb<float>() << "\n";
    std::cout << "Memory MB   : " << zi::system::memory::total_mb<float>() << "\n";
    std::cout << "Memory GB   : " << zi::system::memory::total_gb<float>() << "\n\n";

    std::cout << "Avail Memory: " << zi::system::memory::available() << "\n";
    std::cout << "Avail KB    : " << zi::system::memory::available_kb() << "\n";
    std::cout << "Avail MB    : " << zi::system::memory::available_mb() << "\n";
    std::cout << "Avail GB    : " << zi::system::memory::available_gb() << "\n\n";

    std::cout << "Avail Memory: " << zi::system::memory::available<float>() << "\n";
    std::cout << "Avail KB    : " << zi::system::memory::available_kb<float>() << "\n";
    std::cout << "Avail MB    : " << zi::system::memory::available_mb<float>() << "\n";
    std::cout << "Avail GB    : " << zi::system::memory::available_gb<float>() << "\n\n";

    std::cout << "Username    : " << zi::system::username << "\n";
    std::cout << "Username    : " << zi::system::get_username() << "\n";

    std::cout << "Hostname    : " << zi::system::hostname << "\n";
    std::cout << "Hostname    : " << zi::system::get_hostname() << "\n";

#if defined( ZI_OS_WINDOWS )
    system( "pause" );
#endif

}
