

#include "huaweicloud/dds/v3/model/CreateManualBackupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateManualBackupOption::CreateManualBackupOption()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateManualBackupOption::~CreateManualBackupOption() = default;

void CreateManualBackupOption::validate()
{
}

web::json::value CreateManualBackupOption::toJson() const
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
bool CreateManualBackupOption::fromJson(const web::json::value& val)
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


std::string CreateManualBackupOption::getInstanceId() const
{
    return instanceId_;
}

void CreateManualBackupOption::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateManualBackupOption::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateManualBackupOption::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateManualBackupOption::getName() const
{
    return name_;
}

void CreateManualBackupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateManualBackupOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateManualBackupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateManualBackupOption::getDescription() const
{
    return description_;
}

void CreateManualBackupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateManualBackupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateManualBackupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


