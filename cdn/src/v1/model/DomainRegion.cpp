

#include "huaweicloud/cdn/v1/model/DomainRegion.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DomainRegion::DomainRegion()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    regionIspDetailsIsSet_ = false;
}

DomainRegion::~DomainRegion() = default;

void DomainRegion::validate()
{
}

web::json::value DomainRegion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(regionIspDetailsIsSet_) {
        val[utility::conversions::to_string_t("region_isp_details")] = ModelBase::toJson(regionIspDetails_);
    }

    return val;
}

bool DomainRegion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_isp_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_isp_details"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionIspDetails(refVal);
        }
    }
    return ok;
}

std::string DomainRegion::getDomainName() const
{
    return domainName_;
}

void DomainRegion::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainRegion::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainRegion::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& DomainRegion::getRegionIspDetails()
{
    return regionIspDetails_;
}

void DomainRegion::setRegionIspDetails(const std::vector<std::map<std::string, Object>>& value)
{
    regionIspDetails_ = value;
    regionIspDetailsIsSet_ = true;
}

bool DomainRegion::regionIspDetailsIsSet() const
{
    return regionIspDetailsIsSet_;
}

void DomainRegion::unsetregionIspDetails()
{
    regionIspDetailsIsSet_ = false;
}

}
}
}
}
}


