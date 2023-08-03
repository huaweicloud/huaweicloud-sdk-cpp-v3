

#include "huaweicloud/rds/v3/model/AllowDbPrivilegeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AllowDbPrivilegeRequest::AllowDbPrivilegeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AllowDbPrivilegeRequest::~AllowDbPrivilegeRequest() = default;

void AllowDbPrivilegeRequest::validate()
{
}

web::json::value AllowDbPrivilegeRequest::toJson() const
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

bool AllowDbPrivilegeRequest::fromJson(const web::json::value& val)
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
            PostgresqlGrantRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AllowDbPrivilegeRequest::getXLanguage() const
{
    return xLanguage_;
}

void AllowDbPrivilegeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AllowDbPrivilegeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AllowDbPrivilegeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AllowDbPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void AllowDbPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AllowDbPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AllowDbPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PostgresqlGrantRequest AllowDbPrivilegeRequest::getBody() const
{
    return body_;
}

void AllowDbPrivilegeRequest::setBody(const PostgresqlGrantRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AllowDbPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AllowDbPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


