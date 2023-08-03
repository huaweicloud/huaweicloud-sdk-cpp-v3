

#include "huaweicloud/rds/v3/model/BatchTagAddActionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchTagAddActionRequest::BatchTagAddActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchTagAddActionRequest::~BatchTagAddActionRequest() = default;

void BatchTagAddActionRequest::validate()
{
}

web::json::value BatchTagAddActionRequest::toJson() const
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

bool BatchTagAddActionRequest::fromJson(const web::json::value& val)
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
            BatchTagActionAddRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchTagAddActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchTagAddActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchTagAddActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchTagAddActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchTagAddActionRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchTagAddActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchTagAddActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchTagAddActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchTagActionAddRequestBody BatchTagAddActionRequest::getBody() const
{
    return body_;
}

void BatchTagAddActionRequest::setBody(const BatchTagActionAddRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchTagAddActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchTagAddActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


