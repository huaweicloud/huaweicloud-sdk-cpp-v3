

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceSecurityGroupRequest::UpdateGaussMySqlInstanceSecurityGroupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceSecurityGroupRequest::~UpdateGaussMySqlInstanceSecurityGroupRequest() = default;

void UpdateGaussMySqlInstanceSecurityGroupRequest::validate()
{
}

web::json::value UpdateGaussMySqlInstanceSecurityGroupRequest::toJson() const
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

bool UpdateGaussMySqlInstanceSecurityGroupRequest::fromJson(const web::json::value& val)
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
            ModifySecurityGroupRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateGaussMySqlInstanceSecurityGroupRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlInstanceSecurityGroupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlInstanceSecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceSecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifySecurityGroupRequest UpdateGaussMySqlInstanceSecurityGroupRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::setBody(const ModifySecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


