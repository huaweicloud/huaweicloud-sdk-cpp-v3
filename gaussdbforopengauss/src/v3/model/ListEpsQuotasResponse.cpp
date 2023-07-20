

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEpsQuotasResponse::ListEpsQuotasResponse()
{
    epsQuotasIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListEpsQuotasResponse::~ListEpsQuotasResponse() = default;

void ListEpsQuotasResponse::validate()
{
}

web::json::value ListEpsQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsQuotasIsSet_) {
        val[utility::conversions::to_string_t("eps_quotas")] = ModelBase::toJson(epsQuotas_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListEpsQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<ListQuotaResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsQuotas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<ListQuotaResult>& ListEpsQuotasResponse::getEpsQuotas()
{
    return epsQuotas_;
}

void ListEpsQuotasResponse::setEpsQuotas(const std::vector<ListQuotaResult>& value)
{
    epsQuotas_ = value;
    epsQuotasIsSet_ = true;
}

bool ListEpsQuotasResponse::epsQuotasIsSet() const
{
    return epsQuotasIsSet_;
}

void ListEpsQuotasResponse::unsetepsQuotas()
{
    epsQuotasIsSet_ = false;
}

int32_t ListEpsQuotasResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEpsQuotasResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEpsQuotasResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEpsQuotasResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


