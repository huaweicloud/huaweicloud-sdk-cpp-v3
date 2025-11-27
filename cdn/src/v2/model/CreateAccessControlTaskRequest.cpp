

#include "huaweicloud/cdn/v2/model/CreateAccessControlTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateAccessControlTaskRequest::CreateAccessControlTaskRequest()
{
    action_ = "";
    actionIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccessControlTaskRequest::~CreateAccessControlTaskRequest() = default;

void CreateAccessControlTaskRequest::validate()
{
}

web::json::value CreateAccessControlTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAccessControlTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UrlAccessControlTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccessControlTaskRequest::getAction() const
{
    return action_;
}

void CreateAccessControlTaskRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CreateAccessControlTaskRequest::actionIsSet() const
{
    return actionIsSet_;
}

void CreateAccessControlTaskRequest::unsetaction()
{
    actionIsSet_ = false;
}

UrlAccessControlTaskRequestBody CreateAccessControlTaskRequest::getBody() const
{
    return body_;
}

void CreateAccessControlTaskRequest::setBody(const UrlAccessControlTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessControlTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessControlTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


