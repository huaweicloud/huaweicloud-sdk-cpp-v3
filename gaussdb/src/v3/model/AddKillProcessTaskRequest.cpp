

#include "huaweicloud/gaussdb/v3/model/AddKillProcessTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AddKillProcessTaskRequest::AddKillProcessTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddKillProcessTaskRequest::~AddKillProcessTaskRequest() = default;

void AddKillProcessTaskRequest::validate()
{
}

web::json::value AddKillProcessTaskRequest::toJson() const
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
bool AddKillProcessTaskRequest::fromJson(const web::json::value& val)
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
            KillProcessTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddKillProcessTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void AddKillProcessTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AddKillProcessTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AddKillProcessTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AddKillProcessTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void AddKillProcessTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddKillProcessTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddKillProcessTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

KillProcessTaskReq AddKillProcessTaskRequest::getBody() const
{
    return body_;
}

void AddKillProcessTaskRequest::setBody(const KillProcessTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddKillProcessTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddKillProcessTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


