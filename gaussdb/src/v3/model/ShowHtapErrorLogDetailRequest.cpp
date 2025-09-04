

#include "huaweicloud/gaussdb/v3/model/ShowHtapErrorLogDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapErrorLogDetailRequest::ShowHtapErrorLogDetailRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowHtapErrorLogDetailRequest::~ShowHtapErrorLogDetailRequest() = default;

void ShowHtapErrorLogDetailRequest::validate()
{
}

web::json::value ShowHtapErrorLogDetailRequest::toJson() const
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
bool ShowHtapErrorLogDetailRequest::fromJson(const web::json::value& val)
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
            HtapErrorLogQueryRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowHtapErrorLogDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHtapErrorLogDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHtapErrorLogDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHtapErrorLogDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowHtapErrorLogDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowHtapErrorLogDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowHtapErrorLogDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowHtapErrorLogDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

HtapErrorLogQueryRequestBody ShowHtapErrorLogDetailRequest::getBody() const
{
    return body_;
}

void ShowHtapErrorLogDetailRequest::setBody(const HtapErrorLogQueryRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowHtapErrorLogDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowHtapErrorLogDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


