

#include "huaweicloud/live/v1/model/ShowDomainResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainResponse::ShowDomainResponse()
{
    total_ = 0.0;
    totalIsSet_ = false;
    domainInfoIsSet_ = false;
}

ShowDomainResponse::~ShowDomainResponse() = default;

void ShowDomainResponse::validate()
{
}

web::json::value ShowDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainInfoIsSet_) {
        val[utility::conversions::to_string_t("domain_info")] = ModelBase::toJson(domainInfo_);
    }

    return val;
}

bool ShowDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DecoupledLiveDomainInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainInfo(refVal);
        }
    }
    return ok;
}

double ShowDomainResponse::getTotal() const
{
    return total_;
}

void ShowDomainResponse::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowDomainResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowDomainResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DecoupledLiveDomainInfo>& ShowDomainResponse::getDomainInfo()
{
    return domainInfo_;
}

void ShowDomainResponse::setDomainInfo(const std::vector<DecoupledLiveDomainInfo>& value)
{
    domainInfo_ = value;
    domainInfoIsSet_ = true;
}

bool ShowDomainResponse::domainInfoIsSet() const
{
    return domainInfoIsSet_;
}

void ShowDomainResponse::unsetdomainInfo()
{
    domainInfoIsSet_ = false;
}

}
}
}
}
}


