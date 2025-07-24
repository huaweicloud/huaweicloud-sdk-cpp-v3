

#include "huaweicloud/cloudtest/v1/model/PiFilterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PiFilterInfo::PiFilterInfo()
{
    piSprintsIsSet_ = false;
    allPi_ = false;
    allPiIsSet_ = false;
}

PiFilterInfo::~PiFilterInfo() = default;

void PiFilterInfo::validate()
{
}

web::json::value PiFilterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(piSprintsIsSet_) {
        val[utility::conversions::to_string_t("pi_sprints")] = ModelBase::toJson(piSprints_);
    }
    if(allPiIsSet_) {
        val[utility::conversions::to_string_t("all_pi")] = ModelBase::toJson(allPi_);
    }

    return val;
}
bool PiFilterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pi_sprints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_sprints"));
        if(!fieldValue.is_null())
        {
            std::vector<PiInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiSprints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_pi"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllPi(refVal);
        }
    }
    return ok;
}


std::vector<PiInfo>& PiFilterInfo::getPiSprints()
{
    return piSprints_;
}

void PiFilterInfo::setPiSprints(const std::vector<PiInfo>& value)
{
    piSprints_ = value;
    piSprintsIsSet_ = true;
}

bool PiFilterInfo::piSprintsIsSet() const
{
    return piSprintsIsSet_;
}

void PiFilterInfo::unsetpiSprints()
{
    piSprintsIsSet_ = false;
}

bool PiFilterInfo::isAllPi() const
{
    return allPi_;
}

void PiFilterInfo::setAllPi(bool value)
{
    allPi_ = value;
    allPiIsSet_ = true;
}

bool PiFilterInfo::allPiIsSet() const
{
    return allPiIsSet_;
}

void PiFilterInfo::unsetallPi()
{
    allPiIsSet_ = false;
}

}
}
}
}
}


