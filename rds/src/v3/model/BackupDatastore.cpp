

#include "huaweicloud/rds/v3/model/BackupDatastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BackupDatastore::BackupDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

BackupDatastore::~BackupDatastore() = default;

void BackupDatastore::validate()
{
}

web::json::value BackupDatastore::toJson() const
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

bool BackupDatastore::fromJson(const web::json::value& val)
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

std::string BackupDatastore::getType() const
{
    return type_;
}

void BackupDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void BackupDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string BackupDatastore::getVersion() const
{
    return version_;
}

void BackupDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool BackupDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void BackupDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


