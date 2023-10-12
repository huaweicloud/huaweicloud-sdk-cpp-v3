

#include "huaweicloud/cbr/v1/model/ShowVaultResourceInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultResourceInstancesResponse::ShowVaultResourceInstancesResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowVaultResourceInstancesResponse::~ShowVaultResourceInstancesResponse() = default;

void ShowVaultResourceInstancesResponse::validate()
{
}

web::json::value ShowVaultResourceInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowVaultResourceInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<TagResource>& ShowVaultResourceInstancesResponse::getResources()
{
    return resources_;
}

void ShowVaultResourceInstancesResponse::setResources(const std::vector<TagResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowVaultResourceInstancesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowVaultResourceInstancesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ShowVaultResourceInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowVaultResourceInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowVaultResourceInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowVaultResourceInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


