

#include "huaweicloud/cce/v3/model/Storage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Storage::Storage()
{
    storageSelectorsIsSet_ = false;
    storageGroupsIsSet_ = false;
}

Storage::~Storage() = default;

void Storage::validate()
{
}

web::json::value Storage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageSelectorsIsSet_) {
        val[utility::conversions::to_string_t("storageSelectors")] = ModelBase::toJson(storageSelectors_);
    }
    if(storageGroupsIsSet_) {
        val[utility::conversions::to_string_t("storageGroups")] = ModelBase::toJson(storageGroups_);
    }

    return val;
}
bool Storage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storageSelectors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageSelectors"));
        if(!fieldValue.is_null())
        {
            std::vector<StorageSelectors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSelectors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storageGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<StorageGroups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageGroups(refVal);
        }
    }
    return ok;
}


std::vector<StorageSelectors>& Storage::getStorageSelectors()
{
    return storageSelectors_;
}

void Storage::setStorageSelectors(const std::vector<StorageSelectors>& value)
{
    storageSelectors_ = value;
    storageSelectorsIsSet_ = true;
}

bool Storage::storageSelectorsIsSet() const
{
    return storageSelectorsIsSet_;
}

void Storage::unsetstorageSelectors()
{
    storageSelectorsIsSet_ = false;
}

std::vector<StorageGroups>& Storage::getStorageGroups()
{
    return storageGroups_;
}

void Storage::setStorageGroups(const std::vector<StorageGroups>& value)
{
    storageGroups_ = value;
    storageGroupsIsSet_ = true;
}

bool Storage::storageGroupsIsSet() const
{
    return storageGroupsIsSet_;
}

void Storage::unsetstorageGroups()
{
    storageGroupsIsSet_ = false;
}

}
}
}
}
}


