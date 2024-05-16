

#include "huaweicloud/gaussdb/v3/model/CreateStarRocksDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarRocksDatabaseUserRequest::CreateStarRocksDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateStarRocksDatabaseUserRequest::~CreateStarRocksDatabaseUserRequest() = default;

void CreateStarRocksDatabaseUserRequest::validate()
{
}

web::json::value CreateStarRocksDatabaseUserRequest::toJson() const
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
bool CreateStarRocksDatabaseUserRequest::fromJson(const web::json::value& val)
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
            StarRocksDatabaseUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateStarRocksDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateStarRocksDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateStarRocksDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateStarRocksDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateStarRocksDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateStarRocksDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateStarRocksDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateStarRocksDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StarRocksDatabaseUserInfo CreateStarRocksDatabaseUserRequest::getBody() const
{
    return body_;
}

void CreateStarRocksDatabaseUserRequest::setBody(const StarRocksDatabaseUserInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStarRocksDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStarRocksDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


