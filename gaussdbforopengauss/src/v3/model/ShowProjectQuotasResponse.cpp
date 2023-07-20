

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowProjectQuotasResponse::ShowProjectQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowProjectQuotasResponse::~ShowProjectQuotasResponse() = default;

void ShowProjectQuotasResponse::validate()
{
}

web::json::value ShowProjectQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}

bool ShowProjectQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            ProjectQuotasResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}

ProjectQuotasResult ShowProjectQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowProjectQuotasResponse::setQuotas(const ProjectQuotasResult& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowProjectQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowProjectQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


