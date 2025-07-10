

#include "huaweicloud/rgc/v1/model/ListOperationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListOperationRequest::ListOperationRequest()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
}

ListOperationRequest::~ListOperationRequest() = default;

void ListOperationRequest::validate()
{
}

web::json::value ListOperationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }

    return val;
}
bool ListOperationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitId(refVal);
        }
    }
    return ok;
}


std::string ListOperationRequest::getAccountId() const
{
    return accountId_;
}

void ListOperationRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListOperationRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListOperationRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ListOperationRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ListOperationRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ListOperationRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ListOperationRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


