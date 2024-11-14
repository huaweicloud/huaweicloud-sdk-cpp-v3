

#include "huaweicloud/gaussdbfornosql/v3/model/QueryDBCacheRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryDBCacheRuleResponse::QueryDBCacheRuleResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
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

QueryDBCacheRuleResponse::~QueryDBCacheRuleResponse() = default;

void QueryDBCacheRuleResponse::validate()
{
}

web::json::value QueryDBCacheRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
bool QueryDBCacheRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string QueryDBCacheRuleResponse::getId() const
{
    return id_;
}

void QueryDBCacheRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryDBCacheRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void QueryDBCacheRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getName() const
{
    return name_;
}

void QueryDBCacheRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryDBCacheRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void QueryDBCacheRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getStatus() const
{
    return status_;
}

void QueryDBCacheRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDBCacheRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDBCacheRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getSourceDbSchema() const
{
    return sourceDbSchema_;
}

void QueryDBCacheRuleResponse::setSourceDbSchema(const std::string& value)
{
    sourceDbSchema_ = value;
    sourceDbSchemaIsSet_ = true;
}

bool QueryDBCacheRuleResponse::sourceDbSchemaIsSet() const
{
    return sourceDbSchemaIsSet_;
}

void QueryDBCacheRuleResponse::unsetsourceDbSchema()
{
    sourceDbSchemaIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getSourceDbTable() const
{
    return sourceDbTable_;
}

void QueryDBCacheRuleResponse::setSourceDbTable(const std::string& value)
{
    sourceDbTable_ = value;
    sourceDbTableIsSet_ = true;
}

bool QueryDBCacheRuleResponse::sourceDbTableIsSet() const
{
    return sourceDbTableIsSet_;
}

void QueryDBCacheRuleResponse::unsetsourceDbTable()
{
    sourceDbTableIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getStorageType() const
{
    return storageType_;
}

void QueryDBCacheRuleResponse::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool QueryDBCacheRuleResponse::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void QueryDBCacheRuleResponse::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getTargetDatabase() const
{
    return targetDatabase_;
}

void QueryDBCacheRuleResponse::setTargetDatabase(const std::string& value)
{
    targetDatabase_ = value;
    targetDatabaseIsSet_ = true;
}

bool QueryDBCacheRuleResponse::targetDatabaseIsSet() const
{
    return targetDatabaseIsSet_;
}

void QueryDBCacheRuleResponse::unsettargetDatabase()
{
    targetDatabaseIsSet_ = false;
}

std::vector<std::string>& QueryDBCacheRuleResponse::getKeyColumns()
{
    return keyColumns_;
}

void QueryDBCacheRuleResponse::setKeyColumns(const std::vector<std::string>& value)
{
    keyColumns_ = value;
    keyColumnsIsSet_ = true;
}

bool QueryDBCacheRuleResponse::keyColumnsIsSet() const
{
    return keyColumnsIsSet_;
}

void QueryDBCacheRuleResponse::unsetkeyColumns()
{
    keyColumnsIsSet_ = false;
}

std::vector<std::string>& QueryDBCacheRuleResponse::getValueColumns()
{
    return valueColumns_;
}

void QueryDBCacheRuleResponse::setValueColumns(const std::vector<std::string>& value)
{
    valueColumns_ = value;
    valueColumnsIsSet_ = true;
}

bool QueryDBCacheRuleResponse::valueColumnsIsSet() const
{
    return valueColumnsIsSet_;
}

void QueryDBCacheRuleResponse::unsetvalueColumns()
{
    valueColumnsIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getTtl() const
{
    return ttl_;
}

void QueryDBCacheRuleResponse::setTtl(const std::string& value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool QueryDBCacheRuleResponse::ttlIsSet() const
{
    return ttlIsSet_;
}

void QueryDBCacheRuleResponse::unsetttl()
{
    ttlIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getKeySeparator() const
{
    return keySeparator_;
}

void QueryDBCacheRuleResponse::setKeySeparator(const std::string& value)
{
    keySeparator_ = value;
    keySeparatorIsSet_ = true;
}

bool QueryDBCacheRuleResponse::keySeparatorIsSet() const
{
    return keySeparatorIsSet_;
}

void QueryDBCacheRuleResponse::unsetkeySeparator()
{
    keySeparatorIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getValueSeparator() const
{
    return valueSeparator_;
}

void QueryDBCacheRuleResponse::setValueSeparator(const std::string& value)
{
    valueSeparator_ = value;
    valueSeparatorIsSet_ = true;
}

bool QueryDBCacheRuleResponse::valueSeparatorIsSet() const
{
    return valueSeparatorIsSet_;
}

void QueryDBCacheRuleResponse::unsetvalueSeparator()
{
    valueSeparatorIsSet_ = false;
}

std::string QueryDBCacheRuleResponse::getKeyPrefix() const
{
    return keyPrefix_;
}

void QueryDBCacheRuleResponse::setKeyPrefix(const std::string& value)
{
    keyPrefix_ = value;
    keyPrefixIsSet_ = true;
}

bool QueryDBCacheRuleResponse::keyPrefixIsSet() const
{
    return keyPrefixIsSet_;
}

void QueryDBCacheRuleResponse::unsetkeyPrefix()
{
    keyPrefixIsSet_ = false;
}

}
}
}
}
}


