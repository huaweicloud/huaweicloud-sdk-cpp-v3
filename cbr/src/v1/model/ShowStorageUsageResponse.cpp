

#include "huaweicloud/cbr/v1/model/ShowStorageUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowStorageUsageResponse::ShowStorageUsageResponse()
{
    resourceCount_ = 0;
    resourceCountIsSet_ = false;
    storageUsageIsSet_ = false;
}

ShowStorageUsageResponse::~ShowStorageUsageResponse() = default;

void ShowStorageUsageResponse::validate()
{
}

web::json::value ShowStorageUsageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceCountIsSet_) {
        val[utility::conversions::to_string_t("resource_count")] = ModelBase::toJson(resourceCount_);
    }
    if(storageUsageIsSet_) {
        val[utility::conversions::to_string_t("storage_usage")] = ModelBase::toJson(storageUsage_);
    }

    return val;
}
bool ShowStorageUsageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_usage"));
        if(!fieldValue.is_null())
        {
            std::vector<StorageUsage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageUsage(refVal);
        }
    }
    return ok;
}


int32_t ShowStorageUsageResponse::getResourceCount() const
{
    return resourceCount_;
}

void ShowStorageUsageResponse::setResourceCount(int32_t value)
{
    resourceCount_ = value;
    resourceCountIsSet_ = true;
}

bool ShowStorageUsageResponse::resourceCountIsSet() const
{
    return resourceCountIsSet_;
}

void ShowStorageUsageResponse::unsetresourceCount()
{
    resourceCountIsSet_ = false;
}

std::vector<StorageUsage>& ShowStorageUsageResponse::getStorageUsage()
{
    return storageUsage_;
}

void ShowStorageUsageResponse::setStorageUsage(const std::vector<StorageUsage>& value)
{
    storageUsage_ = value;
    storageUsageIsSet_ = true;
}

bool ShowStorageUsageResponse::storageUsageIsSet() const
{
    return storageUsageIsSet_;
}

void ShowStorageUsageResponse::unsetstorageUsage()
{
    storageUsageIsSet_ = false;
}

}
}
}
}
}


