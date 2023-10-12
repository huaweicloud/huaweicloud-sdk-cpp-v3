

#include "huaweicloud/gaussdbfornosql/v3/model/NoSqlModiflyEpsQuotasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSqlModiflyEpsQuotasRequestBody::NoSqlModiflyEpsQuotasRequestBody()
{
    quotasIsSet_ = false;
}

NoSqlModiflyEpsQuotasRequestBody::~NoSqlModiflyEpsQuotasRequestBody() = default;

void NoSqlModiflyEpsQuotasRequestBody::validate()
{
}

web::json::value NoSqlModiflyEpsQuotasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool NoSqlModiflyEpsQuotasRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<NoSqlRequestEpsQuota> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<NoSqlRequestEpsQuota>& NoSqlModiflyEpsQuotasRequestBody::getQuotas()
{
    return quotas_;
}

void NoSqlModiflyEpsQuotasRequestBody::setQuotas(const std::vector<NoSqlRequestEpsQuota>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool NoSqlModiflyEpsQuotasRequestBody::quotasIsSet() const
{
    return quotasIsSet_;
}

void NoSqlModiflyEpsQuotasRequestBody::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


