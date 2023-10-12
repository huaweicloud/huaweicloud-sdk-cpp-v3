

#include "huaweicloud/dds/v3/model/BackupDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupDatabase::BackupDatabase()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

BackupDatabase::~BackupDatabase() = default;

void BackupDatabase::validate()
{
}

web::json::value BackupDatabase::toJson() const
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
bool BackupDatabase::fromJson(const web::json::value& val)
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


std::string BackupDatabase::getType() const
{
    return type_;
}

void BackupDatabase::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupDatabase::typeIsSet() const
{
    return typeIsSet_;
}

void BackupDatabase::unsettype()
{
    typeIsSet_ = false;
}

std::string BackupDatabase::getVersion() const
{
    return version_;
}

void BackupDatabase::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool BackupDatabase::versionIsSet() const
{
    return versionIsSet_;
}

void BackupDatabase::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


