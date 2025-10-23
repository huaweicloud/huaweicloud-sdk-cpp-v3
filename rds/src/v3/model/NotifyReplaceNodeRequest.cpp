

#include "huaweicloud/rds/v3/model/NotifyReplaceNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




NotifyReplaceNodeRequest::NotifyReplaceNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

NotifyReplaceNodeRequest::~NotifyReplaceNodeRequest() = default;

void NotifyReplaceNodeRequest::validate()
{
}

web::json::value NotifyReplaceNodeRequest::toJson() const
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
bool NotifyReplaceNodeRequest::fromJson(const web::json::value& val)
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
            ReplaceNodeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NotifyReplaceNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void NotifyReplaceNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool NotifyReplaceNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void NotifyReplaceNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string NotifyReplaceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void NotifyReplaceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool NotifyReplaceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void NotifyReplaceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReplaceNodeRequest NotifyReplaceNodeRequest::getBody() const
{
    return body_;
}

void NotifyReplaceNodeRequest::setBody(const ReplaceNodeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NotifyReplaceNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NotifyReplaceNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


