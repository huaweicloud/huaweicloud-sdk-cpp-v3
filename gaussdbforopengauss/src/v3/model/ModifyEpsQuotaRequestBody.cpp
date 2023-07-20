

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyEpsQuotaRequestBody::ModifyEpsQuotaRequestBody()
{
    epsQuotasIsSet_ = false;
}

ModifyEpsQuotaRequestBody::~ModifyEpsQuotaRequestBody() = default;

void ModifyEpsQuotaRequestBody::validate()
{
}

web::json::value ModifyEpsQuotaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsQuotasIsSet_) {
        val[utility::conversions::to_string_t("eps_quotas")] = ModelBase::toJson(epsQuotas_);
    }

    return val;
}

bool ModifyEpsQuotaRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<EpsQuotasOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsQuotas(refVal);
        }
    }
    return ok;
}

std::vector<EpsQuotasOption>& ModifyEpsQuotaRequestBody::getEpsQuotas()
{
    return epsQuotas_;
}

void ModifyEpsQuotaRequestBody::setEpsQuotas(const std::vector<EpsQuotasOption>& value)
{
    epsQuotas_ = value;
    epsQuotasIsSet_ = true;
}

bool ModifyEpsQuotaRequestBody::epsQuotasIsSet() const
{
    return epsQuotasIsSet_;
}

void ModifyEpsQuotaRequestBody::unsetepsQuotas()
{
    epsQuotasIsSet_ = false;
}

}
}
}
}
}


