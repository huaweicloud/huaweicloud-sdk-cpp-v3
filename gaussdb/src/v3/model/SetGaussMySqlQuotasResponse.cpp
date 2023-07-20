

#include "huaweicloud/gaussdb/v3/model/SetGaussMySqlQuotasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetGaussMySqlQuotasResponse::SetGaussMySqlQuotasResponse()
{
    quotaListIsSet_ = false;
}

SetGaussMySqlQuotasResponse::~SetGaussMySqlQuotasResponse() = default;

void SetGaussMySqlQuotasResponse::validate()
{
}

web::json::value SetGaussMySqlQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaListIsSet_) {
        val[utility::conversions::to_string_t("quota_list")] = ModelBase::toJson(quotaList_);
    }

    return val;
}

bool SetGaussMySqlQuotasResponse::fromJson(const web::json::value& val)
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

std::vector<SetQuota>& SetGaussMySqlQuotasResponse::getQuotaList()
{
    return quotaList_;
}

void SetGaussMySqlQuotasResponse::setQuotaList(const std::vector<SetQuota>& value)
{
    quotaList_ = value;
    quotaListIsSet_ = true;
}

bool SetGaussMySqlQuotasResponse::quotaListIsSet() const
{
    return quotaListIsSet_;
}

void SetGaussMySqlQuotasResponse::unsetquotaList()
{
    quotaListIsSet_ = false;
}

}
}
}
}
}


