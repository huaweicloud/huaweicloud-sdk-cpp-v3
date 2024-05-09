

#include "huaweicloud/gaussdb/v3/model/CreateStarRocksDataReplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarRocksDataReplication::CreateStarRocksDataReplication()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabase_ = "";
    sourceDatabaseIsSet_ = false;
    targetDatabase_ = "";
    targetDatabaseIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

CreateStarRocksDataReplication::~CreateStarRocksDataReplication() = default;

void CreateStarRocksDataReplication::validate()
{
}

web::json::value CreateStarRocksDataReplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceNodeIdIsSet_) {
        val[utility::conversions::to_string_t("source_node_id")] = ModelBase::toJson(sourceNodeId_);
    }
    if(sourceDatabaseIsSet_) {
        val[utility::conversions::to_string_t("source_database")] = ModelBase::toJson(sourceDatabase_);
    }
    if(targetDatabaseIsSet_) {
        val[utility::conversions::to_string_t("target_database")] = ModelBase::toJson(targetDatabase_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool CreateStarRocksDataReplication::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDatabase(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    return ok;
}


std::string CreateStarRocksDataReplication::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void CreateStarRocksDataReplication::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool CreateStarRocksDataReplication::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void CreateStarRocksDataReplication::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string CreateStarRocksDataReplication::getSourceNodeId() const
{
    return sourceNodeId_;
}

void CreateStarRocksDataReplication::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool CreateStarRocksDataReplication::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void CreateStarRocksDataReplication::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string CreateStarRocksDataReplication::getSourceDatabase() const
{
    return sourceDatabase_;
}

void CreateStarRocksDataReplication::setSourceDatabase(const std::string& value)
{
    sourceDatabase_ = value;
    sourceDatabaseIsSet_ = true;
}

bool CreateStarRocksDataReplication::sourceDatabaseIsSet() const
{
    return sourceDatabaseIsSet_;
}

void CreateStarRocksDataReplication::unsetsourceDatabase()
{
    sourceDatabaseIsSet_ = false;
}

std::string CreateStarRocksDataReplication::getTargetDatabase() const
{
    return targetDatabase_;
}

void CreateStarRocksDataReplication::setTargetDatabase(const std::string& value)
{
    targetDatabase_ = value;
    targetDatabaseIsSet_ = true;
}

bool CreateStarRocksDataReplication::targetDatabaseIsSet() const
{
    return targetDatabaseIsSet_;
}

void CreateStarRocksDataReplication::unsettargetDatabase()
{
    targetDatabaseIsSet_ = false;
}

std::string CreateStarRocksDataReplication::getTaskName() const
{
    return taskName_;
}

void CreateStarRocksDataReplication::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateStarRocksDataReplication::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateStarRocksDataReplication::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


