

#include "huaweicloud/metastudio/v1/model/ShowResourceUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowResourceUsageResponse::ShowResourceUsageResponse()
{
    resourcesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowResourceUsageResponse::~ShowResourceUsageResponse() = default;

void ShowResourceUsageResponse::validate()
{
}

web::json::value ShowResourceUsageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowResourceUsageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceUsageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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


std::vector<ResourceUsageInfo>& ShowResourceUsageResponse::getResources()
{
    return resources_;
}

void ShowResourceUsageResponse::setResources(const std::vector<ResourceUsageInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowResourceUsageResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowResourceUsageResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string ShowResourceUsageResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowResourceUsageResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowResourceUsageResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowResourceUsageResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


