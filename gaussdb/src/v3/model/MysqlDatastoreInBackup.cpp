

#include "huaweicloud/gaussdb/v3/model/MysqlDatastoreInBackup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlDatastoreInBackup::MysqlDatastoreInBackup()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

MysqlDatastoreInBackup::~MysqlDatastoreInBackup() = default;

void MysqlDatastoreInBackup::validate()
{
}

web::json::value MysqlDatastoreInBackup::toJson() const
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

bool MysqlDatastoreInBackup::fromJson(const web::json::value& val)
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

std::string MysqlDatastoreInBackup::getType() const
{
    return type_;
}

void MysqlDatastoreInBackup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlDatastoreInBackup::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlDatastoreInBackup::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlDatastoreInBackup::getVersion() const
{
    return version_;
}

void MysqlDatastoreInBackup::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool MysqlDatastoreInBackup::versionIsSet() const
{
    return versionIsSet_;
}

void MysqlDatastoreInBackup::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


