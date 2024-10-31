

#include "huaweicloud/kvs/v1/model/Update_fields.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_fields::Update_fields()
{
    setIsSet_ = false;
    addIsSet_ = false;
    rmvIsSet_ = false;
    insertIsSet_ = false;
}

Update_fields::~Update_fields() = default;

void Update_fields::validate()
{
}

bool Update_fields::toBson(Builder &builder) const
{

    if (setIsSet_ && !bson_append(builder, "set", set_)) {
        return false;
    }
    if (addIsSet_ && !bson_append(builder, "add", add_)) {
        return false;
    }
    if (rmvIsSet_ && !bson_append(builder, "rmv", rmv_)) {
        return false;
    }
    if (insertIsSet_ && !bson_append(builder, "insert", insert_)) {
        return false;
    }

    return true;
}

bool Update_fields::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "set") {
            if (!bson_get(it, set_)) {
                return false;
            }
            setIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "add") {
            if (!bson_get(it, add_)) {
                return false;
            }
            addIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "rmv") {
            if (!bson_get(it, rmv_)) {
                return false;
            }
            rmvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "insert") {
            if (!bson_get(it, insert_)) {
                return false;
            }
            insertIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document Update_fields::getSet() const
{
    return set_;
}

void Update_fields::setSet(const Document& value)
{
    set_ = value;
    setIsSet_ = true;
}

bool Update_fields::setIsSet() const
{
    return setIsSet_;
}

void Update_fields::unsetset()
{
    setIsSet_ = false;
}

Document Update_fields::getAdd() const
{
    return add_;
}

void Update_fields::setAdd(const Document& value)
{
    add_ = value;
    addIsSet_ = true;
}

bool Update_fields::addIsSet() const
{
    return addIsSet_;
}

void Update_fields::unsetadd()
{
    addIsSet_ = false;
}

std::vector<std::string>& Update_fields::getRmv()
{
    return rmv_;
}

void Update_fields::setRmv(const std::vector<std::string>& value)
{
    rmv_ = value;
    rmvIsSet_ = true;
}

bool Update_fields::rmvIsSet() const
{
    return rmvIsSet_;
}

void Update_fields::unsetrmv()
{
    rmvIsSet_ = false;
}

Document Update_fields::getInsert() const
{
    return insert_;
}

void Update_fields::setInsert(const Document& value)
{
    insert_ = value;
    insertIsSet_ = true;
}

bool Update_fields::insertIsSet() const
{
    return insertIsSet_;
}

void Update_fields::unsetinsert()
{
    insertIsSet_ = false;
}

}
}
}
}
}


