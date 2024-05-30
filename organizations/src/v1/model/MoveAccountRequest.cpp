

#include "huaweicloud/organizations/v1/model/MoveAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




MoveAccountRequest::MoveAccountRequest()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    bodyIsSet_ = false;
}

MoveAccountRequest::~MoveAccountRequest() = default;

void MoveAccountRequest::validate()
{
}

web::json::value MoveAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool MoveAccountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MoveAccountReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MoveAccountRequest::getAccountId() const
{
    return accountId_;
}

void MoveAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool MoveAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void MoveAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

MoveAccountReqBody MoveAccountRequest::getBody() const
{
    return body_;
}

void MoveAccountRequest::setBody(const MoveAccountReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MoveAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MoveAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


