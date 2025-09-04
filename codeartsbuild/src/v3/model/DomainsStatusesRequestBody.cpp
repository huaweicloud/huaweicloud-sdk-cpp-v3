

#include "huaweicloud/codeartsbuild/v3/model/DomainsStatusesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DomainsStatusesRequestBody::DomainsStatusesRequestBody()
{
    domainIds_ = "";
    domainIdsIsSet_ = false;
}

DomainsStatusesRequestBody::~DomainsStatusesRequestBody() = default;

void DomainsStatusesRequestBody::validate()
{
}

web::json::value DomainsStatusesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdsIsSet_) {
        val[utility::conversions::to_string_t("domain_ids")] = ModelBase::toJson(domainIds_);
    }

    return val;
}
bool DomainsStatusesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainIds(refVal);
        }
    }
    return ok;
}


std::string DomainsStatusesRequestBody::getDomainIds() const
{
    return domainIds_;
}

void DomainsStatusesRequestBody::setDomainIds(const std::string& value)
{
    domainIds_ = value;
    domainIdsIsSet_ = true;
}

bool DomainsStatusesRequestBody::domainIdsIsSet() const
{
    return domainIdsIsSet_;
}

void DomainsStatusesRequestBody::unsetdomainIds()
{
    domainIdsIsSet_ = false;
}

}
}
}
}
}


