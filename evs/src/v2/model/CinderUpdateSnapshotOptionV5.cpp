

#include "huaweicloud/evs/v2/model/CinderUpdateSnapshotOptionV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderUpdateSnapshotOptionV5::CinderUpdateSnapshotOptionV5()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instantAccess_ = false;
    instantAccessIsSet_ = false;
}

CinderUpdateSnapshotOptionV5::~CinderUpdateSnapshotOptionV5() = default;

void CinderUpdateSnapshotOptionV5::validate()
{
}

web::json::value CinderUpdateSnapshotOptionV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instantAccessIsSet_) {
        val[utility::conversions::to_string_t("instant_access")] = ModelBase::toJson(instantAccess_);
    }

    return val;
}
bool CinderUpdateSnapshotOptionV5::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instant_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instant_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstantAccess(refVal);
        }
    }
    return ok;
}


std::string CinderUpdateSnapshotOptionV5::getName() const
{
    return name_;
}

void CinderUpdateSnapshotOptionV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CinderUpdateSnapshotOptionV5::nameIsSet() const
{
    return nameIsSet_;
}

void CinderUpdateSnapshotOptionV5::unsetname()
{
    nameIsSet_ = false;
}

std::string CinderUpdateSnapshotOptionV5::getDescription() const
{
    return description_;
}

void CinderUpdateSnapshotOptionV5::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CinderUpdateSnapshotOptionV5::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CinderUpdateSnapshotOptionV5::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CinderUpdateSnapshotOptionV5::isInstantAccess() const
{
    return instantAccess_;
}

void CinderUpdateSnapshotOptionV5::setInstantAccess(bool value)
{
    instantAccess_ = value;
    instantAccessIsSet_ = true;
}

bool CinderUpdateSnapshotOptionV5::instantAccessIsSet() const
{
    return instantAccessIsSet_;
}

void CinderUpdateSnapshotOptionV5::unsetinstantAccess()
{
    instantAccessIsSet_ = false;
}

}
}
}
}
}


