

#include "huaweicloud/gaussdbforopengauss/v3/model/ShrinkCnRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShrinkCnRequest::ShrinkCnRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShrinkCnRequest::~ShrinkCnRequest() = default;

void ShrinkCnRequest::validate()
{
}

web::json::value ShrinkCnRequest::toJson() const
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
bool ShrinkCnRequest::fromJson(const web::json::value& val)
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
            ReduceCnRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShrinkCnRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShrinkCnRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShrinkCnRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShrinkCnRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShrinkCnRequest::getInstanceId() const
{
    return instanceId_;
}

void ShrinkCnRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShrinkCnRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShrinkCnRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReduceCnRequestBody ShrinkCnRequest::getBody() const
{
    return body_;
}

void ShrinkCnRequest::setBody(const ReduceCnRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShrinkCnRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShrinkCnRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


