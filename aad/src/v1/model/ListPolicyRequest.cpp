

#include "huaweicloud/aad/v1/model/ListPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListPolicyRequest::ListPolicyRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
}

ListPolicyRequest::~ListPolicyRequest() = default;

void ListPolicyRequest::validate()
{
}

web::json::value ListPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }

    return val;
}
bool ListPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    return ok;
}


int32_t ListPolicyRequest::getOffset() const
{
    return offset_;
}

void ListPolicyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPolicyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPolicyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPolicyRequest::getLimit() const
{
    return limit_;
}

void ListPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPolicyRequest::getPolicyName() const
{
    return policyName_;
}

void ListPolicyRequest::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListPolicyRequest::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListPolicyRequest::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

}
}
}
}
}


