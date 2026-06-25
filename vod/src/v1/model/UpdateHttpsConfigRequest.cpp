

#include "huaweicloud/vod/v1/model/UpdateHttpsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateHttpsConfigRequest::UpdateHttpsConfigRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHttpsConfigRequest::~UpdateHttpsConfigRequest() = default;

void UpdateHttpsConfigRequest::validate()
{
}

web::json::value UpdateHttpsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHttpsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConfigCdnHttpsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHttpsConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateHttpsConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateHttpsConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateHttpsConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ConfigCdnHttpsReq UpdateHttpsConfigRequest::getBody() const
{
    return body_;
}

void UpdateHttpsConfigRequest::setBody(const ConfigCdnHttpsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHttpsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHttpsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


