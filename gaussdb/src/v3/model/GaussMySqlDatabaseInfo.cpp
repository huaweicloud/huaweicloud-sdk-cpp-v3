

#include "huaweicloud/gaussdb/v3/model/GaussMySqlDatabaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GaussMySqlDatabaseInfo::GaussMySqlDatabaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

GaussMySqlDatabaseInfo::~GaussMySqlDatabaseInfo() = default;

void GaussMySqlDatabaseInfo::validate()
{
}

web::json::value GaussMySqlDatabaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}
bool GaussMySqlDatabaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    return ok;
}


std::string GaussMySqlDatabaseInfo::getName() const
{
    return name_;
}

void GaussMySqlDatabaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussMySqlDatabaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void GaussMySqlDatabaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussMySqlDatabaseInfo::getHost() const
{
    return host_;
}

void GaussMySqlDatabaseInfo::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool GaussMySqlDatabaseInfo::hostIsSet() const
{
    return hostIsSet_;
}

void GaussMySqlDatabaseInfo::unsethost()
{
    hostIsSet_ = false;
}

bool GaussMySqlDatabaseInfo::isReadonly() const
{
    return readonly_;
}

void GaussMySqlDatabaseInfo::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool GaussMySqlDatabaseInfo::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void GaussMySqlDatabaseInfo::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


