

#include "huaweicloud/gaussdb/v3/model/GaussMySqlDatabaseUser.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GaussMySqlDatabaseUser::GaussMySqlDatabaseUser()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

GaussMySqlDatabaseUser::~GaussMySqlDatabaseUser() = default;

void GaussMySqlDatabaseUser::validate()
{
}

web::json::value GaussMySqlDatabaseUser::toJson() const
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

bool GaussMySqlDatabaseUser::fromJson(const web::json::value& val)
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

std::string GaussMySqlDatabaseUser::getName() const
{
    return name_;
}

void GaussMySqlDatabaseUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussMySqlDatabaseUser::nameIsSet() const
{
    return nameIsSet_;
}

void GaussMySqlDatabaseUser::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussMySqlDatabaseUser::getHost() const
{
    return host_;
}

void GaussMySqlDatabaseUser::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool GaussMySqlDatabaseUser::hostIsSet() const
{
    return hostIsSet_;
}

void GaussMySqlDatabaseUser::unsethost()
{
    hostIsSet_ = false;
}

bool GaussMySqlDatabaseUser::isReadonly() const
{
    return readonly_;
}

void GaussMySqlDatabaseUser::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool GaussMySqlDatabaseUser::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void GaussMySqlDatabaseUser::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


