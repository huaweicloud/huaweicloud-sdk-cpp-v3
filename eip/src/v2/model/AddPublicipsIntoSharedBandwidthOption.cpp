

#include "huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




AddPublicipsIntoSharedBandwidthOption::AddPublicipsIntoSharedBandwidthOption()
{
    publicipInfoIsSet_ = false;
}

AddPublicipsIntoSharedBandwidthOption::~AddPublicipsIntoSharedBandwidthOption() = default;

void AddPublicipsIntoSharedBandwidthOption::validate()
{
}

web::json::value AddPublicipsIntoSharedBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipInfoIsSet_) {
        val[utility::conversions::to_string_t("publicip_info")] = ModelBase::toJson(publicipInfo_);
    }

    return val;
}
bool AddPublicipsIntoSharedBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_info"));
        if(!fieldValue.is_null())
        {
            std::vector<InsertPublicipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipInfo(refVal);
        }
    }
    return ok;
}


std::vector<InsertPublicipInfo>& AddPublicipsIntoSharedBandwidthOption::getPublicipInfo()
{
    return publicipInfo_;
}

void AddPublicipsIntoSharedBandwidthOption::setPublicipInfo(const std::vector<InsertPublicipInfo>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool AddPublicipsIntoSharedBandwidthOption::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void AddPublicipsIntoSharedBandwidthOption::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

}
}
}
}
}


