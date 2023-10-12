

#include "huaweicloud/gaussdbfornosql/v3/model/ListEpsQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListEpsQuotasResponse::ListEpsQuotasResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    quotasIsSet_ = false;
}

ListEpsQuotasResponse::~ListEpsQuotasResponse() = default;

void ListEpsQuotasResponse::validate()
{
}

web::json::value ListEpsQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ListEpsQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<NoSqlQueryEpsQuotaInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
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

std::vector<NoSqlQueryEpsQuotaInfo>& ListEpsQuotasResponse::getQuotas()
{
    return quotas_;
}

void ListEpsQuotasResponse::setQuotas(const std::vector<NoSqlQueryEpsQuotaInfo>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ListEpsQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ListEpsQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


