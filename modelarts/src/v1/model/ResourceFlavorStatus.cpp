

#include "huaweicloud/modelarts/v1/model/ResourceFlavorStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorStatus::ResourceFlavorStatus()
{
    phaseIsSet_ = false;
}

ResourceFlavorStatus::~ResourceFlavorStatus() = default;

void ResourceFlavorStatus::validate()
{
}

web::json::value ResourceFlavorStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool ResourceFlavorStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& ResourceFlavorStatus::getPhase()
{
    return phase_;
}

void ResourceFlavorStatus::setPhase(const std::map<std::string, std::string>& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool ResourceFlavorStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void ResourceFlavorStatus::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


