

#include "huaweicloud/csms/v1/model/ListSecretsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretsResponse::ListSecretsResponse()
{
    secretsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListSecretsResponse::~ListSecretsResponse() = default;

void ListSecretsResponse::validate()
{
}

web::json::value ListSecretsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretsIsSet_) {
        val[utility::conversions::to_string_t("secrets")] = ModelBase::toJson(secrets_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListSecretsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secrets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secrets"));
        if(!fieldValue.is_null())
        {
            std::vector<Secret> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecrets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<Secret>& ListSecretsResponse::getSecrets()
{
    return secrets_;
}

void ListSecretsResponse::setSecrets(const std::vector<Secret>& value)
{
    secrets_ = value;
    secretsIsSet_ = true;
}

bool ListSecretsResponse::secretsIsSet() const
{
    return secretsIsSet_;
}

void ListSecretsResponse::unsetsecrets()
{
    secretsIsSet_ = false;
}

PageInfo ListSecretsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListSecretsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListSecretsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListSecretsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


