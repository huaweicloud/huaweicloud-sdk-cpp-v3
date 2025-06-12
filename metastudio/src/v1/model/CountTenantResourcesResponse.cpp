

#include "huaweicloud/metastudio/v1/model/CountTenantResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CountTenantResourcesResponse::CountTenantResourcesResponse()
{
    resourcesCountIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CountTenantResourcesResponse::~CountTenantResourcesResponse() = default;

void CountTenantResourcesResponse::validate()
{
}

web::json::value CountTenantResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesCountIsSet_) {
        val[utility::conversions::to_string_t("resources_count")] = ModelBase::toJson(resourcesCount_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CountTenantResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources_count"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourcesCount> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcesCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ResourcesCount>& CountTenantResourcesResponse::getResourcesCount()
{
    return resourcesCount_;
}

void CountTenantResourcesResponse::setResourcesCount(const std::vector<ResourcesCount>& value)
{
    resourcesCount_ = value;
    resourcesCountIsSet_ = true;
}

bool CountTenantResourcesResponse::resourcesCountIsSet() const
{
    return resourcesCountIsSet_;
}

void CountTenantResourcesResponse::unsetresourcesCount()
{
    resourcesCountIsSet_ = false;
}

std::string CountTenantResourcesResponse::getXRequestId() const
{
    return xRequestId_;
}

void CountTenantResourcesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CountTenantResourcesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CountTenantResourcesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


