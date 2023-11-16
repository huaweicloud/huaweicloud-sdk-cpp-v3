

#include "huaweicloud/aad/v1/model/ListUnblockQuotaStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListUnblockQuotaStatisticsRequest::ListUnblockQuotaStatisticsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListUnblockQuotaStatisticsRequest::~ListUnblockQuotaStatisticsRequest() = default;

void ListUnblockQuotaStatisticsRequest::validate()
{
}

web::json::value ListUnblockQuotaStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListUnblockQuotaStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ListUnblockQuotaStatisticsRequest::getDomainId() const
{
    return domainId_;
}

void ListUnblockQuotaStatisticsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListUnblockQuotaStatisticsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListUnblockQuotaStatisticsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


