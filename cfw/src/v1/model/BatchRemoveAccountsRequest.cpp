

#include "huaweicloud/cfw/v1/model/BatchRemoveAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchRemoveAccountsRequest::BatchRemoveAccountsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchRemoveAccountsRequest::~BatchRemoveAccountsRequest() = default;

void BatchRemoveAccountsRequest::validate()
{
}

web::json::value BatchRemoveAccountsRequest::toJson() const
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
bool BatchRemoveAccountsRequest::fromJson(const web::json::value& val)
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


std::string BatchRemoveAccountsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchRemoveAccountsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchRemoveAccountsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchRemoveAccountsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AccountDto BatchRemoveAccountsRequest::getBody() const
{
    return body_;
}

void BatchRemoveAccountsRequest::setBody(const AccountDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRemoveAccountsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRemoveAccountsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


