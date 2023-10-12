

#include "huaweicloud/cbr/v1/model/CreatePostPaidVaultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreatePostPaidVaultResponse::CreatePostPaidVaultResponse()
{
    ordersIsSet_ = false;
    retCode_ = 0;
    retCodeIsSet_ = false;
    errText_ = "";
    errTextIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

CreatePostPaidVaultResponse::~CreatePostPaidVaultResponse() = default;

void CreatePostPaidVaultResponse::validate()
{
}

web::json::value CreatePostPaidVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ordersIsSet_) {
        val[utility::conversions::to_string_t("orders")] = ModelBase::toJson(orders_);
    }
    if(retCodeIsSet_) {
        val[utility::conversions::to_string_t("retCode")] = ModelBase::toJson(retCode_);
    }
    if(errTextIsSet_) {
        val[utility::conversions::to_string_t("errText")] = ModelBase::toJson(errText_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool CreatePostPaidVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("orders"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orders"));
        if(!fieldValue.is_null())
        {
            std::vector<CbcOrderResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errText"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errText"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::vector<CbcOrderResult>& CreatePostPaidVaultResponse::getOrders()
{
    return orders_;
}

void CreatePostPaidVaultResponse::setOrders(const std::vector<CbcOrderResult>& value)
{
    orders_ = value;
    ordersIsSet_ = true;
}

bool CreatePostPaidVaultResponse::ordersIsSet() const
{
    return ordersIsSet_;
}

void CreatePostPaidVaultResponse::unsetorders()
{
    ordersIsSet_ = false;
}

int32_t CreatePostPaidVaultResponse::getRetCode() const
{
    return retCode_;
}

void CreatePostPaidVaultResponse::setRetCode(int32_t value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool CreatePostPaidVaultResponse::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void CreatePostPaidVaultResponse::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::string CreatePostPaidVaultResponse::getErrText() const
{
    return errText_;
}

void CreatePostPaidVaultResponse::setErrText(const std::string& value)
{
    errText_ = value;
    errTextIsSet_ = true;
}

bool CreatePostPaidVaultResponse::errTextIsSet() const
{
    return errTextIsSet_;
}

void CreatePostPaidVaultResponse::unseterrText()
{
    errTextIsSet_ = false;
}

std::string CreatePostPaidVaultResponse::getErrorCode() const
{
    return errorCode_;
}

void CreatePostPaidVaultResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreatePostPaidVaultResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreatePostPaidVaultResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


