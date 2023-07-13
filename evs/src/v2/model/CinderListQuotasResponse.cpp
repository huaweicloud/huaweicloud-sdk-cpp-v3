

#include "huaweicloud/evs/v2/model/CinderListQuotasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListQuotasResponse::CinderListQuotasResponse()
{
    quotaSetIsSet_ = false;
}

CinderListQuotasResponse::~CinderListQuotasResponse() = default;

void CinderListQuotasResponse::validate()
{
}

web::json::value CinderListQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaSetIsSet_) {
        val[utility::conversions::to_string_t("quota_set")] = ModelBase::toJson(quotaSet_);
    }

    return val;
}

bool CinderListQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_set"));
        if(!fieldValue.is_null())
        {
            QuotaList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaSet(refVal);
        }
    }
    return ok;
}

QuotaList CinderListQuotasResponse::getQuotaSet() const
{
    return quotaSet_;
}

void CinderListQuotasResponse::setQuotaSet(const QuotaList& value)
{
    quotaSet_ = value;
    quotaSetIsSet_ = true;
}

bool CinderListQuotasResponse::quotaSetIsSet() const
{
    return quotaSetIsSet_;
}

void CinderListQuotasResponse::unsetquotaSet()
{
    quotaSetIsSet_ = false;
}

}
}
}
}
}


