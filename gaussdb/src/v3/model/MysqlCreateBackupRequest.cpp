

#include "huaweicloud/gaussdb/v3/model/MysqlCreateBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlCreateBackupRequest::MysqlCreateBackupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

MysqlCreateBackupRequest::~MysqlCreateBackupRequest() = default;

void MysqlCreateBackupRequest::validate()
{
}

web::json::value MysqlCreateBackupRequest::toJson() const
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

    return val;
}

bool MysqlCreateBackupRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string MysqlCreateBackupRequest::getInstanceId() const
{
    return instanceId_;
}

void MysqlCreateBackupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool MysqlCreateBackupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void MysqlCreateBackupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string MysqlCreateBackupRequest::getName() const
{
    return name_;
}

void MysqlCreateBackupRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlCreateBackupRequest::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlCreateBackupRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlCreateBackupRequest::getDescription() const
{
    return description_;
}

void MysqlCreateBackupRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MysqlCreateBackupRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MysqlCreateBackupRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


