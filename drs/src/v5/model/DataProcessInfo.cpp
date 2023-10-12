

#include "huaweicloud/drs/v5/model/DataProcessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataProcessInfo::DataProcessInfo()
{
    filterConditionsIsSet_ = false;
    isBatchProcess_ = false;
    isBatchProcessIsSet_ = false;
    addColumnsIsSet_ = false;
    ddlOperationIsSet_ = false;
    dmlOperation_ = "";
    dmlOperationIsSet_ = false;
    dbObjectColumnInfoIsSet_ = false;
    dbOrTableRenameRuleIsSet_ = false;
    dbObjectIsSet_ = false;
    isSynchronized_ = false;
    isSynchronizedIsSet_ = false;
}

DataProcessInfo::~DataProcessInfo() = default;

void DataProcessInfo::validate()
{
}

web::json::value DataProcessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterConditionsIsSet_) {
        val[utility::conversions::to_string_t("filter_conditions")] = ModelBase::toJson(filterConditions_);
    }
    if(isBatchProcessIsSet_) {
        val[utility::conversions::to_string_t("is_batch_process")] = ModelBase::toJson(isBatchProcess_);
    }
    if(addColumnsIsSet_) {
        val[utility::conversions::to_string_t("add_columns")] = ModelBase::toJson(addColumns_);
    }
    if(ddlOperationIsSet_) {
        val[utility::conversions::to_string_t("ddl_operation")] = ModelBase::toJson(ddlOperation_);
    }
    if(dmlOperationIsSet_) {
        val[utility::conversions::to_string_t("dml_operation")] = ModelBase::toJson(dmlOperation_);
    }
    if(dbObjectColumnInfoIsSet_) {
        val[utility::conversions::to_string_t("db_object_column_info")] = ModelBase::toJson(dbObjectColumnInfo_);
    }
    if(dbOrTableRenameRuleIsSet_) {
        val[utility::conversions::to_string_t("db_or_table_rename_rule")] = ModelBase::toJson(dbOrTableRenameRule_);
    }
    if(dbObjectIsSet_) {
        val[utility::conversions::to_string_t("db_object")] = ModelBase::toJson(dbObject_);
    }
    if(isSynchronizedIsSet_) {
        val[utility::conversions::to_string_t("is_synchronized")] = ModelBase::toJson(isSynchronized_);
    }

    return val;
}
bool DataProcessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<DataFilteringCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_batch_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_batch_process"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBatchProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_columns"));
        if(!fieldValue.is_null())
        {
            std::vector<AddColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_operation"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dml_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dml_operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDmlOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_object_column_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object_column_info"));
        if(!fieldValue.is_null())
        {
            DbObjectColumnInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObjectColumnInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_or_table_rename_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_or_table_rename_rule"));
        if(!fieldValue.is_null())
        {
            DbOrTableRenameRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbOrTableRenameRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object"));
        if(!fieldValue.is_null())
        {
            DbObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_synchronized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_synchronized"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSynchronized(refVal);
        }
    }
    return ok;
}


std::vector<DataFilteringCondition>& DataProcessInfo::getFilterConditions()
{
    return filterConditions_;
}

void DataProcessInfo::setFilterConditions(const std::vector<DataFilteringCondition>& value)
{
    filterConditions_ = value;
    filterConditionsIsSet_ = true;
}

bool DataProcessInfo::filterConditionsIsSet() const
{
    return filterConditionsIsSet_;
}

void DataProcessInfo::unsetfilterConditions()
{
    filterConditionsIsSet_ = false;
}

bool DataProcessInfo::isIsBatchProcess() const
{
    return isBatchProcess_;
}

void DataProcessInfo::setIsBatchProcess(bool value)
{
    isBatchProcess_ = value;
    isBatchProcessIsSet_ = true;
}

bool DataProcessInfo::isBatchProcessIsSet() const
{
    return isBatchProcessIsSet_;
}

void DataProcessInfo::unsetisBatchProcess()
{
    isBatchProcessIsSet_ = false;
}

std::vector<AddColumnInfo>& DataProcessInfo::getAddColumns()
{
    return addColumns_;
}

void DataProcessInfo::setAddColumns(const std::vector<AddColumnInfo>& value)
{
    addColumns_ = value;
    addColumnsIsSet_ = true;
}

bool DataProcessInfo::addColumnsIsSet() const
{
    return addColumnsIsSet_;
}

void DataProcessInfo::unsetaddColumns()
{
    addColumnsIsSet_ = false;
}

std::map<std::string, std::string>& DataProcessInfo::getDdlOperation()
{
    return ddlOperation_;
}

void DataProcessInfo::setDdlOperation(const std::map<std::string, std::string>& value)
{
    ddlOperation_ = value;
    ddlOperationIsSet_ = true;
}

bool DataProcessInfo::ddlOperationIsSet() const
{
    return ddlOperationIsSet_;
}

void DataProcessInfo::unsetddlOperation()
{
    ddlOperationIsSet_ = false;
}

std::string DataProcessInfo::getDmlOperation() const
{
    return dmlOperation_;
}

void DataProcessInfo::setDmlOperation(const std::string& value)
{
    dmlOperation_ = value;
    dmlOperationIsSet_ = true;
}

bool DataProcessInfo::dmlOperationIsSet() const
{
    return dmlOperationIsSet_;
}

void DataProcessInfo::unsetdmlOperation()
{
    dmlOperationIsSet_ = false;
}

DbObjectColumnInfo DataProcessInfo::getDbObjectColumnInfo() const
{
    return dbObjectColumnInfo_;
}

void DataProcessInfo::setDbObjectColumnInfo(const DbObjectColumnInfo& value)
{
    dbObjectColumnInfo_ = value;
    dbObjectColumnInfoIsSet_ = true;
}

bool DataProcessInfo::dbObjectColumnInfoIsSet() const
{
    return dbObjectColumnInfoIsSet_;
}

void DataProcessInfo::unsetdbObjectColumnInfo()
{
    dbObjectColumnInfoIsSet_ = false;
}

DbOrTableRenameRule DataProcessInfo::getDbOrTableRenameRule() const
{
    return dbOrTableRenameRule_;
}

void DataProcessInfo::setDbOrTableRenameRule(const DbOrTableRenameRule& value)
{
    dbOrTableRenameRule_ = value;
    dbOrTableRenameRuleIsSet_ = true;
}

bool DataProcessInfo::dbOrTableRenameRuleIsSet() const
{
    return dbOrTableRenameRuleIsSet_;
}

void DataProcessInfo::unsetdbOrTableRenameRule()
{
    dbOrTableRenameRuleIsSet_ = false;
}

DbObject DataProcessInfo::getDbObject() const
{
    return dbObject_;
}

void DataProcessInfo::setDbObject(const DbObject& value)
{
    dbObject_ = value;
    dbObjectIsSet_ = true;
}

bool DataProcessInfo::dbObjectIsSet() const
{
    return dbObjectIsSet_;
}

void DataProcessInfo::unsetdbObject()
{
    dbObjectIsSet_ = false;
}

bool DataProcessInfo::isIsSynchronized() const
{
    return isSynchronized_;
}

void DataProcessInfo::setIsSynchronized(bool value)
{
    isSynchronized_ = value;
    isSynchronizedIsSet_ = true;
}

bool DataProcessInfo::isSynchronizedIsSet() const
{
    return isSynchronizedIsSet_;
}

void DataProcessInfo::unsetisSynchronized()
{
    isSynchronizedIsSet_ = false;
}

}
}
}
}
}


