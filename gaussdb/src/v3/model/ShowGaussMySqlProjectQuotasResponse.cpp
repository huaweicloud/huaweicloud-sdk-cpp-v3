

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlProjectQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlProjectQuotasResponse::ShowGaussMySqlProjectQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowGaussMySqlProjectQuotasResponse::~ShowGaussMySqlProjectQuotasResponse() = default;

void ShowGaussMySqlProjectQuotasResponse::validate()
{
}

web::json::value ShowGaussMySqlProjectQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowGaussMySqlProjectQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            Project_quotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


Project_quotas ShowGaussMySqlProjectQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ShowGaussMySqlProjectQuotasResponse::setQuotas(const Project_quotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowGaussMySqlProjectQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowGaussMySqlProjectQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


