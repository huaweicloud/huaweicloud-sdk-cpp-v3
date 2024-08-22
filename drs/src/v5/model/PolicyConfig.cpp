

#include "huaweicloud/drs/v5/model/PolicyConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PolicyConfig::PolicyConfig()
{
    filterDdlPolicy_ = "";
    filterDdlPolicyIsSet_ = false;
    conflictPolicy_ = "";
    conflictPolicyIsSet_ = false;
    indexTrans_ = false;
    indexTransIsSet_ = false;
    ddlTrans_ = false;
    ddlTransIsSet_ = false;
    dataSyncTopologyType_ = "";
    dataSyncTopologyTypeIsSet_ = false;
    supportDdlInfo_ = "";
    supportDdlInfoIsSet_ = false;
    syncTypePolicy_ = "";
    syncTypePolicyIsSet_ = false;
    incrementReadMode_ = "";
    incrementReadModeIsSet_ = false;
    dmlTypes_ = "";
    dmlTypesIsSet_ = false;
    isCreateTableWithIndex_ = false;
    isCreateTableWithIndexIsSet_ = false;
}

PolicyConfig::~PolicyConfig() = default;

void PolicyConfig::validate()
{
}

web::json::value PolicyConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterDdlPolicyIsSet_) {
        val[utility::conversions::to_string_t("filter_ddl_policy")] = ModelBase::toJson(filterDdlPolicy_);
    }
    if(conflictPolicyIsSet_) {
        val[utility::conversions::to_string_t("conflict_policy")] = ModelBase::toJson(conflictPolicy_);
    }
    if(indexTransIsSet_) {
        val[utility::conversions::to_string_t("index_trans")] = ModelBase::toJson(indexTrans_);
    }
    if(ddlTransIsSet_) {
        val[utility::conversions::to_string_t("ddl_trans")] = ModelBase::toJson(ddlTrans_);
    }
    if(dataSyncTopologyTypeIsSet_) {
        val[utility::conversions::to_string_t("data_sync_topology_type")] = ModelBase::toJson(dataSyncTopologyType_);
    }
    if(supportDdlInfoIsSet_) {
        val[utility::conversions::to_string_t("support_ddl_info")] = ModelBase::toJson(supportDdlInfo_);
    }
    if(syncTypePolicyIsSet_) {
        val[utility::conversions::to_string_t("sync_type_policy")] = ModelBase::toJson(syncTypePolicy_);
    }
    if(incrementReadModeIsSet_) {
        val[utility::conversions::to_string_t("increment_read_mode")] = ModelBase::toJson(incrementReadMode_);
    }
    if(dmlTypesIsSet_) {
        val[utility::conversions::to_string_t("dml_types")] = ModelBase::toJson(dmlTypes_);
    }
    if(isCreateTableWithIndexIsSet_) {
        val[utility::conversions::to_string_t("is_create_table_with_index")] = ModelBase::toJson(isCreateTableWithIndex_);
    }

    return val;
}
bool PolicyConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter_ddl_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_ddl_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterDdlPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddl_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_trans"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlTrans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_sync_topology_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_sync_topology_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSyncTopologyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_ddl_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_ddl_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportDdlInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_type_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_type_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncTypePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_read_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_read_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementReadMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dml_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dml_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDmlTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_create_table_with_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_create_table_with_index"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCreateTableWithIndex(refVal);
        }
    }
    return ok;
}


std::string PolicyConfig::getFilterDdlPolicy() const
{
    return filterDdlPolicy_;
}

void PolicyConfig::setFilterDdlPolicy(const std::string& value)
{
    filterDdlPolicy_ = value;
    filterDdlPolicyIsSet_ = true;
}

bool PolicyConfig::filterDdlPolicyIsSet() const
{
    return filterDdlPolicyIsSet_;
}

void PolicyConfig::unsetfilterDdlPolicy()
{
    filterDdlPolicyIsSet_ = false;
}

std::string PolicyConfig::getConflictPolicy() const
{
    return conflictPolicy_;
}

void PolicyConfig::setConflictPolicy(const std::string& value)
{
    conflictPolicy_ = value;
    conflictPolicyIsSet_ = true;
}

bool PolicyConfig::conflictPolicyIsSet() const
{
    return conflictPolicyIsSet_;
}

void PolicyConfig::unsetconflictPolicy()
{
    conflictPolicyIsSet_ = false;
}

bool PolicyConfig::isIndexTrans() const
{
    return indexTrans_;
}

void PolicyConfig::setIndexTrans(bool value)
{
    indexTrans_ = value;
    indexTransIsSet_ = true;
}

bool PolicyConfig::indexTransIsSet() const
{
    return indexTransIsSet_;
}

void PolicyConfig::unsetindexTrans()
{
    indexTransIsSet_ = false;
}

bool PolicyConfig::isDdlTrans() const
{
    return ddlTrans_;
}

void PolicyConfig::setDdlTrans(bool value)
{
    ddlTrans_ = value;
    ddlTransIsSet_ = true;
}

bool PolicyConfig::ddlTransIsSet() const
{
    return ddlTransIsSet_;
}

void PolicyConfig::unsetddlTrans()
{
    ddlTransIsSet_ = false;
}

std::string PolicyConfig::getDataSyncTopologyType() const
{
    return dataSyncTopologyType_;
}

void PolicyConfig::setDataSyncTopologyType(const std::string& value)
{
    dataSyncTopologyType_ = value;
    dataSyncTopologyTypeIsSet_ = true;
}

bool PolicyConfig::dataSyncTopologyTypeIsSet() const
{
    return dataSyncTopologyTypeIsSet_;
}

void PolicyConfig::unsetdataSyncTopologyType()
{
    dataSyncTopologyTypeIsSet_ = false;
}

std::string PolicyConfig::getSupportDdlInfo() const
{
    return supportDdlInfo_;
}

void PolicyConfig::setSupportDdlInfo(const std::string& value)
{
    supportDdlInfo_ = value;
    supportDdlInfoIsSet_ = true;
}

bool PolicyConfig::supportDdlInfoIsSet() const
{
    return supportDdlInfoIsSet_;
}

void PolicyConfig::unsetsupportDdlInfo()
{
    supportDdlInfoIsSet_ = false;
}

std::string PolicyConfig::getSyncTypePolicy() const
{
    return syncTypePolicy_;
}

void PolicyConfig::setSyncTypePolicy(const std::string& value)
{
    syncTypePolicy_ = value;
    syncTypePolicyIsSet_ = true;
}

bool PolicyConfig::syncTypePolicyIsSet() const
{
    return syncTypePolicyIsSet_;
}

void PolicyConfig::unsetsyncTypePolicy()
{
    syncTypePolicyIsSet_ = false;
}

std::string PolicyConfig::getIncrementReadMode() const
{
    return incrementReadMode_;
}

void PolicyConfig::setIncrementReadMode(const std::string& value)
{
    incrementReadMode_ = value;
    incrementReadModeIsSet_ = true;
}

bool PolicyConfig::incrementReadModeIsSet() const
{
    return incrementReadModeIsSet_;
}

void PolicyConfig::unsetincrementReadMode()
{
    incrementReadModeIsSet_ = false;
}

std::string PolicyConfig::getDmlTypes() const
{
    return dmlTypes_;
}

void PolicyConfig::setDmlTypes(const std::string& value)
{
    dmlTypes_ = value;
    dmlTypesIsSet_ = true;
}

bool PolicyConfig::dmlTypesIsSet() const
{
    return dmlTypesIsSet_;
}

void PolicyConfig::unsetdmlTypes()
{
    dmlTypesIsSet_ = false;
}

bool PolicyConfig::isIsCreateTableWithIndex() const
{
    return isCreateTableWithIndex_;
}

void PolicyConfig::setIsCreateTableWithIndex(bool value)
{
    isCreateTableWithIndex_ = value;
    isCreateTableWithIndexIsSet_ = true;
}

bool PolicyConfig::isCreateTableWithIndexIsSet() const
{
    return isCreateTableWithIndexIsSet_;
}

void PolicyConfig::unsetisCreateTableWithIndex()
{
    isCreateTableWithIndexIsSet_ = false;
}

}
}
}
}
}


