

#include "huaweicloud/dbss/v1/model/ListAuditRuleScopesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleScopesResponse::ListAuditRuleScopesResponse()
{
    scopesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditRuleScopesResponse::~ListAuditRuleScopesResponse() = default;

void ListAuditRuleScopesResponse::validate()
{
}

web::json::value ListAuditRuleScopesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scopesIsSet_) {
        val[utility::conversions::to_string_t("scopes")] = ModelBase::toJson(scopes_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditRuleScopesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scopes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scopes"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleScopeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<RuleScopeInfo>& ListAuditRuleScopesResponse::getScopes()
{
    return scopes_;
}

void ListAuditRuleScopesResponse::setScopes(const std::vector<RuleScopeInfo>& value)
{
    scopes_ = value;
    scopesIsSet_ = true;
}

bool ListAuditRuleScopesResponse::scopesIsSet() const
{
    return scopesIsSet_;
}

void ListAuditRuleScopesResponse::unsetscopes()
{
    scopesIsSet_ = false;
}

int32_t ListAuditRuleScopesResponse::getTotal() const
{
    return total_;
}

void ListAuditRuleScopesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditRuleScopesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditRuleScopesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


