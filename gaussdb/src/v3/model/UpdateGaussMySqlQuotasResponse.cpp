

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlQuotasResponse::UpdateGaussMySqlQuotasResponse()
{
    quotaListIsSet_ = false;
}

UpdateGaussMySqlQuotasResponse::~UpdateGaussMySqlQuotasResponse() = default;

void UpdateGaussMySqlQuotasResponse::validate()
{
}

web::json::value UpdateGaussMySqlQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaListIsSet_) {
        val[utility::conversions::to_string_t("quota_list")] = ModelBase::toJson(quotaList_);
    }

    return val;
}
bool UpdateGaussMySqlQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SetQuota> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaList(refVal);
        }
    }
    return ok;
}


std::vector<SetQuota>& UpdateGaussMySqlQuotasResponse::getQuotaList()
{
    return quotaList_;
}

void UpdateGaussMySqlQuotasResponse::setQuotaList(const std::vector<SetQuota>& value)
{
    quotaList_ = value;
    quotaListIsSet_ = true;
}

bool UpdateGaussMySqlQuotasResponse::quotaListIsSet() const
{
    return quotaListIsSet_;
}

void UpdateGaussMySqlQuotasResponse::unsetquotaList()
{
    quotaListIsSet_ = false;
}

}
}
}
}
}


