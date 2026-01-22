

#include "huaweicloud/cfw/v1/model/BatchAddAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchAddAccountsRequest::BatchAddAccountsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddAccountsRequest::~BatchAddAccountsRequest() = default;

void BatchAddAccountsRequest::validate()
{
}

web::json::value BatchAddAccountsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddAccountsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AccountDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddAccountsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchAddAccountsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchAddAccountsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchAddAccountsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AccountDto BatchAddAccountsRequest::getBody() const
{
    return body_;
}

void BatchAddAccountsRequest::setBody(const AccountDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddAccountsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddAccountsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


