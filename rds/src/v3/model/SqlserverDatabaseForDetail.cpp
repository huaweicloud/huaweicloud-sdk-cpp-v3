

#include "huaweicloud/rds/v3/model/SqlserverDatabaseForDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverDatabaseForDetail::SqlserverDatabaseForDetail()
{
    name_ = "";
    nameIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

SqlserverDatabaseForDetail::~SqlserverDatabaseForDetail() = default;

void SqlserverDatabaseForDetail::validate()
{
}

web::json::value SqlserverDatabaseForDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool SqlserverDatabaseForDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("character_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string SqlserverDatabaseForDetail::getName() const
{
    return name_;
}

void SqlserverDatabaseForDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SqlserverDatabaseForDetail::nameIsSet() const
{
    return nameIsSet_;
}

void SqlserverDatabaseForDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string SqlserverDatabaseForDetail::getCharacterSet() const
{
    return characterSet_;
}

void SqlserverDatabaseForDetail::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool SqlserverDatabaseForDetail::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void SqlserverDatabaseForDetail::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string SqlserverDatabaseForDetail::getState() const
{
    return state_;
}

void SqlserverDatabaseForDetail::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SqlserverDatabaseForDetail::stateIsSet() const
{
    return stateIsSet_;
}

void SqlserverDatabaseForDetail::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


