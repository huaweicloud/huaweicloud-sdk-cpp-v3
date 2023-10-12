

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlBackupPolicyRequest::UpdateGaussMySqlBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlBackupPolicyRequest::~UpdateGaussMySqlBackupPolicyRequest() = default;

void UpdateGaussMySqlBackupPolicyRequest::validate()
{
}

web::json::value UpdateGaussMySqlBackupPolicyRequest::toJson() const
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
bool UpdateGaussMySqlBackupPolicyRequest::fromJson(const web::json::value& val)
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
            MysqlUpdateBackupPolicyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGaussMySqlBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlUpdateBackupPolicyRequest UpdateGaussMySqlBackupPolicyRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlBackupPolicyRequest::setBody(const MysqlUpdateBackupPolicyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


