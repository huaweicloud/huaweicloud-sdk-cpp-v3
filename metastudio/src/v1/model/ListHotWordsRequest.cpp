

#include "huaweicloud/metastudio/v1/model/ListHotWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListHotWordsRequest::ListHotWordsRequest()
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
    region_ = 0;
    regionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ListHotWordsRequest::~ListHotWordsRequest() = default;

void ListHotWordsRequest::validate()
{
}

web::json::value ListHotWordsRequest::toJson() const
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
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ListHotWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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


std::string ListHotWordsRequest::getAuthorization() const
{
    return authorization_;
}

void ListHotWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListHotWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListHotWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListHotWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListHotWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListHotWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListHotWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListHotWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListHotWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListHotWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListHotWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListHotWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListHotWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListHotWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListHotWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListHotWordsRequest::getOffset() const
{
    return offset_;
}

void ListHotWordsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHotWordsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHotWordsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHotWordsRequest::getLimit() const
{
    return limit_;
}

void ListHotWordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHotWordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHotWordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHotWordsRequest::getRobotId() const
{
    return robotId_;
}

void ListHotWordsRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ListHotWordsRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ListHotWordsRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t ListHotWordsRequest::getRegion() const
{
    return region_;
}

void ListHotWordsRequest::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListHotWordsRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListHotWordsRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string ListHotWordsRequest::getLanguage() const
{
    return language_;
}

void ListHotWordsRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListHotWordsRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListHotWordsRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


