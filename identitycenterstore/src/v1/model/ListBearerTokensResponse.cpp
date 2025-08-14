

#include "huaweicloud/identitycenterstore/v1/model/ListBearerTokensResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListBearerTokensResponse::ListBearerTokensResponse()
{
    bearerTokensIsSet_ = false;
}

ListBearerTokensResponse::~ListBearerTokensResponse() = default;

void ListBearerTokensResponse::validate()
{
}

web::json::value ListBearerTokensResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bearerTokensIsSet_) {
        val[utility::conversions::to_string_t("bearer_tokens")] = ModelBase::toJson(bearerTokens_);
    }

    return val;
}
bool ListBearerTokensResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bearer_tokens"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bearer_tokens"));
        if(!fieldValue.is_null())
        {
            std::vector<BearerToken> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBearerTokens(refVal);
        }
    }
    return ok;
}


std::vector<BearerToken>& ListBearerTokensResponse::getBearerTokens()
{
    return bearerTokens_;
}

void ListBearerTokensResponse::setBearerTokens(const std::vector<BearerToken>& value)
{
    bearerTokens_ = value;
    bearerTokensIsSet_ = true;
}

bool ListBearerTokensResponse::bearerTokensIsSet() const
{
    return bearerTokensIsSet_;
}

void ListBearerTokensResponse::unsetbearerTokens()
{
    bearerTokensIsSet_ = false;
}

}
}
}
}
}


