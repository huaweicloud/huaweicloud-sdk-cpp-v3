

#include "huaweicloud/metastudio/v1/model/ListWelcomeSpeechRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListWelcomeSpeechRequest::ListWelcomeSpeechRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ListWelcomeSpeechRequest::~ListWelcomeSpeechRequest() = default;

void ListWelcomeSpeechRequest::validate()
{
}

web::json::value ListWelcomeSpeechRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ListWelcomeSpeechRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string ListWelcomeSpeechRequest::getAuthorization() const
{
    return authorization_;
}

void ListWelcomeSpeechRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListWelcomeSpeechRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListWelcomeSpeechRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListWelcomeSpeechRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListWelcomeSpeechRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListWelcomeSpeechRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListWelcomeSpeechRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListWelcomeSpeechRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListWelcomeSpeechRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListWelcomeSpeechRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListWelcomeSpeechRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListWelcomeSpeechRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListWelcomeSpeechRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListWelcomeSpeechRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListWelcomeSpeechRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListWelcomeSpeechRequest::getOffset() const
{
    return offset_;
}

void ListWelcomeSpeechRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWelcomeSpeechRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWelcomeSpeechRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWelcomeSpeechRequest::getLimit() const
{
    return limit_;
}

void ListWelcomeSpeechRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWelcomeSpeechRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWelcomeSpeechRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListWelcomeSpeechRequest::getRobotId() const
{
    return robotId_;
}

void ListWelcomeSpeechRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ListWelcomeSpeechRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ListWelcomeSpeechRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ListWelcomeSpeechRequest::getLanguage() const
{
    return language_;
}

void ListWelcomeSpeechRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListWelcomeSpeechRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListWelcomeSpeechRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


