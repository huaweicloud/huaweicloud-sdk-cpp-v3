

#include "huaweicloud/rds/v3/model/BatchTagDelActionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchTagDelActionRequest::BatchTagDelActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchTagDelActionRequest::~BatchTagDelActionRequest() = default;

void BatchTagDelActionRequest::validate()
{
}

web::json::value BatchTagDelActionRequest::toJson() const
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

bool BatchTagDelActionRequest::fromJson(const web::json::value& val)
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
            BatchTagActionDelRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchTagDelActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchTagDelActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchTagDelActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchTagDelActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchTagDelActionRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchTagDelActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchTagDelActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchTagDelActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchTagActionDelRequestBody BatchTagDelActionRequest::getBody() const
{
    return body_;
}

void BatchTagDelActionRequest::setBody(const BatchTagActionDelRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchTagDelActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchTagDelActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


