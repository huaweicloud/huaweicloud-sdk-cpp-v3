

#include "huaweicloud/rds/v3/model/AttachEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AttachEipRequest::AttachEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachEipRequest::~AttachEipRequest() = default;

void AttachEipRequest::validate()
{
}

web::json::value AttachEipRequest::toJson() const
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
bool AttachEipRequest::fromJson(const web::json::value& val)
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
            BindEipRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void AttachEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AttachEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AttachEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AttachEipRequest::getInstanceId() const
{
    return instanceId_;
}

void AttachEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AttachEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AttachEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindEipRequest AttachEipRequest::getBody() const
{
    return body_;
}

void AttachEipRequest::setBody(const BindEipRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


