

#include "huaweicloud/rds/v3/model/StartResizeFlavorActionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartResizeFlavorActionRequest::StartResizeFlavorActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartResizeFlavorActionRequest::~StartResizeFlavorActionRequest() = default;

void StartResizeFlavorActionRequest::validate()
{
}

web::json::value StartResizeFlavorActionRequest::toJson() const
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

bool StartResizeFlavorActionRequest::fromJson(const web::json::value& val)
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
            ResizeFlavorRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string StartResizeFlavorActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartResizeFlavorActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartResizeFlavorActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartResizeFlavorActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartResizeFlavorActionRequest::getInstanceId() const
{
    return instanceId_;
}

void StartResizeFlavorActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartResizeFlavorActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartResizeFlavorActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResizeFlavorRequest StartResizeFlavorActionRequest::getBody() const
{
    return body_;
}

void StartResizeFlavorActionRequest::setBody(const ResizeFlavorRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartResizeFlavorActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartResizeFlavorActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


