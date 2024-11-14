

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheRuleRequestBody::CreateDbCacheRuleRequestBody()
{
    dbcacheMappingId_ = "";
    dbcacheMappingIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sourceDbSchema_ = "";
    sourceDbSchemaIsSet_ = false;
    sourceDbTable_ = "";
    sourceDbTableIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    targetDatabase_ = "";
    targetDatabaseIsSet_ = false;
    keyColumnsIsSet_ = false;
    valueColumnsIsSet_ = false;
    ttl_ = "";
    ttlIsSet_ = false;
    keySeparator_ = "";
    keySeparatorIsSet_ = false;
    valueSeparator_ = "";
    valueSeparatorIsSet_ = false;
    keyPrefix_ = "";
    keyPrefixIsSet_ = false;
}

CreateDbCacheRuleRequestBody::~CreateDbCacheRuleRequestBody() = default;

void CreateDbCacheRuleRequestBody::validate()
{
}

web::json::value CreateDbCacheRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbcacheMappingIdIsSet_) {
        val[utility::conversions::to_string_t("dbcache_mapping_id")] = ModelBase::toJson(dbcacheMappingId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceDbSchemaIsSet_) {
        val[utility::conversions::to_string_t("source_db_schema")] = ModelBase::toJson(sourceDbSchema_);
    }
    if(sourceDbTableIsSet_) {
        val[utility::conversions::to_string_t("source_db_table")] = ModelBase::toJson(sourceDbTable_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }
    if(targetDatabaseIsSet_) {
        val[utility::conversions::to_string_t("target_database")] = ModelBase::toJson(targetDatabase_);
    }
    if(keyColumnsIsSet_) {
        val[utility::conversions::to_string_t("key_columns")] = ModelBase::toJson(keyColumns_);
    }
    if(valueColumnsIsSet_) {
        val[utility::conversions::to_string_t("value_columns")] = ModelBase::toJson(valueColumns_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(keySeparatorIsSet_) {
        val[utility::conversions::to_string_t("key_separator")] = ModelBase::toJson(keySeparator_);
    }
    if(valueSeparatorIsSet_) {
        val[utility::conversions::to_string_t("value_separator")] = ModelBase::toJson(valueSeparator_);
    }
    if(keyPrefixIsSet_) {
        val[utility::conversions::to_string_t("key_prefix")] = ModelBase::toJson(keyPrefix_);
    }

    return val;
}
bool CreateDbCacheRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dbcache_mapping_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbcache_mapping_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbcacheMappingId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_columns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_columns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_separator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_separator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySeparator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_separator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_separator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueSeparator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPrefix(refVal);
        }
    }
    return ok;
}


std::string CreateDbCacheRuleRequestBody::getDbcacheMappingId() const
{
    return dbcacheMappingId_;
}

void CreateDbCacheRuleRequestBody::setDbcacheMappingId(const std::string& value)
{
    dbcacheMappingId_ = value;
    dbcacheMappingIdIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::dbcacheMappingIdIsSet() const
{
    return dbcacheMappingIdIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetdbcacheMappingId()
{
    dbcacheMappingIdIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getName() const
{
    return name_;
}

void CreateDbCacheRuleRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getSourceDbSchema() const
{
    return sourceDbSchema_;
}

void CreateDbCacheRuleRequestBody::setSourceDbSchema(const std::string& value)
{
    sourceDbSchema_ = value;
    sourceDbSchemaIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::sourceDbSchemaIsSet() const
{
    return sourceDbSchemaIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetsourceDbSchema()
{
    sourceDbSchemaIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getSourceDbTable() const
{
    return sourceDbTable_;
}

void CreateDbCacheRuleRequestBody::setSourceDbTable(const std::string& value)
{
    sourceDbTable_ = value;
    sourceDbTableIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::sourceDbTableIsSet() const
{
    return sourceDbTableIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetsourceDbTable()
{
    sourceDbTableIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getStorageType() const
{
    return storageType_;
}

void CreateDbCacheRuleRequestBody::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getTargetDatabase() const
{
    return targetDatabase_;
}

void CreateDbCacheRuleRequestBody::setTargetDatabase(const std::string& value)
{
    targetDatabase_ = value;
    targetDatabaseIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::targetDatabaseIsSet() const
{
    return targetDatabaseIsSet_;
}

void CreateDbCacheRuleRequestBody::unsettargetDatabase()
{
    targetDatabaseIsSet_ = false;
}

std::vector<std::string>& CreateDbCacheRuleRequestBody::getKeyColumns()
{
    return keyColumns_;
}

void CreateDbCacheRuleRequestBody::setKeyColumns(const std::vector<std::string>& value)
{
    keyColumns_ = value;
    keyColumnsIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::keyColumnsIsSet() const
{
    return keyColumnsIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetkeyColumns()
{
    keyColumnsIsSet_ = false;
}

std::vector<std::string>& CreateDbCacheRuleRequestBody::getValueColumns()
{
    return valueColumns_;
}

void CreateDbCacheRuleRequestBody::setValueColumns(const std::vector<std::string>& value)
{
    valueColumns_ = value;
    valueColumnsIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::valueColumnsIsSet() const
{
    return valueColumnsIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetvalueColumns()
{
    valueColumnsIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getTtl() const
{
    return ttl_;
}

void CreateDbCacheRuleRequestBody::setTtl(const std::string& value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::ttlIsSet() const
{
    return ttlIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetttl()
{
    ttlIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getKeySeparator() const
{
    return keySeparator_;
}

void CreateDbCacheRuleRequestBody::setKeySeparator(const std::string& value)
{
    keySeparator_ = value;
    keySeparatorIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::keySeparatorIsSet() const
{
    return keySeparatorIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetkeySeparator()
{
    keySeparatorIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getValueSeparator() const
{
    return valueSeparator_;
}

void CreateDbCacheRuleRequestBody::setValueSeparator(const std::string& value)
{
    valueSeparator_ = value;
    valueSeparatorIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::valueSeparatorIsSet() const
{
    return valueSeparatorIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetvalueSeparator()
{
    valueSeparatorIsSet_ = false;
}

std::string CreateDbCacheRuleRequestBody::getKeyPrefix() const
{
    return keyPrefix_;
}

void CreateDbCacheRuleRequestBody::setKeyPrefix(const std::string& value)
{
    keyPrefix_ = value;
    keyPrefixIsSet_ = true;
}

bool CreateDbCacheRuleRequestBody::keyPrefixIsSet() const
{
    return keyPrefixIsSet_;
}

void CreateDbCacheRuleRequestBody::unsetkeyPrefix()
{
    keyPrefixIsSet_ = false;
}

}
}
}
}
}


