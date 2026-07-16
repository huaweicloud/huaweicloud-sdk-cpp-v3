

#include "huaweicloud/cce/v3/model/PodIdentityAssociationUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PodIdentityAssociationUpdate::PodIdentityAssociationUpdate()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
}

PodIdentityAssociationUpdate::~PodIdentityAssociationUpdate() = default;

void PodIdentityAssociationUpdate::validate()
{
}

web::json::value PodIdentityAssociationUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agencyName")] = ModelBase::toJson(agencyName_);
    }

    return val;
}
bool PodIdentityAssociationUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agencyName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agencyName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    return ok;
}


std::string PodIdentityAssociationUpdate::getAgencyName() const
{
    return agencyName_;
}

void PodIdentityAssociationUpdate::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool PodIdentityAssociationUpdate::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void PodIdentityAssociationUpdate::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


