

#include "huaweicloud/gaussdb/v3/model/MysqlEngineVersionInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlEngineVersionInfo::MysqlEngineVersionInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

MysqlEngineVersionInfo::~MysqlEngineVersionInfo() = default;

void MysqlEngineVersionInfo::validate()
{
}

web::json::value MysqlEngineVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool MysqlEngineVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}

std::string MysqlEngineVersionInfo::getId() const
{
    return id_;
}

void MysqlEngineVersionInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlEngineVersionInfo::idIsSet() const
{
    return idIsSet_;
}

void MysqlEngineVersionInfo::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlEngineVersionInfo::getName() const
{
    return name_;
}

void MysqlEngineVersionInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlEngineVersionInfo::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlEngineVersionInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


