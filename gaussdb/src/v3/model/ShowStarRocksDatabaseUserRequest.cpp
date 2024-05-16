

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksDatabaseUserRequest::ShowStarRocksDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowStarRocksDatabaseUserRequest::~ShowStarRocksDatabaseUserRequest() = default;

void ShowStarRocksDatabaseUserRequest::validate()
{
}

web::json::value ShowStarRocksDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowStarRocksDatabaseUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowStarRocksDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowStarRocksDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowStarRocksDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowStarRocksDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowStarRocksDatabaseUserRequest::getUserName() const
{
    return userName_;
}

void ShowStarRocksDatabaseUserRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowStarRocksDatabaseUserRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowStarRocksDatabaseUserRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ShowStarRocksDatabaseUserRequest::getLimit() const
{
    return limit_;
}

void ShowStarRocksDatabaseUserRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowStarRocksDatabaseUserRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowStarRocksDatabaseUserRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowStarRocksDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowStarRocksDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowStarRocksDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowStarRocksDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowStarRocksDatabaseUserRequest::getOffset() const
{
    return offset_;
}

void ShowStarRocksDatabaseUserRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowStarRocksDatabaseUserRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowStarRocksDatabaseUserRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


