

#include "huaweicloud/aad/v1/model/ShowBlockStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowBlockStatisticsRequest::ShowBlockStatisticsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowBlockStatisticsRequest::~ShowBlockStatisticsRequest() = default;

void ShowBlockStatisticsRequest::validate()
{
}

web::json::value ShowBlockStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowBlockStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string ShowBlockStatisticsRequest::getDomainId() const
{
    return domainId_;
}

void ShowBlockStatisticsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowBlockStatisticsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowBlockStatisticsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


