

#include "huaweicloud/rgc/v1/model/ListControlViolationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlViolationsRequest::ListControlViolationsRequest()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
}

ListControlViolationsRequest::~ListControlViolationsRequest() = default;

void ListControlViolationsRequest::validate()
{
}

web::json::value ListControlViolationsRequest::toJson() const
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
bool ListControlViolationsRequest::fromJson(const web::json::value& val)
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


std::string ListControlViolationsRequest::getAccountId() const
{
    return accountId_;
}

void ListControlViolationsRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListControlViolationsRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListControlViolationsRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ListControlViolationsRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ListControlViolationsRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ListControlViolationsRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ListControlViolationsRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


