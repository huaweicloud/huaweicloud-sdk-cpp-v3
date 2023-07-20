

#include "huaweicloud/gaussdb/v3/model/AddDatabasePermissionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AddDatabasePermissionRequest::AddDatabasePermissionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDatabasePermissionRequest::~AddDatabasePermissionRequest() = default;

void AddDatabasePermissionRequest::validate()
{
}

web::json::value AddDatabasePermissionRequest::toJson() const
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

bool AddDatabasePermissionRequest::fromJson(const web::json::value& val)
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
            GrantDatabasePermissionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddDatabasePermissionRequest::getXLanguage() const
{
    return xLanguage_;
}

void AddDatabasePermissionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AddDatabasePermissionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AddDatabasePermissionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AddDatabasePermissionRequest::getInstanceId() const
{
    return instanceId_;
}

void AddDatabasePermissionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddDatabasePermissionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddDatabasePermissionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GrantDatabasePermissionRequestBody AddDatabasePermissionRequest::getBody() const
{
    return body_;
}

void AddDatabasePermissionRequest::setBody(const GrantDatabasePermissionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDatabasePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDatabasePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


