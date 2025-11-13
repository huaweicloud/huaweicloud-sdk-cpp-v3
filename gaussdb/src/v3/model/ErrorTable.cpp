

#include "huaweicloud/gaussdb/v3/model/ErrorTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ErrorTable::ErrorTable()
{
    message_ = "";
    messageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    rowNumber_ = 0;
    rowNumberIsSet_ = false;
    fullDescription_ = "";
    fullDescriptionIsSet_ = false;
}

ErrorTable::~ErrorTable() = default;

void ErrorTable::validate()
{
}

web::json::value ErrorTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(rowNumberIsSet_) {
        val[utility::conversions::to_string_t("row_number")] = ModelBase::toJson(rowNumber_);
    }
    if(fullDescriptionIsSet_) {
        val[utility::conversions::to_string_t("full_description")] = ModelBase::toJson(fullDescription_);
    }

    return val;
}
bool ErrorTable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("row_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullDescription(refVal);
        }
    }
    return ok;
}


std::string ErrorTable::getMessage() const
{
    return message_;
}

void ErrorTable::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ErrorTable::messageIsSet() const
{
    return messageIsSet_;
}

void ErrorTable::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ErrorTable::getDatabaseName() const
{
    return databaseName_;
}

void ErrorTable::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ErrorTable::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ErrorTable::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ErrorTable::getTableName() const
{
    return tableName_;
}

void ErrorTable::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ErrorTable::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ErrorTable::unsettableName()
{
    tableNameIsSet_ = false;
}

int32_t ErrorTable::getRowNumber() const
{
    return rowNumber_;
}

void ErrorTable::setRowNumber(int32_t value)
{
    rowNumber_ = value;
    rowNumberIsSet_ = true;
}

bool ErrorTable::rowNumberIsSet() const
{
    return rowNumberIsSet_;
}

void ErrorTable::unsetrowNumber()
{
    rowNumberIsSet_ = false;
}

std::string ErrorTable::getFullDescription() const
{
    return fullDescription_;
}

void ErrorTable::setFullDescription(const std::string& value)
{
    fullDescription_ = value;
    fullDescriptionIsSet_ = true;
}

bool ErrorTable::fullDescriptionIsSet() const
{
    return fullDescriptionIsSet_;
}

void ErrorTable::unsetfullDescription()
{
    fullDescriptionIsSet_ = false;
}

}
}
}
}
}


