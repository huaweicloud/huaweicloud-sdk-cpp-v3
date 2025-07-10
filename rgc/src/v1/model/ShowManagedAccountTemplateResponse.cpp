

#include "huaweicloud/rgc/v1/model/ShowManagedAccountTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedAccountTemplateResponse::ShowManagedAccountTemplateResponse()
{
    manageAccountId_ = "";
    manageAccountIdIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    blueprintProductId_ = "";
    blueprintProductIdIsSet_ = false;
    blueprintProductName_ = "";
    blueprintProductNameIsSet_ = false;
    blueprintProductVersion_ = "";
    blueprintProductVersionIsSet_ = false;
    blueprintStatus_ = "";
    blueprintStatusIsSet_ = false;
    blueprintProductImplType_ = "";
    blueprintProductImplTypeIsSet_ = false;
    blueprintProductImplDetail_ = "";
    blueprintProductImplDetailIsSet_ = false;
}

ShowManagedAccountTemplateResponse::~ShowManagedAccountTemplateResponse() = default;

void ShowManagedAccountTemplateResponse::validate()
{
}

web::json::value ShowManagedAccountTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manageAccountIdIsSet_) {
        val[utility::conversions::to_string_t("manage_account_id")] = ModelBase::toJson(manageAccountId_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(blueprintProductIdIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_id")] = ModelBase::toJson(blueprintProductId_);
    }
    if(blueprintProductNameIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_name")] = ModelBase::toJson(blueprintProductName_);
    }
    if(blueprintProductVersionIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_version")] = ModelBase::toJson(blueprintProductVersion_);
    }
    if(blueprintStatusIsSet_) {
        val[utility::conversions::to_string_t("blueprint_status")] = ModelBase::toJson(blueprintStatus_);
    }
    if(blueprintProductImplTypeIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_impl_type")] = ModelBase::toJson(blueprintProductImplType_);
    }
    if(blueprintProductImplDetailIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_impl_detail")] = ModelBase::toJson(blueprintProductImplDetail_);
    }

    return val;
}
bool ShowManagedAccountTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manage_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manage_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManageAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_impl_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_impl_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductImplType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint_product_impl_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint_product_impl_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprintProductImplDetail(refVal);
        }
    }
    return ok;
}


std::string ShowManagedAccountTemplateResponse::getManageAccountId() const
{
    return manageAccountId_;
}

void ShowManagedAccountTemplateResponse::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getAccountId() const
{
    return accountId_;
}

void ShowManagedAccountTemplateResponse::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getAccountName() const
{
    return accountName_;
}

void ShowManagedAccountTemplateResponse::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintProductId() const
{
    return blueprintProductId_;
}

void ShowManagedAccountTemplateResponse::setBlueprintProductId(const std::string& value)
{
    blueprintProductId_ = value;
    blueprintProductIdIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintProductIdIsSet() const
{
    return blueprintProductIdIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintProductId()
{
    blueprintProductIdIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintProductName() const
{
    return blueprintProductName_;
}

void ShowManagedAccountTemplateResponse::setBlueprintProductName(const std::string& value)
{
    blueprintProductName_ = value;
    blueprintProductNameIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintProductNameIsSet() const
{
    return blueprintProductNameIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintProductName()
{
    blueprintProductNameIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintProductVersion() const
{
    return blueprintProductVersion_;
}

void ShowManagedAccountTemplateResponse::setBlueprintProductVersion(const std::string& value)
{
    blueprintProductVersion_ = value;
    blueprintProductVersionIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintProductVersionIsSet() const
{
    return blueprintProductVersionIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintProductVersion()
{
    blueprintProductVersionIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintStatus() const
{
    return blueprintStatus_;
}

void ShowManagedAccountTemplateResponse::setBlueprintStatus(const std::string& value)
{
    blueprintStatus_ = value;
    blueprintStatusIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintStatusIsSet() const
{
    return blueprintStatusIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintStatus()
{
    blueprintStatusIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintProductImplType() const
{
    return blueprintProductImplType_;
}

void ShowManagedAccountTemplateResponse::setBlueprintProductImplType(const std::string& value)
{
    blueprintProductImplType_ = value;
    blueprintProductImplTypeIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintProductImplTypeIsSet() const
{
    return blueprintProductImplTypeIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintProductImplType()
{
    blueprintProductImplTypeIsSet_ = false;
}

std::string ShowManagedAccountTemplateResponse::getBlueprintProductImplDetail() const
{
    return blueprintProductImplDetail_;
}

void ShowManagedAccountTemplateResponse::setBlueprintProductImplDetail(const std::string& value)
{
    blueprintProductImplDetail_ = value;
    blueprintProductImplDetailIsSet_ = true;
}

bool ShowManagedAccountTemplateResponse::blueprintProductImplDetailIsSet() const
{
    return blueprintProductImplDetailIsSet_;
}

void ShowManagedAccountTemplateResponse::unsetblueprintProductImplDetail()
{
    blueprintProductImplDetailIsSet_ = false;
}

}
}
}
}
}


