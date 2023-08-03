

#include "huaweicloud/rds/v3/model/SetAutoEnlargePolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoEnlargePolicyRequest::SetAutoEnlargePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetAutoEnlargePolicyRequest::~SetAutoEnlargePolicyRequest() = default;

void SetAutoEnlargePolicyRequest::validate()
{
}

web::json::value SetAutoEnlargePolicyRequest::toJson() const
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

bool SetAutoEnlargePolicyRequest::fromJson(const web::json::value& val)
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
            CustomerModifyAutoEnlargePolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetAutoEnlargePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAutoEnlargePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAutoEnlargePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAutoEnlargePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetAutoEnlargePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetAutoEnlargePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetAutoEnlargePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetAutoEnlargePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CustomerModifyAutoEnlargePolicyReq SetAutoEnlargePolicyRequest::getBody() const
{
    return body_;
}

void SetAutoEnlargePolicyRequest::setBody(const CustomerModifyAutoEnlargePolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoEnlargePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoEnlargePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


