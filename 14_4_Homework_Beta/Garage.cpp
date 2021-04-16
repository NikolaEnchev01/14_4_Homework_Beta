#include "Garage.h"
#include <cstring>
Garage::Garage(size_t size)
{
    this->capacity = size;
    this->vehicleCount = 0;
    this->vehicles = nullptr;
}

Garage::Garage(const Garage& other)
{
    this->capacity = other.vehicleCount;

    Vehicle** buffer = new Vehicle * [other.vehicleCount]{nullptr};

    for (size_t i = 0; i < other.vehicleCount; i++)
    {
       // buffer[i] = new Vehicle{other.vehicles[i]->getRegistration(),other.vehicles[i]->getDescription() ,other.vehicles[i]->getSpace()};
        buffer[i] = other.vehicles[i];
        // they poin to the same car?
    }

    this->vehicles = buffer;
    buffer = nullptr;
   
}

Garage::~Garage()
{
    this->capacity = 0;

    for (size_t i = 0; i < this->vehicleCount; i++)
    {
        this->vehicles[i]=nullptr;
        //do not delete just make null so cars are not destroyed. big brain
    }
    delete this->vehicles;

    this->vehicleCount = 0;
}

//Garage& Garage::operator=(const Garage& rhs)
//{
//
//}
//
void Garage::insert(Vehicle& v)
{
    // TODO : check the capacity

   

    Vehicle** buffer = new Vehicle * [vehicleCount + 1]{nullptr};

    for (size_t i = 0; i < vehicleCount; i++)
    {
        buffer[i] = vehicles[i];
    }
    buffer[vehicleCount] = &v;

    for (size_t i = 0; i < this->vehicleCount; i++)
    {
        delete[] this->vehicles[i];
    }
    delete this->vehicles;
    
    this->vehicles = buffer;
    buffer = nullptr;
    
    this->vehicleCount++;

}

//void Garage::erase(const char* registration)
//{
//}
//
const Vehicle& Garage::at(size_t pos) const
{
    if (pos >= 0 & pos < vehicleCount)
    {
        return *this->vehicles[pos];
   }
}

//const Vehicle& Garage::operator[](size_t pos) const
//{
//    // TODO: insert return statement here
//}
//
//bool Garage::empty() const
//{
//    return false;
//}
//
//size_t Garage::size() const
//{
//    return size_t();
//}
//
//void Garage::clear()
//{
//}
//
//const Vehicle* Garage::find(const char* registration) const
//{
//    return nullptr;
//}
