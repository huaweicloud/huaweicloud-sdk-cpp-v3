

#include "huaweicloud/aad/v2/model/DeleteDomainV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DeleteDomainV2RequestBody::DeleteDomainV2RequestBody()
{
    domainIdIsSet_ = false;
}

DeleteDomainV2RequestBody::~DeleteDomainV2RequestBody() = default;

void DeleteDomainV2RequestBody::validate()
{
}

web::json::value DeleteDomainV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool DeleteDomainV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteDomainV2RequestBody::getDomainId()
{
    return domainId_;
}

void DeleteDomainV2RequestBody::setDomainId(const std::vector<std::string>& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteDomainV2RequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteDomainV2RequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


