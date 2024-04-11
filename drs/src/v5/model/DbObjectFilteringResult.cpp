

#include "huaweicloud/drs/v5/model/DbObjectFilteringResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbObjectFilteringResult::DbObjectFilteringResult()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    isSuccess_ = false;
    isSuccessIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    targetResult_ = "";
    targetResultIsSet_ = false;
    sourceResult_ = "";
    sourceResultIsSet_ = false;
    targetMessage_ = "";
    targetMessageIsSet_ = false;
    sourceMessage_ = "";
    sourceMessageIsSet_ = false;
}

DbObjectFilteringResult::~DbObjectFilteringResult() = default;

void DbObjectFilteringResult::validate()
{
}

web::json::value DbObjectFilteringResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(isSuccessIsSet_) {
        val[utility::conversions::to_string_t("is_success")] = ModelBase::toJson(isSuccess_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(targetResultIsSet_) {
        val[utility::conversions::to_string_t("target_result")] = ModelBase::toJson(targetResult_);
    }
    if(sourceResultIsSet_) {
        val[utility::conversions::to_string_t("source_result")] = ModelBase::toJson(sourceResult_);
    }
    if(targetMessageIsSet_) {
        val[utility::conversions::to_string_t("target_message")] = ModelBase::toJson(targetMessage_);
    }
    if(sourceMessageIsSet_) {
        val[utility::conversions::to_string_t("source_message")] = ModelBase::toJson(sourceMessage_);
    }

    return val;
}
bool DbObjectFilteringResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceMessage(refVal);
        }
    }
    return ok;
}


std::string DbObjectFilteringResult::getDbName() const
{
    return dbName_;
}

void DbObjectFilteringResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DbObjectFilteringResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DbObjectFilteringResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DbObjectFilteringResult::getSchemaName() const
{
    return schemaName_;
}

void DbObjectFilteringResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DbObjectFilteringResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DbObjectFilteringResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string DbObjectFilteringResult::getTableName() const
{
    return tableName_;
}

void DbObjectFilteringResult::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DbObjectFilteringResult::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DbObjectFilteringResult::unsettableName()
{
    tableNameIsSet_ = false;
}

bool DbObjectFilteringResult::isIsSuccess() const
{
    return isSuccess_;
}

void DbObjectFilteringResult::setIsSuccess(bool value)
{
    isSuccess_ = value;
    isSuccessIsSet_ = true;
}

bool DbObjectFilteringResult::isSuccessIsSet() const
{
    return isSuccessIsSet_;
}

void DbObjectFilteringResult::unsetisSuccess()
{
    isSuccessIsSet_ = false;
}

std::string DbObjectFilteringResult::getMessage() const
{
    return message_;
}

void DbObjectFilteringResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DbObjectFilteringResult::messageIsSet() const
{
    return messageIsSet_;
}

void DbObjectFilteringResult::unsetmessage()
{
    messageIsSet_ = false;
}

std::string DbObjectFilteringResult::getSource() const
{
    return source_;
}

void DbObjectFilteringResult::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool DbObjectFilteringResult::sourceIsSet() const
{
    return sourceIsSet_;
}

void DbObjectFilteringResult::unsetsource()
{
    sourceIsSet_ = false;
}

std::string DbObjectFilteringResult::getTargetResult() const
{
    return targetResult_;
}

void DbObjectFilteringResult::setTargetResult(const std::string& value)
{
    targetResult_ = value;
    targetResultIsSet_ = true;
}

bool DbObjectFilteringResult::targetResultIsSet() const
{
    return targetResultIsSet_;
}

void DbObjectFilteringResult::unsettargetResult()
{
    targetResultIsSet_ = false;
}

std::string DbObjectFilteringResult::getSourceResult() const
{
    return sourceResult_;
}

void DbObjectFilteringResult::setSourceResult(const std::string& value)
{
    sourceResult_ = value;
    sourceResultIsSet_ = true;
}

bool DbObjectFilteringResult::sourceResultIsSet() const
{
    return sourceResultIsSet_;
}

void DbObjectFilteringResult::unsetsourceResult()
{
    sourceResultIsSet_ = false;
}

std::string DbObjectFilteringResult::getTargetMessage() const
{
    return targetMessage_;
}

void DbObjectFilteringResult::setTargetMessage(const std::string& value)
{
    targetMessage_ = value;
    targetMessageIsSet_ = true;
}

bool DbObjectFilteringResult::targetMessageIsSet() const
{
    return targetMessageIsSet_;
}

void DbObjectFilteringResult::unsettargetMessage()
{
    targetMessageIsSet_ = false;
}

std::string DbObjectFilteringResult::getSourceMessage() const
{
    return sourceMessage_;
}

void DbObjectFilteringResult::setSourceMessage(const std::string& value)
{
    sourceMessage_ = value;
    sourceMessageIsSet_ = true;
}

bool DbObjectFilteringResult::sourceMessageIsSet() const
{
    return sourceMessageIsSet_;
}

void DbObjectFilteringResult::unsetsourceMessage()
{
    sourceMessageIsSet_ = false;
}

}
}
}
}
}


