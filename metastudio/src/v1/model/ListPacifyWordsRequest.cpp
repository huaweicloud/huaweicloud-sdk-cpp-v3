

#include "huaweicloud/metastudio/v1/model/ListPacifyWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListPacifyWordsRequest::ListPacifyWordsRequest()
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
    pacifyWordsType_ = 0;
    pacifyWordsTypeIsSet_ = false;
    intent_ = "";
    intentIsSet_ = false;
}

ListPacifyWordsRequest::~ListPacifyWordsRequest() = default;

void ListPacifyWordsRequest::validate()
{
}

web::json::value ListPacifyWordsRequest::toJson() const
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
    if(pacifyWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_type")] = ModelBase::toJson(pacifyWordsType_);
    }
    if(intentIsSet_) {
        val[utility::conversions::to_string_t("intent")] = ModelBase::toJson(intent_);
    }

    return val;
}
bool ListPacifyWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pacify_words_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWordsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntent(refVal);
        }
    }
    return ok;
}


std::string ListPacifyWordsRequest::getAuthorization() const
{
    return authorization_;
}

void ListPacifyWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListPacifyWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListPacifyWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListPacifyWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListPacifyWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListPacifyWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListPacifyWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListPacifyWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListPacifyWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListPacifyWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListPacifyWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListPacifyWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListPacifyWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListPacifyWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListPacifyWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListPacifyWordsRequest::getOffset() const
{
    return offset_;
}

void ListPacifyWordsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPacifyWordsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPacifyWordsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPacifyWordsRequest::getLimit() const
{
    return limit_;
}

void ListPacifyWordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPacifyWordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPacifyWordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPacifyWordsRequest::getRobotId() const
{
    return robotId_;
}

void ListPacifyWordsRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ListPacifyWordsRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ListPacifyWordsRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ListPacifyWordsRequest::getLanguage() const
{
    return language_;
}

void ListPacifyWordsRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListPacifyWordsRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListPacifyWordsRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

int32_t ListPacifyWordsRequest::getPacifyWordsType() const
{
    return pacifyWordsType_;
}

void ListPacifyWordsRequest::setPacifyWordsType(int32_t value)
{
    pacifyWordsType_ = value;
    pacifyWordsTypeIsSet_ = true;
}

bool ListPacifyWordsRequest::pacifyWordsTypeIsSet() const
{
    return pacifyWordsTypeIsSet_;
}

void ListPacifyWordsRequest::unsetpacifyWordsType()
{
    pacifyWordsTypeIsSet_ = false;
}

std::string ListPacifyWordsRequest::getIntent() const
{
    return intent_;
}

void ListPacifyWordsRequest::setIntent(const std::string& value)
{
    intent_ = value;
    intentIsSet_ = true;
}

bool ListPacifyWordsRequest::intentIsSet() const
{
    return intentIsSet_;
}

void ListPacifyWordsRequest::unsetintent()
{
    intentIsSet_ = false;
}

}
}
}
}
}


