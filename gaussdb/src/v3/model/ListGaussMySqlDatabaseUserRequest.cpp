

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseUserRequest::ListGaussMySqlDatabaseUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGaussMySqlDatabaseUserRequest::~ListGaussMySqlDatabaseUserRequest() = default;

void ListGaussMySqlDatabaseUserRequest::validate()
{
}

web::json::value ListGaussMySqlDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGaussMySqlDatabaseUserRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListGaussMySqlDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void ListGaussMySqlDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListGaussMySqlDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseUserRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlDatabaseUserRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlDatabaseUserRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseUserRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlDatabaseUserRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlDatabaseUserRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlDatabaseUserRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


