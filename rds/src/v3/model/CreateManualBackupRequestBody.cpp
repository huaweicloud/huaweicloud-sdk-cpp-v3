

#include "huaweicloud/rds/v3/model/CreateManualBackupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateManualBackupRequestBody::CreateManualBackupRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    databasesIsSet_ = false;
}

CreateManualBackupRequestBody::~CreateManualBackupRequestBody() = default;

void CreateManualBackupRequestBody::validate()
{
}

web::json::value CreateManualBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool CreateManualBackupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string CreateManualBackupRequestBody::getInstanceId() const
{
    return instanceId_;
}

void CreateManualBackupRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateManualBackupRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateManualBackupRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateManualBackupRequestBody::getName() const
{
    return name_;
}

void CreateManualBackupRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateManualBackupRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateManualBackupRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateManualBackupRequestBody::getDescription() const
{
    return description_;
}

void CreateManualBackupRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateManualBackupRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateManualBackupRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<BackupDatabase>& CreateManualBackupRequestBody::getDatabases()
{
    return databases_;
}

void CreateManualBackupRequestBody::setDatabases(const std::vector<BackupDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateManualBackupRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateManualBackupRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


