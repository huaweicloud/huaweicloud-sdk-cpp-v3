

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableVolumesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableVolumesRequestBody::ListTableVolumesRequestBody()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    schemaNamesIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortOrder_ = "";
    sortOrderIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListTableVolumesRequestBody::~ListTableVolumesRequestBody() = default;

void ListTableVolumesRequestBody::validate()
{
}

web::json::value ListTableVolumesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(schemaNamesIsSet_) {
        val[utility::conversions::to_string_t("schema_names")] = ModelBase::toJson(schemaNames_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortOrderIsSet_) {
        val[utility::conversions::to_string_t("sort_order")] = ModelBase::toJson(sortOrder_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListTableVolumesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortOrder(refVal);
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
    return ok;
}


std::string ListTableVolumesRequestBody::getDatabaseName() const
{
    return databaseName_;
}

void ListTableVolumesRequestBody::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListTableVolumesRequestBody::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListTableVolumesRequestBody::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::vector<std::string>& ListTableVolumesRequestBody::getSchemaNames()
{
    return schemaNames_;
}

void ListTableVolumesRequestBody::setSchemaNames(const std::vector<std::string>& value)
{
    schemaNames_ = value;
    schemaNamesIsSet_ = true;
}

bool ListTableVolumesRequestBody::schemaNamesIsSet() const
{
    return schemaNamesIsSet_;
}

void ListTableVolumesRequestBody::unsetschemaNames()
{
    schemaNamesIsSet_ = false;
}

std::string ListTableVolumesRequestBody::getTableName() const
{
    return tableName_;
}

void ListTableVolumesRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ListTableVolumesRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ListTableVolumesRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ListTableVolumesRequestBody::getUserName() const
{
    return userName_;
}

void ListTableVolumesRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListTableVolumesRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListTableVolumesRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListTableVolumesRequestBody::getSortKey() const
{
    return sortKey_;
}

void ListTableVolumesRequestBody::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListTableVolumesRequestBody::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListTableVolumesRequestBody::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListTableVolumesRequestBody::getSortOrder() const
{
    return sortOrder_;
}

void ListTableVolumesRequestBody::setSortOrder(const std::string& value)
{
    sortOrder_ = value;
    sortOrderIsSet_ = true;
}

bool ListTableVolumesRequestBody::sortOrderIsSet() const
{
    return sortOrderIsSet_;
}

void ListTableVolumesRequestBody::unsetsortOrder()
{
    sortOrderIsSet_ = false;
}

int32_t ListTableVolumesRequestBody::getLimit() const
{
    return limit_;
}

void ListTableVolumesRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTableVolumesRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListTableVolumesRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTableVolumesRequestBody::getOffset() const
{
    return offset_;
}

void ListTableVolumesRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTableVolumesRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTableVolumesRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


