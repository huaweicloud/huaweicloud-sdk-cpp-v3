

#include "huaweicloud/gaussdbforopengauss/v3/model/TableVolumeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TableVolumeResult::TableVolumeResult()
{
    tableSize_ = "";
    tableSizeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    tableOwner_ = "";
    tableOwnerIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    isPartType_ = false;
    isPartTypeIsSet_ = false;
    isHashClusterKey_ = false;
    isHashClusterKeyIsSet_ = false;
    tuples_ = "";
    tuplesIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    averageSize_ = "";
    averageSizeIsSet_ = false;
    maxRatio_ = "";
    maxRatioIsSet_ = false;
    minRatio_ = "";
    minRatioIsSet_ = false;
    skewSize_ = "";
    skewSizeIsSet_ = false;
    skewRatio_ = "";
    skewRatioIsSet_ = false;
    skewStddev_ = "";
    skewStddevIsSet_ = false;
}

TableVolumeResult::~TableVolumeResult() = default;

void TableVolumeResult::validate()
{
}

web::json::value TableVolumeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableSizeIsSet_) {
        val[utility::conversions::to_string_t("table_size")] = ModelBase::toJson(tableSize_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(tableOwnerIsSet_) {
        val[utility::conversions::to_string_t("table_owner")] = ModelBase::toJson(tableOwner_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(isPartTypeIsSet_) {
        val[utility::conversions::to_string_t("is_part_type")] = ModelBase::toJson(isPartType_);
    }
    if(isHashClusterKeyIsSet_) {
        val[utility::conversions::to_string_t("is_hash_cluster_key")] = ModelBase::toJson(isHashClusterKey_);
    }
    if(tuplesIsSet_) {
        val[utility::conversions::to_string_t("tuples")] = ModelBase::toJson(tuples_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(averageSizeIsSet_) {
        val[utility::conversions::to_string_t("average_size")] = ModelBase::toJson(averageSize_);
    }
    if(maxRatioIsSet_) {
        val[utility::conversions::to_string_t("max_ratio")] = ModelBase::toJson(maxRatio_);
    }
    if(minRatioIsSet_) {
        val[utility::conversions::to_string_t("min_ratio")] = ModelBase::toJson(minRatio_);
    }
    if(skewSizeIsSet_) {
        val[utility::conversions::to_string_t("skew_size")] = ModelBase::toJson(skewSize_);
    }
    if(skewRatioIsSet_) {
        val[utility::conversions::to_string_t("skew_ratio")] = ModelBase::toJson(skewRatio_);
    }
    if(skewStddevIsSet_) {
        val[utility::conversions::to_string_t("skew_stddev")] = ModelBase::toJson(skewStddev_);
    }

    return val;
}
bool TableVolumeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("table_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_part_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_part_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPartType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_hash_cluster_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_hash_cluster_key"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHashClusterKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tuples"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tuples"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTuples(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skew_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skew_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkewSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skew_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skew_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkewRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skew_stddev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skew_stddev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkewStddev(refVal);
        }
    }
    return ok;
}


std::string TableVolumeResult::getTableSize() const
{
    return tableSize_;
}

void TableVolumeResult::setTableSize(const std::string& value)
{
    tableSize_ = value;
    tableSizeIsSet_ = true;
}

bool TableVolumeResult::tableSizeIsSet() const
{
    return tableSizeIsSet_;
}

void TableVolumeResult::unsettableSize()
{
    tableSizeIsSet_ = false;
}

std::string TableVolumeResult::getId() const
{
    return id_;
}

void TableVolumeResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TableVolumeResult::idIsSet() const
{
    return idIsSet_;
}

void TableVolumeResult::unsetid()
{
    idIsSet_ = false;
}

std::string TableVolumeResult::getTableName() const
{
    return tableName_;
}

void TableVolumeResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableVolumeResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableVolumeResult::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string TableVolumeResult::getTableOwner() const
{
    return tableOwner_;
}

void TableVolumeResult::setTableOwner(const std::string& value)
{
    tableOwner_ = value;
    tableOwnerIsSet_ = true;
}

bool TableVolumeResult::tableOwnerIsSet() const
{
    return tableOwnerIsSet_;
}

void TableVolumeResult::unsettableOwner()
{
    tableOwnerIsSet_ = false;
}

std::string TableVolumeResult::getSchemaName() const
{
    return schemaName_;
}

void TableVolumeResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool TableVolumeResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void TableVolumeResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string TableVolumeResult::getDatabaseName() const
{
    return databaseName_;
}

void TableVolumeResult::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool TableVolumeResult::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void TableVolumeResult::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

bool TableVolumeResult::isIsPartType() const
{
    return isPartType_;
}

void TableVolumeResult::setIsPartType(bool value)
{
    isPartType_ = value;
    isPartTypeIsSet_ = true;
}

bool TableVolumeResult::isPartTypeIsSet() const
{
    return isPartTypeIsSet_;
}

void TableVolumeResult::unsetisPartType()
{
    isPartTypeIsSet_ = false;
}

bool TableVolumeResult::isIsHashClusterKey() const
{
    return isHashClusterKey_;
}

void TableVolumeResult::setIsHashClusterKey(bool value)
{
    isHashClusterKey_ = value;
    isHashClusterKeyIsSet_ = true;
}

bool TableVolumeResult::isHashClusterKeyIsSet() const
{
    return isHashClusterKeyIsSet_;
}

void TableVolumeResult::unsetisHashClusterKey()
{
    isHashClusterKeyIsSet_ = false;
}

std::string TableVolumeResult::getTuples() const
{
    return tuples_;
}

void TableVolumeResult::setTuples(const std::string& value)
{
    tuples_ = value;
    tuplesIsSet_ = true;
}

bool TableVolumeResult::tuplesIsSet() const
{
    return tuplesIsSet_;
}

void TableVolumeResult::unsettuples()
{
    tuplesIsSet_ = false;
}

std::string TableVolumeResult::getCreateTime() const
{
    return createTime_;
}

void TableVolumeResult::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TableVolumeResult::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TableVolumeResult::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TableVolumeResult::getUpdateTime() const
{
    return updateTime_;
}

void TableVolumeResult::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TableVolumeResult::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TableVolumeResult::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TableVolumeResult::getAverageSize() const
{
    return averageSize_;
}

void TableVolumeResult::setAverageSize(const std::string& value)
{
    averageSize_ = value;
    averageSizeIsSet_ = true;
}

bool TableVolumeResult::averageSizeIsSet() const
{
    return averageSizeIsSet_;
}

void TableVolumeResult::unsetaverageSize()
{
    averageSizeIsSet_ = false;
}

std::string TableVolumeResult::getMaxRatio() const
{
    return maxRatio_;
}

void TableVolumeResult::setMaxRatio(const std::string& value)
{
    maxRatio_ = value;
    maxRatioIsSet_ = true;
}

bool TableVolumeResult::maxRatioIsSet() const
{
    return maxRatioIsSet_;
}

void TableVolumeResult::unsetmaxRatio()
{
    maxRatioIsSet_ = false;
}

std::string TableVolumeResult::getMinRatio() const
{
    return minRatio_;
}

void TableVolumeResult::setMinRatio(const std::string& value)
{
    minRatio_ = value;
    minRatioIsSet_ = true;
}

bool TableVolumeResult::minRatioIsSet() const
{
    return minRatioIsSet_;
}

void TableVolumeResult::unsetminRatio()
{
    minRatioIsSet_ = false;
}

std::string TableVolumeResult::getSkewSize() const
{
    return skewSize_;
}

void TableVolumeResult::setSkewSize(const std::string& value)
{
    skewSize_ = value;
    skewSizeIsSet_ = true;
}

bool TableVolumeResult::skewSizeIsSet() const
{
    return skewSizeIsSet_;
}

void TableVolumeResult::unsetskewSize()
{
    skewSizeIsSet_ = false;
}

std::string TableVolumeResult::getSkewRatio() const
{
    return skewRatio_;
}

void TableVolumeResult::setSkewRatio(const std::string& value)
{
    skewRatio_ = value;
    skewRatioIsSet_ = true;
}

bool TableVolumeResult::skewRatioIsSet() const
{
    return skewRatioIsSet_;
}

void TableVolumeResult::unsetskewRatio()
{
    skewRatioIsSet_ = false;
}

std::string TableVolumeResult::getSkewStddev() const
{
    return skewStddev_;
}

void TableVolumeResult::setSkewStddev(const std::string& value)
{
    skewStddev_ = value;
    skewStddevIsSet_ = true;
}

bool TableVolumeResult::skewStddevIsSet() const
{
    return skewStddevIsSet_;
}

void TableVolumeResult::unsetskewStddev()
{
    skewStddevIsSet_ = false;
}

}
}
}
}
}


