

#include "huaweicloud/cloudtest/v1/model/ListUserPopupInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserPopupInfoResponse::ListUserPopupInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ListUserPopupInfoResponse::~ListUserPopupInfoResponse() = default;

void ListUserPopupInfoResponse::validate()
{
}

web::json::value ListUserPopupInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool ListUserPopupInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PopUpInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorOfAPITest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


std::string ListUserPopupInfoResponse::getStatus() const
{
    return status_;
}

void ListUserPopupInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUserPopupInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUserPopupInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

PopUpInfo ListUserPopupInfoResponse::getResult() const
{
    return result_;
}

void ListUserPopupInfoResponse::setResult(const PopUpInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUserPopupInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUserPopupInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

CommonResponseErrorOfAPITest ListUserPopupInfoResponse::getError() const
{
    return error_;
}

void ListUserPopupInfoResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListUserPopupInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListUserPopupInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


