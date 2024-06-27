

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseDatabaseUserRequest::ShowClickHouseDatabaseUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ShowClickHouseDatabaseUserRequest::~ShowClickHouseDatabaseUserRequest() = default;

void ShowClickHouseDatabaseUserRequest::validate()
{
}

web::json::value ShowClickHouseDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ShowClickHouseDatabaseUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ShowClickHouseDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowClickHouseDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClickHouseDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClickHouseDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowClickHouseDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClickHouseDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClickHouseDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClickHouseDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowClickHouseDatabaseUserRequest::getLimit() const
{
    return limit_;
}

void ShowClickHouseDatabaseUserRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowClickHouseDatabaseUserRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowClickHouseDatabaseUserRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowClickHouseDatabaseUserRequest::getOffset() const
{
    return offset_;
}

void ShowClickHouseDatabaseUserRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowClickHouseDatabaseUserRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowClickHouseDatabaseUserRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowClickHouseDatabaseUserRequest::getUserName() const
{
    return userName_;
}

void ShowClickHouseDatabaseUserRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowClickHouseDatabaseUserRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowClickHouseDatabaseUserRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


