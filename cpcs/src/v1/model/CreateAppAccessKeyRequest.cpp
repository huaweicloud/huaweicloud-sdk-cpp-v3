

#include "huaweicloud/cpcs/v1/model/CreateAppAccessKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateAppAccessKeyRequest::CreateAppAccessKeyRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAppAccessKeyRequest::~CreateAppAccessKeyRequest() = default;

void CreateAppAccessKeyRequest::validate()
{
}

web::json::value CreateAppAccessKeyRequest::toJson() const
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
bool CreateAppAccessKeyRequest::fromJson(const web::json::value& val)
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
            CreateAppAccessKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAppAccessKeyRequest::getAppId() const
{
    return appId_;
}

void CreateAppAccessKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateAppAccessKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateAppAccessKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

CreateAppAccessKeyRequestBody CreateAppAccessKeyRequest::getBody() const
{
    return body_;
}

void CreateAppAccessKeyRequest::setBody(const CreateAppAccessKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAppAccessKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAppAccessKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


