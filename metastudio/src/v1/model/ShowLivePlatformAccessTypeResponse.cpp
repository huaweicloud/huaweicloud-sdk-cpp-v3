

#include "huaweicloud/metastudio/v1/model/ShowLivePlatformAccessTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLivePlatformAccessTypeResponse::ShowLivePlatformAccessTypeResponse()
{
    accessTypesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowLivePlatformAccessTypeResponse::~ShowLivePlatformAccessTypeResponse() = default;

void ShowLivePlatformAccessTypeResponse::validate()
{
}

web::json::value ShowLivePlatformAccessTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessTypesIsSet_) {
        val[utility::conversions::to_string_t("access_types")] = ModelBase::toJson(accessTypes_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowLivePlatformAccessTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_types"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTypeEnum> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessTypes(refVal);
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


std::vector<AccessTypeEnum>& ShowLivePlatformAccessTypeResponse::getAccessTypes()
{
    return accessTypes_;
}

void ShowLivePlatformAccessTypeResponse::setAccessTypes(const std::vector<AccessTypeEnum>& value)
{
    accessTypes_ = value;
    accessTypesIsSet_ = true;
}

bool ShowLivePlatformAccessTypeResponse::accessTypesIsSet() const
{
    return accessTypesIsSet_;
}

void ShowLivePlatformAccessTypeResponse::unsetaccessTypes()
{
    accessTypesIsSet_ = false;
}

std::string ShowLivePlatformAccessTypeResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowLivePlatformAccessTypeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowLivePlatformAccessTypeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowLivePlatformAccessTypeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


