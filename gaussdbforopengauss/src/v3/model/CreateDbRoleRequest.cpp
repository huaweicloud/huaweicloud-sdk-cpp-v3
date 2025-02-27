

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDbRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDbRoleRequest::CreateDbRoleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDbRoleRequest::~CreateDbRoleRequest() = default;

void CreateDbRoleRequest::validate()
{
}

web::json::value CreateDbRoleRequest::toJson() const
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
bool CreateDbRoleRequest::fromJson(const web::json::value& val)
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
            CreateDbRoleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDbRoleRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDbRoleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDbRoleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDbRoleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDbRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDbRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDbRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDbRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDbRoleRequestBody CreateDbRoleRequest::getBody() const
{
    return body_;
}

void CreateDbRoleRequest::setBody(const CreateDbRoleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


