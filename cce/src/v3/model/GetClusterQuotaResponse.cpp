

#include "huaweicloud/cce/v3/model/GetClusterQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterQuotaResponse::GetClusterQuotaResponse()
{
    quotasIsSet_ = false;
}

GetClusterQuotaResponse::~GetClusterQuotaResponse() = default;

void GetClusterQuotaResponse::validate()
{
}

web::json::value GetClusterQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool GetClusterQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            GetClusterQuotaBody_quotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


GetClusterQuotaBody_quotas GetClusterQuotaResponse::getQuotas() const
{
    return quotas_;
}

void GetClusterQuotaResponse::setQuotas(const GetClusterQuotaBody_quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool GetClusterQuotaResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void GetClusterQuotaResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


