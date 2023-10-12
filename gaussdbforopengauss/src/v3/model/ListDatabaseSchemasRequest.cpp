

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseSchemasRequest::ListDatabaseSchemasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDatabaseSchemasRequest::~ListDatabaseSchemasRequest() = default;

void ListDatabaseSchemasRequest::validate()
{
}

web::json::value ListDatabaseSchemasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDatabaseSchemasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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


std::string ListDatabaseSchemasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseSchemasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseSchemasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseSchemasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDatabaseSchemasRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseSchemasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseSchemasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseSchemasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseSchemasRequest::getDbName() const
{
    return dbName_;
}

void ListDatabaseSchemasRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListDatabaseSchemasRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListDatabaseSchemasRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListDatabaseSchemasRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseSchemasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseSchemasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseSchemasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseSchemasRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseSchemasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseSchemasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseSchemasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


