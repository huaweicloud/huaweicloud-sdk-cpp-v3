

#include "huaweicloud/gaussdb/v3/model/CreateChDatabaseReplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChDatabaseReplicationRequestBody::CreateChDatabaseReplicationRequestBody()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    sourceDatabase_ = "";
    sourceDatabaseIsSet_ = false;
}

CreateChDatabaseReplicationRequestBody::~CreateChDatabaseReplicationRequestBody() = default;

void CreateChDatabaseReplicationRequestBody::validate()
{
}

web::json::value CreateChDatabaseReplicationRequestBody::toJson() const
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

    return val;
}
bool CreateChDatabaseReplicationRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateChDatabaseReplicationRequestBody::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void CreateChDatabaseReplicationRequestBody::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool CreateChDatabaseReplicationRequestBody::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void CreateChDatabaseReplicationRequestBody::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string CreateChDatabaseReplicationRequestBody::getSourceNodeId() const
{
    return sourceNodeId_;
}

void CreateChDatabaseReplicationRequestBody::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool CreateChDatabaseReplicationRequestBody::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void CreateChDatabaseReplicationRequestBody::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string CreateChDatabaseReplicationRequestBody::getSourceDatabase() const
{
    return sourceDatabase_;
}

void CreateChDatabaseReplicationRequestBody::setSourceDatabase(const std::string& value)
{
    sourceDatabase_ = value;
    sourceDatabaseIsSet_ = true;
}

bool CreateChDatabaseReplicationRequestBody::sourceDatabaseIsSet() const
{
    return sourceDatabaseIsSet_;
}

void CreateChDatabaseReplicationRequestBody::unsetsourceDatabase()
{
    sourceDatabaseIsSet_ = false;
}

}
}
}
}
}


