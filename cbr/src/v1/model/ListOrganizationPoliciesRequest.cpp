

#include "huaweicloud/cbr/v1/model/ListOrganizationPoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListOrganizationPoliciesRequest::ListOrganizationPoliciesRequest()
{
    operationType_ = "";
    operationTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListOrganizationPoliciesRequest::~ListOrganizationPoliciesRequest() = default;

void ListOrganizationPoliciesRequest::validate()
{
}

web::json::value ListOrganizationPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListOrganizationPoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListOrganizationPoliciesRequest::getOperationType() const
{
    return operationType_;
}

void ListOrganizationPoliciesRequest::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool ListOrganizationPoliciesRequest::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void ListOrganizationPoliciesRequest::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

int32_t ListOrganizationPoliciesRequest::getLimit() const
{
    return limit_;
}

void ListOrganizationPoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationPoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationPoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOrganizationPoliciesRequest::getOffset() const
{
    return offset_;
}

void ListOrganizationPoliciesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOrganizationPoliciesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOrganizationPoliciesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


