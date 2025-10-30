

#include "huaweicloud/rds/v3/model/DatabaseSmallVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseSmallVersion::DatabaseSmallVersion()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    favored_ = false;
    favoredIsSet_ = false;
}

DatabaseSmallVersion::~DatabaseSmallVersion() = default;

void DatabaseSmallVersion::validate()
{
}

web::json::value DatabaseSmallVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(favoredIsSet_) {
        val[utility::conversions::to_string_t("favored")] = ModelBase::toJson(favored_);
    }

    return val;
}
bool DatabaseSmallVersion::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("favored"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favored"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavored(refVal);
        }
    }
    return ok;
}


std::string DatabaseSmallVersion::getId() const
{
    return id_;
}

void DatabaseSmallVersion::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DatabaseSmallVersion::idIsSet() const
{
    return idIsSet_;
}

void DatabaseSmallVersion::unsetid()
{
    idIsSet_ = false;
}

std::string DatabaseSmallVersion::getName() const
{
    return name_;
}

void DatabaseSmallVersion::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseSmallVersion::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseSmallVersion::unsetname()
{
    nameIsSet_ = false;
}

bool DatabaseSmallVersion::isFavored() const
{
    return favored_;
}

void DatabaseSmallVersion::setFavored(bool value)
{
    favored_ = value;
    favoredIsSet_ = true;
}

bool DatabaseSmallVersion::favoredIsSet() const
{
    return favoredIsSet_;
}

void DatabaseSmallVersion::unsetfavored()
{
    favoredIsSet_ = false;
}

}
}
}
}
}


