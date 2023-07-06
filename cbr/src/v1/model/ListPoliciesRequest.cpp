

#include "huaweicloud/cbr/v1/model/ListPoliciesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListPoliciesRequest::ListPoliciesRequest()
{
    operationType_ = "";
    operationTypeIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

ListPoliciesRequest::~ListPoliciesRequest() = default;

void ListPoliciesRequest::validate()
{
}

web::json::value ListPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool ListPoliciesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}

std::string ListPoliciesRequest::getOperationType() const
{
    return operationType_;
}

void ListPoliciesRequest::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool ListPoliciesRequest::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void ListPoliciesRequest::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string ListPoliciesRequest::getVaultId() const
{
    return vaultId_;
}

void ListPoliciesRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ListPoliciesRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ListPoliciesRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


