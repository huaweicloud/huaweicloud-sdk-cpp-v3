

#include "huaweicloud/kvs/v1/model/Field.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Field::Field()
{
    name_ = "";
    nameIsSet_ = false;
    order_ = false;
    orderIsSet_ = false;
}

Field::~Field() = default;

void Field::validate()
{
}

bool Field::toBson(Builder &builder) const
{

    if (nameIsSet_ && !bson_append(builder, "name", name_)) {
        return false;
    }
    if (orderIsSet_ && !bson_append(builder, "order", order_)) {
        return false;
    }

    return true;
}

bool Field::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "name") {
            if (!bson_get(it, name_)) {
                return false;
            }
            nameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "order") {
            if (!bson_get(it, order_)) {
                return false;
            }
            orderIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Field::getName() const
{
    return name_;
}

void Field::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Field::nameIsSet() const
{
    return nameIsSet_;
}

void Field::unsetname()
{
    nameIsSet_ = false;
}

bool Field::isOrder() const
{
    return order_;
}

void Field::setOrder(bool value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool Field::orderIsSet() const
{
    return orderIsSet_;
}

void Field::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


