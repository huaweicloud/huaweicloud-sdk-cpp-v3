

#include "huaweicloud/gaussdb/v3/model/UpdateAutoKillProcessStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAutoKillProcessStatusRequest::UpdateAutoKillProcessStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutoKillProcessStatusRequest::~UpdateAutoKillProcessStatusRequest() = default;

void UpdateAutoKillProcessStatusRequest::validate()
{
}

web::json::value UpdateAutoKillProcessStatusRequest::toJson() const
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
bool UpdateAutoKillProcessStatusRequest::fromJson(const web::json::value& val)
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
            UpdateAutoKillProcessStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoKillProcessStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateAutoKillProcessStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateAutoKillProcessStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateAutoKillProcessStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateAutoKillProcessStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAutoKillProcessStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAutoKillProcessStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAutoKillProcessStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateAutoKillProcessStatusRequestBody UpdateAutoKillProcessStatusRequest::getBody() const
{
    return body_;
}

void UpdateAutoKillProcessStatusRequest::setBody(const UpdateAutoKillProcessStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutoKillProcessStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutoKillProcessStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


