

#include "huaweicloud/cce/v3/model/AssumedAgency.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AssumedAgency::AssumedAgency()
{
    urn_ = "";
    urnIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

AssumedAgency::~AssumedAgency() = default;

void AssumedAgency::validate()
{
}

web::json::value AssumedAgency::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool AssumedAgency::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string AssumedAgency::getUrn() const
{
    return urn_;
}

void AssumedAgency::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool AssumedAgency::urnIsSet() const
{
    return urnIsSet_;
}

void AssumedAgency::unseturn()
{
    urnIsSet_ = false;
}

std::string AssumedAgency::getId() const
{
    return id_;
}

void AssumedAgency::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssumedAgency::idIsSet() const
{
    return idIsSet_;
}

void AssumedAgency::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


