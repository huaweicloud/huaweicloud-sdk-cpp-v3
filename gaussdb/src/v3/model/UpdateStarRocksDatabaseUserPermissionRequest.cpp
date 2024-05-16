

#include "huaweicloud/gaussdb/v3/model/UpdateStarRocksDatabaseUserPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateStarRocksDatabaseUserPermissionRequest::UpdateStarRocksDatabaseUserPermissionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStarRocksDatabaseUserPermissionRequest::~UpdateStarRocksDatabaseUserPermissionRequest() = default;

void UpdateStarRocksDatabaseUserPermissionRequest::validate()
{
}

web::json::value UpdateStarRocksDatabaseUserPermissionRequest::toJson() const
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
bool UpdateStarRocksDatabaseUserPermissionRequest::fromJson(const web::json::value& val)
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
            StarRocksDatabaseUserPSinfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStarRocksDatabaseUserPermissionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPermissionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateStarRocksDatabaseUserPermissionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPermissionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StarRocksDatabaseUserPSinfo UpdateStarRocksDatabaseUserPermissionRequest::getBody() const
{
    return body_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::setBody(const StarRocksDatabaseUserPSinfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStarRocksDatabaseUserPermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


