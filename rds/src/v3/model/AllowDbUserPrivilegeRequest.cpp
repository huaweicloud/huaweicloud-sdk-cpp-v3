

#include "huaweicloud/rds/v3/model/AllowDbUserPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AllowDbUserPrivilegeRequest::AllowDbUserPrivilegeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AllowDbUserPrivilegeRequest::~AllowDbUserPrivilegeRequest() = default;

void AllowDbUserPrivilegeRequest::validate()
{
}

web::json::value AllowDbUserPrivilegeRequest::toJson() const
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
bool AllowDbUserPrivilegeRequest::fromJson(const web::json::value& val)
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
            GrantRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AllowDbUserPrivilegeRequest::getXLanguage() const
{
    return xLanguage_;
}

void AllowDbUserPrivilegeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AllowDbUserPrivilegeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AllowDbUserPrivilegeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AllowDbUserPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void AllowDbUserPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AllowDbUserPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AllowDbUserPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GrantRequest AllowDbUserPrivilegeRequest::getBody() const
{
    return body_;
}

void AllowDbUserPrivilegeRequest::setBody(const GrantRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AllowDbUserPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AllowDbUserPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


