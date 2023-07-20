

#include "huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceFromCollectionRequest::RestoreInstanceFromCollectionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreInstanceFromCollectionRequest::~RestoreInstanceFromCollectionRequest() = default;

void RestoreInstanceFromCollectionRequest::validate()
{
}

web::json::value RestoreInstanceFromCollectionRequest::toJson() const
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

bool RestoreInstanceFromCollectionRequest::fromJson(const web::json::value& val)
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
            RestoreInstanceFromCollectionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RestoreInstanceFromCollectionRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreInstanceFromCollectionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreInstanceFromCollectionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestoreInstanceFromCollectionRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreInstanceFromCollectionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreInstanceFromCollectionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreInstanceFromCollectionRequestBody RestoreInstanceFromCollectionRequest::getBody() const
{
    return body_;
}

void RestoreInstanceFromCollectionRequest::setBody(const RestoreInstanceFromCollectionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreInstanceFromCollectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


