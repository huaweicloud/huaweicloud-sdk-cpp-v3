

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseRequest::ListClickHouseDataBaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseDataBaseRequest::~ListClickHouseDataBaseRequest() = default;

void ListClickHouseDataBaseRequest::validate()
{
}

web::json::value ListClickHouseDataBaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListClickHouseDataBaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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
    return ok;
}


std::string ListClickHouseDataBaseRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseDataBaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseDataBaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseDataBaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListClickHouseDataBaseRequest::getLimit() const
{
    return limit_;
}

void ListClickHouseDataBaseRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListClickHouseDataBaseRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListClickHouseDataBaseRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListClickHouseDataBaseRequest::getOffset() const
{
    return offset_;
}

void ListClickHouseDataBaseRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListClickHouseDataBaseRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListClickHouseDataBaseRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListClickHouseDataBaseRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListClickHouseDataBaseRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListClickHouseDataBaseRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListClickHouseDataBaseRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListClickHouseDataBaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseDataBaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseDataBaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseDataBaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


