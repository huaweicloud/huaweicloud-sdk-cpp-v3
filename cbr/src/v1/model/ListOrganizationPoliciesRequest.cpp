

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

}
}
}
}
}


