

#include "huaweicloud/gaussdb/v3/model/UpdateChDatabaseConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateChDatabaseConfigRequestBody::UpdateChDatabaseConfigRequestBody()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    sourceNodeId_ = "";
    sourceNodeIdIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UpdateChDatabaseConfigRequestBody::~UpdateChDatabaseConfigRequestBody() = default;

void UpdateChDatabaseConfigRequestBody::validate()
{
}

web::json::value UpdateChDatabaseConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(sourceNodeIdIsSet_) {
        val[utility::conversions::to_string_t("source_node_id")] = ModelBase::toJson(sourceNodeId_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool UpdateChDatabaseConfigRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string UpdateChDatabaseConfigRequestBody::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void UpdateChDatabaseConfigRequestBody::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool UpdateChDatabaseConfigRequestBody::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void UpdateChDatabaseConfigRequestBody::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string UpdateChDatabaseConfigRequestBody::getSourceNodeId() const
{
    return sourceNodeId_;
}

void UpdateChDatabaseConfigRequestBody::setSourceNodeId(const std::string& value)
{
    sourceNodeId_ = value;
    sourceNodeIdIsSet_ = true;
}

bool UpdateChDatabaseConfigRequestBody::sourceNodeIdIsSet() const
{
    return sourceNodeIdIsSet_;
}

void UpdateChDatabaseConfigRequestBody::unsetsourceNodeId()
{
    sourceNodeIdIsSet_ = false;
}

std::string UpdateChDatabaseConfigRequestBody::getDatabase() const
{
    return database_;
}

void UpdateChDatabaseConfigRequestBody::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool UpdateChDatabaseConfigRequestBody::databaseIsSet() const
{
    return databaseIsSet_;
}

void UpdateChDatabaseConfigRequestBody::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string UpdateChDatabaseConfigRequestBody::getValue() const
{
    return value_;
}

void UpdateChDatabaseConfigRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateChDatabaseConfigRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateChDatabaseConfigRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


