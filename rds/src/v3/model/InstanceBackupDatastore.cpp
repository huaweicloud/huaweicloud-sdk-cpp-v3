

#include "huaweicloud/rds/v3/model/InstanceBackupDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceBackupDatastore::InstanceBackupDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

InstanceBackupDatastore::~InstanceBackupDatastore() = default;

void InstanceBackupDatastore::validate()
{
}

web::json::value InstanceBackupDatastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool InstanceBackupDatastore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string InstanceBackupDatastore::getType() const
{
    return type_;
}

void InstanceBackupDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceBackupDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceBackupDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string InstanceBackupDatastore::getVersion() const
{
    return version_;
}

void InstanceBackupDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstanceBackupDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void InstanceBackupDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


