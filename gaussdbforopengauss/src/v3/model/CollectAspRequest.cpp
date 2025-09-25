

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectAspRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectAspRequest::CollectAspRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CollectAspRequest::~CollectAspRequest() = default;

void CollectAspRequest::validate()
{
}

web::json::value CollectAspRequest::toJson() const
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
bool CollectAspRequest::fromJson(const web::json::value& val)
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
            CollectAspRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectAspRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectAspRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectAspRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectAspRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CollectAspRequest::getInstanceId() const
{
    return instanceId_;
}

void CollectAspRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CollectAspRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CollectAspRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CollectAspRequestBody CollectAspRequest::getBody() const
{
    return body_;
}

void CollectAspRequest::setBody(const CollectAspRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectAspRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectAspRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


