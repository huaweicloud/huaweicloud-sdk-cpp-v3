

#include "huaweicloud/eps/v1/model/ListProvidersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListProvidersResponse::ListProvidersResponse()
{
    providersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListProvidersResponse::~ListProvidersResponse() = default;

void ListProvidersResponse::validate()
{
}

web::json::value ListProvidersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(providersIsSet_) {
        val[utility::conversions::to_string_t("providers")] = ModelBase::toJson(providers_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListProvidersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("providers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("providers"));
        if(!fieldValue.is_null())
        {
            std::vector<ProviderResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviders(refVal);
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

std::vector<ProviderResponseBody>& ListProvidersResponse::getProviders()
{
    return providers_;
}

void ListProvidersResponse::setProviders(const std::vector<ProviderResponseBody>& value)
{
    providers_ = value;
    providersIsSet_ = true;
}

bool ListProvidersResponse::providersIsSet() const
{
    return providersIsSet_;
}

void ListProvidersResponse::unsetproviders()
{
    providersIsSet_ = false;
}

int32_t ListProvidersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListProvidersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListProvidersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListProvidersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


