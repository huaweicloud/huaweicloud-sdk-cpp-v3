

#include "huaweicloud/rds/v3/model/RevokeSqlserverDbUserPrivilegeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeSqlserverDbUserPrivilegeRequest::RevokeSqlserverDbUserPrivilegeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RevokeSqlserverDbUserPrivilegeRequest::~RevokeSqlserverDbUserPrivilegeRequest() = default;

void RevokeSqlserverDbUserPrivilegeRequest::validate()
{
}

web::json::value RevokeSqlserverDbUserPrivilegeRequest::toJson() const
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

bool RevokeSqlserverDbUserPrivilegeRequest::fromJson(const web::json::value& val)
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
            SqlserverRevokeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RevokeSqlserverDbUserPrivilegeRequest::getXLanguage() const
{
    return xLanguage_;
}

void RevokeSqlserverDbUserPrivilegeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RevokeSqlserverDbUserPrivilegeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RevokeSqlserverDbUserPrivilegeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RevokeSqlserverDbUserPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void RevokeSqlserverDbUserPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RevokeSqlserverDbUserPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RevokeSqlserverDbUserPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlserverRevokeRequest RevokeSqlserverDbUserPrivilegeRequest::getBody() const
{
    return body_;
}

void RevokeSqlserverDbUserPrivilegeRequest::setBody(const SqlserverRevokeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RevokeSqlserverDbUserPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RevokeSqlserverDbUserPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


