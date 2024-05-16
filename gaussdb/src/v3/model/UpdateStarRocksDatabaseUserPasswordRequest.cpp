

#include "huaweicloud/gaussdb/v3/model/UpdateStarRocksDatabaseUserPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateStarRocksDatabaseUserPasswordRequest::UpdateStarRocksDatabaseUserPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStarRocksDatabaseUserPasswordRequest::~UpdateStarRocksDatabaseUserPasswordRequest() = default;

void UpdateStarRocksDatabaseUserPasswordRequest::validate()
{
}

web::json::value UpdateStarRocksDatabaseUserPasswordRequest::toJson() const
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
bool UpdateStarRocksDatabaseUserPasswordRequest::fromJson(const web::json::value& val)
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
            StarRocksDatabaseUserPWinfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStarRocksDatabaseUserPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateStarRocksDatabaseUserPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StarRocksDatabaseUserPWinfo UpdateStarRocksDatabaseUserPasswordRequest::getBody() const
{
    return body_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::setBody(const StarRocksDatabaseUserPWinfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStarRocksDatabaseUserPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


