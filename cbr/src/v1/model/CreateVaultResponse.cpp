

#include "huaweicloud/cbr/v1/model/CreateVaultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateVaultResponse::CreateVaultResponse()
{
    vaultIsSet_ = false;
    ordersIsSet_ = false;
    retCode_ = 0;
    retCodeIsSet_ = false;
    errText_ = "";
    errTextIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

CreateVaultResponse::~CreateVaultResponse() = default;

void CreateVaultResponse::validate()
{
}

web::json::value CreateVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }
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
bool CreateVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultCreateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
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


VaultCreateResource CreateVaultResponse::getVault() const
{
    return vault_;
}

void CreateVaultResponse::setVault(const VaultCreateResource& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool CreateVaultResponse::vaultIsSet() const
{
    return vaultIsSet_;
}

void CreateVaultResponse::unsetvault()
{
    vaultIsSet_ = false;
}

std::vector<CbcOrderResult>& CreateVaultResponse::getOrders()
{
    return orders_;
}

void CreateVaultResponse::setOrders(const std::vector<CbcOrderResult>& value)
{
    orders_ = value;
    ordersIsSet_ = true;
}

bool CreateVaultResponse::ordersIsSet() const
{
    return ordersIsSet_;
}

void CreateVaultResponse::unsetorders()
{
    ordersIsSet_ = false;
}

int32_t CreateVaultResponse::getRetCode() const
{
    return retCode_;
}

void CreateVaultResponse::setRetCode(int32_t value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool CreateVaultResponse::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void CreateVaultResponse::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::string CreateVaultResponse::getErrText() const
{
    return errText_;
}

void CreateVaultResponse::setErrText(const std::string& value)
{
    errText_ = value;
    errTextIsSet_ = true;
}

bool CreateVaultResponse::errTextIsSet() const
{
    return errTextIsSet_;
}

void CreateVaultResponse::unseterrText()
{
    errTextIsSet_ = false;
}

std::string CreateVaultResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateVaultResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateVaultResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateVaultResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


