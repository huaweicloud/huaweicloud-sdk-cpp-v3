

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlQuotasResponse::ShowGaussMySqlQuotasResponse()
{
    quotaListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowGaussMySqlQuotasResponse::~ShowGaussMySqlQuotasResponse() = default;

void ShowGaussMySqlQuotasResponse::validate()
{
}

web::json::value ShowGaussMySqlQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaListIsSet_) {
        val[utility::conversions::to_string_t("quota_list")] = ModelBase::toJson(quotaList_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowGaussMySqlQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Quota> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<Quota>& ShowGaussMySqlQuotasResponse::getQuotaList()
{
    return quotaList_;
}

void ShowGaussMySqlQuotasResponse::setQuotaList(const std::vector<Quota>& value)
{
    quotaList_ = value;
    quotaListIsSet_ = true;
}

bool ShowGaussMySqlQuotasResponse::quotaListIsSet() const
{
    return quotaListIsSet_;
}

void ShowGaussMySqlQuotasResponse::unsetquotaList()
{
    quotaListIsSet_ = false;
}

int32_t ShowGaussMySqlQuotasResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowGaussMySqlQuotasResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowGaussMySqlQuotasResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowGaussMySqlQuotasResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


