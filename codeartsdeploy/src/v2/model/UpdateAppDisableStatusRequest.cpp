

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppDisableStatusRequest::UpdateAppDisableStatusRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAppDisableStatusRequest::~UpdateAppDisableStatusRequest() = default;

void UpdateAppDisableStatusRequest::validate()
{
}

web::json::value UpdateAppDisableStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAppDisableStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAppDisableStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAppDisableStatusRequest::getAppId() const
{
    return appId_;
}

void UpdateAppDisableStatusRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateAppDisableStatusRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateAppDisableStatusRequest::unsetappId()
{
    appIdIsSet_ = false;
}

UpdateAppDisableStatusRequestBody UpdateAppDisableStatusRequest::getBody() const
{
    return body_;
}

void UpdateAppDisableStatusRequest::setBody(const UpdateAppDisableStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAppDisableStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAppDisableStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


