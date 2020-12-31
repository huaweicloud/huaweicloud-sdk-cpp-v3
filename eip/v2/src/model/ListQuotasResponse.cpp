

#include "huaweicloud/eip/model/ListQuotasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListQuotasResponse::ListQuotasResponse()
{
    quotasIsSet_ = false;
}

ListQuotasResponse::~ListQuotasResponse() = default;

void ListQuotasResponse::validate()
{
}

web::json::value ListQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}

bool ListQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            ResourceResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


ResourceResp ListQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ListQuotasResponse::setQuotas(const ResourceResp& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ListQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ListQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


