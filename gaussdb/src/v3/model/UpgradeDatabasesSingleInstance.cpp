

#include "huaweicloud/gaussdb/v3/model/UpgradeDatabasesSingleInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeDatabasesSingleInstance::UpgradeDatabasesSingleInstance()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

UpgradeDatabasesSingleInstance::~UpgradeDatabasesSingleInstance() = default;

void UpgradeDatabasesSingleInstance::validate()
{
}

web::json::value UpgradeDatabasesSingleInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool UpgradeDatabasesSingleInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string UpgradeDatabasesSingleInstance::getCurrentVersion() const
{
    return currentVersion_;
}

void UpgradeDatabasesSingleInstance::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool UpgradeDatabasesSingleInstance::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void UpgradeDatabasesSingleInstance::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string UpgradeDatabasesSingleInstance::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDatabasesSingleInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDatabasesSingleInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDatabasesSingleInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


