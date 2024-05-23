

#include "huaweicloud/ram/v1/model/ListQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListQuotaResponse::ListQuotaResponse()
{
    quotasIsSet_ = false;
}

ListQuotaResponse::~ListQuotaResponse() = default;

void ListQuotaResponse::validate()
{
}

web::json::value ListQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ListQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            QuotaResourcesDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


QuotaResourcesDto ListQuotaResponse::getQuotas() const
{
    return quotas_;
}

void ListQuotaResponse::setQuotas(const QuotaResourcesDto& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ListQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ListQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


