

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseDatabaseUserPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseDatabaseUserPermissionRequest::UpdateClickHouseDatabaseUserPermissionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClickHouseDatabaseUserPermissionRequest::~UpdateClickHouseDatabaseUserPermissionRequest() = default;

void UpdateClickHouseDatabaseUserPermissionRequest::validate()
{
}

web::json::value UpdateClickHouseDatabaseUserPermissionRequest::toJson() const
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
bool UpdateClickHouseDatabaseUserPermissionRequest::fromJson(const web::json::value& val)
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
            ClickHouseDatabaseUserPSinfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClickHouseDatabaseUserPermissionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPermissionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateClickHouseDatabaseUserPermissionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPermissionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ClickHouseDatabaseUserPSinfo UpdateClickHouseDatabaseUserPermissionRequest::getBody() const
{
    return body_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::setBody(const ClickHouseDatabaseUserPSinfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClickHouseDatabaseUserPermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClickHouseDatabaseUserPermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


