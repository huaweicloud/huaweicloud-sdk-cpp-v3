

#include "huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetDatabaseUserPrivilegeRequest::SetDatabaseUserPrivilegeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetDatabaseUserPrivilegeRequest::~SetDatabaseUserPrivilegeRequest() = default;

void SetDatabaseUserPrivilegeRequest::validate()
{
}

web::json::value SetDatabaseUserPrivilegeRequest::toJson() const
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
bool SetDatabaseUserPrivilegeRequest::fromJson(const web::json::value& val)
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
            SetDatabaseUserPrivilegeReqV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetDatabaseUserPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void SetDatabaseUserPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetDatabaseUserPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetDatabaseUserPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetDatabaseUserPrivilegeRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetDatabaseUserPrivilegeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetDatabaseUserPrivilegeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetDatabaseUserPrivilegeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SetDatabaseUserPrivilegeReqV3 SetDatabaseUserPrivilegeRequest::getBody() const
{
    return body_;
}

void SetDatabaseUserPrivilegeRequest::setBody(const SetDatabaseUserPrivilegeReqV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetDatabaseUserPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetDatabaseUserPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


