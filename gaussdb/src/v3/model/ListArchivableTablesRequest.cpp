

#include "huaweicloud/gaussdb/v3/model/ListArchivableTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListArchivableTablesRequest::ListArchivableTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListArchivableTablesRequest::~ListArchivableTablesRequest() = default;

void ListArchivableTablesRequest::validate()
{
}

web::json::value ListArchivableTablesRequest::toJson() const
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
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(partitionNameIsSet_) {
        val[utility::conversions::to_string_t("partition_name")] = ModelBase::toJson(partitionName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListArchivableTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionName(refVal);
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


std::string ListArchivableTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListArchivableTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListArchivableTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListArchivableTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListArchivableTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListArchivableTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListArchivableTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListArchivableTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListArchivableTablesRequest::getDbName() const
{
    return dbName_;
}

void ListArchivableTablesRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListArchivableTablesRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListArchivableTablesRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListArchivableTablesRequest::getTableName() const
{
    return tableName_;
}

void ListArchivableTablesRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ListArchivableTablesRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ListArchivableTablesRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ListArchivableTablesRequest::getPartitionName() const
{
    return partitionName_;
}

void ListArchivableTablesRequest::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ListArchivableTablesRequest::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ListArchivableTablesRequest::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

int32_t ListArchivableTablesRequest::getOffset() const
{
    return offset_;
}

void ListArchivableTablesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListArchivableTablesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListArchivableTablesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListArchivableTablesRequest::getLimit() const
{
    return limit_;
}

void ListArchivableTablesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListArchivableTablesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListArchivableTablesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


