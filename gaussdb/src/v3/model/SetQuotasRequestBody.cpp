

#include "huaweicloud/gaussdb/v3/model/SetQuotasRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetQuotasRequestBody::SetQuotasRequestBody()
{
    quotaListIsSet_ = false;
}

SetQuotasRequestBody::~SetQuotasRequestBody() = default;

void SetQuotasRequestBody::validate()
{
}

web::json::value SetQuotasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaListIsSet_) {
        val[utility::conversions::to_string_t("quota_list")] = ModelBase::toJson(quotaList_);
    }

    return val;
}

bool SetQuotasRequestBody::fromJson(const web::json::value& val)
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

std::vector<SetQuota>& SetQuotasRequestBody::getQuotaList()
{
    return quotaList_;
}

void SetQuotasRequestBody::setQuotaList(const std::vector<SetQuota>& value)
{
    quotaList_ = value;
    quotaListIsSet_ = true;
}

bool SetQuotasRequestBody::quotaListIsSet() const
{
    return quotaListIsSet_;
}

void SetQuotasRequestBody::unsetquotaList()
{
    quotaListIsSet_ = false;
}

}
}
}
}
}


