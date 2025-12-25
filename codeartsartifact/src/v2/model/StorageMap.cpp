

#include "huaweicloud/codeartsartifact/v2/model/StorageMap.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




StorageMap::StorageMap()
{
    totalStorage_ = "";
    totalStorageIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

StorageMap::~StorageMap() = default;

void StorageMap::validate()
{
}

web::json::value StorageMap::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalStorageIsSet_) {
        val[utility::conversions::to_string_t("totalStorage")] = ModelBase::toJson(totalStorage_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("totalCount")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool StorageMap::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("totalStorage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalStorage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string StorageMap::getTotalStorage() const
{
    return totalStorage_;
}

void StorageMap::setTotalStorage(const std::string& value)
{
    totalStorage_ = value;
    totalStorageIsSet_ = true;
}

bool StorageMap::totalStorageIsSet() const
{
    return totalStorageIsSet_;
}

void StorageMap::unsettotalStorage()
{
    totalStorageIsSet_ = false;
}

int32_t StorageMap::getTotalCount() const
{
    return totalCount_;
}

void StorageMap::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool StorageMap::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void StorageMap::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


