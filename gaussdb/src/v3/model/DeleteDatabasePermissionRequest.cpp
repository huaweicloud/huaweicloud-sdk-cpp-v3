

#include "huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDatabasePermissionRequest::DeleteDatabasePermissionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDatabasePermissionRequest::~DeleteDatabasePermissionRequest() = default;

void DeleteDatabasePermissionRequest::validate()
{
}

web::json::value DeleteDatabasePermissionRequest::toJson() const
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

bool DeleteDatabasePermissionRequest::fromJson(const web::json::value& val)
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
            DeleteDatabasePermissionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteDatabasePermissionRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDatabasePermissionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDatabasePermissionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDatabasePermissionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteDatabasePermissionRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDatabasePermissionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDatabasePermissionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDatabasePermissionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteDatabasePermissionRequestBody DeleteDatabasePermissionRequest::getBody() const
{
    return body_;
}

void DeleteDatabasePermissionRequest::setBody(const DeleteDatabasePermissionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDatabasePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDatabasePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


