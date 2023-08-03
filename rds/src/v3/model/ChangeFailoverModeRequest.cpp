

#include "huaweicloud/rds/v3/model/ChangeFailoverModeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeFailoverModeRequest::ChangeFailoverModeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeFailoverModeRequest::~ChangeFailoverModeRequest() = default;

void ChangeFailoverModeRequest::validate()
{
}

web::json::value ChangeFailoverModeRequest::toJson() const
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

bool ChangeFailoverModeRequest::fromJson(const web::json::value& val)
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
            FailoverModeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeFailoverModeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeFailoverModeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeFailoverModeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeFailoverModeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ChangeFailoverModeRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeFailoverModeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeFailoverModeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeFailoverModeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

FailoverModeRequest ChangeFailoverModeRequest::getBody() const
{
    return body_;
}

void ChangeFailoverModeRequest::setBody(const FailoverModeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeFailoverModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeFailoverModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


