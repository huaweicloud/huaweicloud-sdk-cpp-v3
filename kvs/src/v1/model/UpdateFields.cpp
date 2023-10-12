

#include "huaweicloud/kvs/v1/model/UpdateFields.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateFields::UpdateFields()
{
    setIsSet_ = false;
    addIsSet_ = false;
    rmvIsSet_ = false;
}

UpdateFields::~UpdateFields() = default;

void UpdateFields::validate()
{
}

bool UpdateFields::toBson(Builder &builder) const
{

    if (setIsSet_ && !bson_append(builder, "Set", set_)) {
        return false;
    }
    if (addIsSet_ && !bson_append(builder, "Add", add_)) {
        return false;
    }
    if (rmvIsSet_ && !bson_append(builder, "Rmv", rmv_)) {
        return false;
    }

    return true;
}

bool UpdateFields::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "Set") {
            if (!bson_get(it, set_)) {
                return false;
            }
            setIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Add") {
            if (!bson_get(it, add_)) {
                return false;
            }
            addIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Rmv") {
            if (!bson_get(it, rmv_)) {
                return false;
            }
            rmvIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document UpdateFields::getSet() const
{
    return set_;
}

void UpdateFields::setSet(const Document& value)
{
    set_ = value;
    setIsSet_ = true;
}

bool UpdateFields::setIsSet() const
{
    return setIsSet_;
}

void UpdateFields::unsetset()
{
    setIsSet_ = false;
}

Document UpdateFields::getAdd() const
{
    return add_;
}

void UpdateFields::setAdd(const Document& value)
{
    add_ = value;
    addIsSet_ = true;
}

bool UpdateFields::addIsSet() const
{
    return addIsSet_;
}

void UpdateFields::unsetadd()
{
    addIsSet_ = false;
}

std::vector<std::string>& UpdateFields::getRmv()
{
    return rmv_;
}

void UpdateFields::setRmv(const std::vector<std::string>& value)
{
    rmv_ = value;
    rmvIsSet_ = true;
}

bool UpdateFields::rmvIsSet() const
{
    return rmvIsSet_;
}

void UpdateFields::unsetrmv()
{
    rmvIsSet_ = false;
}

}
}
}
}
}


