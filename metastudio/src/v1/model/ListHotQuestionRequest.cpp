

#include "huaweicloud/metastudio/v1/model/ListHotQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListHotQuestionRequest::ListHotQuestionRequest()
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
    sortDir_ = "";
    sortDirIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ListHotQuestionRequest::~ListHotQuestionRequest() = default;

void ListHotQuestionRequest::validate()
{
}

web::json::value ListHotQuestionRequest::toJson() const
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
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ListHotQuestionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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


std::string ListHotQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void ListHotQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListHotQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListHotQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListHotQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListHotQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListHotQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListHotQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListHotQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListHotQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListHotQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListHotQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListHotQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListHotQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListHotQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListHotQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListHotQuestionRequest::getOffset() const
{
    return offset_;
}

void ListHotQuestionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHotQuestionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHotQuestionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHotQuestionRequest::getLimit() const
{
    return limit_;
}

void ListHotQuestionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHotQuestionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHotQuestionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHotQuestionRequest::getSortDir() const
{
    return sortDir_;
}

void ListHotQuestionRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHotQuestionRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHotQuestionRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListHotQuestionRequest::getRobotId() const
{
    return robotId_;
}

void ListHotQuestionRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ListHotQuestionRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ListHotQuestionRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ListHotQuestionRequest::getLanguage() const
{
    return language_;
}

void ListHotQuestionRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListHotQuestionRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListHotQuestionRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


