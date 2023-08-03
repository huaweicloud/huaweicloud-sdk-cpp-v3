

#include "huaweicloud/rds/v3/model/RevokeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeRequest::RevokeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RevokeRequest::~RevokeRequest() = default;

void RevokeRequest::validate()
{
}

web::json::value RevokeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RevokeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RevokeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RevokeRequest::getXLanguage() const
{
    return xLanguage_;
}

void RevokeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RevokeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RevokeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RevokeRequest::getInstanceId() const
{
    return instanceId_;
}

void RevokeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RevokeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RevokeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RevokeRequestBody RevokeRequest::getBody() const
{
    return body_;
}

void RevokeRequest::setBody(const RevokeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RevokeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RevokeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


