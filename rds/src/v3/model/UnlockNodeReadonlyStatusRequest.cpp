

#include "huaweicloud/rds/v3/model/UnlockNodeReadonlyStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UnlockNodeReadonlyStatusRequest::UnlockNodeReadonlyStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UnlockNodeReadonlyStatusRequest::~UnlockNodeReadonlyStatusRequest() = default;

void UnlockNodeReadonlyStatusRequest::validate()
{
}

web::json::value UnlockNodeReadonlyStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UnlockNodeReadonlyStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UnlockNodeReadonlyStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnlockNodeReadonlyStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UnlockNodeReadonlyStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnlockNodeReadonlyStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnlockNodeReadonlyStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UnlockNodeReadonlyStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void UnlockNodeReadonlyStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UnlockNodeReadonlyStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UnlockNodeReadonlyStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UnlockNodeReadonlyStatusRequestBody UnlockNodeReadonlyStatusRequest::getBody() const
{
    return body_;
}

void UnlockNodeReadonlyStatusRequest::setBody(const UnlockNodeReadonlyStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnlockNodeReadonlyStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnlockNodeReadonlyStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


