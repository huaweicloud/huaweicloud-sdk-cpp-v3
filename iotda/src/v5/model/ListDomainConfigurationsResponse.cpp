

#include "huaweicloud/iotda/v5/model/ListDomainConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDomainConfigurationsResponse::ListDomainConfigurationsResponse()
{
    domainConfigurationsIsSet_ = false;
    pageIsSet_ = false;
}

ListDomainConfigurationsResponse::~ListDomainConfigurationsResponse() = default;

void ListDomainConfigurationsResponse::validate()
{
}

web::json::value ListDomainConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainConfigurationsIsSet_) {
        val[utility::conversions::to_string_t("domain_configurations")] = ModelBase::toJson(domainConfigurations_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDomainConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainConfigurationDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainConfigurations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<DomainConfigurationDTO>& ListDomainConfigurationsResponse::getDomainConfigurations()
{
    return domainConfigurations_;
}

void ListDomainConfigurationsResponse::setDomainConfigurations(const std::vector<DomainConfigurationDTO>& value)
{
    domainConfigurations_ = value;
    domainConfigurationsIsSet_ = true;
}

bool ListDomainConfigurationsResponse::domainConfigurationsIsSet() const
{
    return domainConfigurationsIsSet_;
}

void ListDomainConfigurationsResponse::unsetdomainConfigurations()
{
    domainConfigurationsIsSet_ = false;
}

Page ListDomainConfigurationsResponse::getPage() const
{
    return page_;
}

void ListDomainConfigurationsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDomainConfigurationsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDomainConfigurationsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


