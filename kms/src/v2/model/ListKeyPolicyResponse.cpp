

#include "huaweicloud/kms/v2/model/ListKeyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyPolicyResponse::ListKeyPolicyResponse()
{
    pageInfoIsSet_ = false;
    keyspacePoliciesIsSet_ = false;
}

ListKeyPolicyResponse::~ListKeyPolicyResponse() = default;

void ListKeyPolicyResponse::validate()
{
}

web::json::value ListKeyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(keyspacePoliciesIsSet_) {
        val[utility::conversions::to_string_t("keyspace_policies")] = ModelBase::toJson(keyspacePolicies_);
    }

    return val;
}
bool ListKeyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListAccessPointResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspace_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<ListKeyPolicyResponseBody_keyspace_policies> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspacePolicies(refVal);
        }
    }
    return ok;
}


ListAccessPointResponseBody_page_info ListKeyPolicyResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListKeyPolicyResponse::setPageInfo(const ListAccessPointResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListKeyPolicyResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListKeyPolicyResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<ListKeyPolicyResponseBody_keyspace_policies>& ListKeyPolicyResponse::getKeyspacePolicies()
{
    return keyspacePolicies_;
}

void ListKeyPolicyResponse::setKeyspacePolicies(const std::vector<ListKeyPolicyResponseBody_keyspace_policies>& value)
{
    keyspacePolicies_ = value;
    keyspacePoliciesIsSet_ = true;
}

bool ListKeyPolicyResponse::keyspacePoliciesIsSet() const
{
    return keyspacePoliciesIsSet_;
}

void ListKeyPolicyResponse::unsetkeyspacePolicies()
{
    keyspacePoliciesIsSet_ = false;
}

}
}
}
}
}


