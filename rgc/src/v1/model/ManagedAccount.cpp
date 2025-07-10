

#include "huaweicloud/rgc/v1/model/ManagedAccount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ManagedAccount::ManagedAccount()
{
    landingZoneVersion_ = "";
    landingZoneVersionIsSet_ = false;
    manageAccountId_ = "";
    manageAccountIdIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    accountType_ = "";
    accountTypeIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    parentOrganizationalUnitName_ = "";
    parentOrganizationalUnitNameIsSet_ = false;
    identityStoreUserName_ = "";
    identityStoreUserNameIsSet_ = false;
    blueprintProductId_ = "";
    blueprintProductIdIsSet_ = false;
    blueprintProductVersion_ = "";
    blueprintProductVersionIsSet_ = false;
    blueprintStatus_ = "";
    blueprintStatusIsSet_ = false;
    isBlueprintHasMultiAccountResource_ = false;
    isBlueprintHasMultiAccountResourceIsSet_ = false;
    regionsIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ManagedAccount::~ManagedAccount() = default;

void ManagedAccount::validate()
{
}

web::json::value ManagedAccount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(landingZoneVersionIsSet_) {
        val[utility::conversions::to_string_t("landing_zone_version")] = ModelBase::toJson(landingZoneVersion_);
    }
    if(manageAccountIdIsSet_) {
        val[utility::conversions::to_string_t("manage_account_id")] = ModelBase::toJson(manageAccountId_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("account_type")] = ModelBase::toJson(accountType_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(parentOrganizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_name")] = ModelBase::toJson(parentOrganizationalUnitName_);
    }
    if(identityStoreUserNameIsSet_) {
        val[utility::conversions::to_string_t("identity_store_user_name")] = ModelBase::toJson(identityStoreUserName_);
    }
    if(blueprintProductIdIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_id")] = ModelBase::toJson(blueprintProductId_);
    }
    if(blueprintProductVersionIsSet_) {
        val[utility::conversions::to_string_t("blueprint_product_version")] = ModelBase::toJson(blueprintProductVersion_);
    }
    if(blueprintStatusIsSet_) {
        val[utility::conversions::to_string_t("blueprint_status")] = ModelBase::toJson(blueprintStatus_);
    }
    if(isBlueprintHasMultiAccountResourceIsSet_) {
        val[utility::conversions::to_string_t("is_blueprint_has_multi_account_resource")] = ModelBase::toJson(isBlueprintHasMultiAccountResource_);
    }
    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ManagedAccount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("landing_zone_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landing_zone_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandingZoneVersion(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("account_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_blueprint_has_multi_account_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_blueprint_has_multi_account_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBlueprintHasMultiAccountResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<RegionManagedList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string ManagedAccount::getLandingZoneVersion() const
{
    return landingZoneVersion_;
}

void ManagedAccount::setLandingZoneVersion(const std::string& value)
{
    landingZoneVersion_ = value;
    landingZoneVersionIsSet_ = true;
}

bool ManagedAccount::landingZoneVersionIsSet() const
{
    return landingZoneVersionIsSet_;
}

void ManagedAccount::unsetlandingZoneVersion()
{
    landingZoneVersionIsSet_ = false;
}

std::string ManagedAccount::getManageAccountId() const
{
    return manageAccountId_;
}

void ManagedAccount::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool ManagedAccount::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void ManagedAccount::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string ManagedAccount::getAccountId() const
{
    return accountId_;
}

void ManagedAccount::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ManagedAccount::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ManagedAccount::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ManagedAccount::getAccountName() const
{
    return accountName_;
}

void ManagedAccount::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool ManagedAccount::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void ManagedAccount::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string ManagedAccount::getAccountType() const
{
    return accountType_;
}

void ManagedAccount::setAccountType(const std::string& value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool ManagedAccount::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void ManagedAccount::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::string ManagedAccount::getOwner() const
{
    return owner_;
}

void ManagedAccount::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ManagedAccount::ownerIsSet() const
{
    return ownerIsSet_;
}

void ManagedAccount::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ManagedAccount::getState() const
{
    return state_;
}

void ManagedAccount::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ManagedAccount::stateIsSet() const
{
    return stateIsSet_;
}

void ManagedAccount::unsetstate()
{
    stateIsSet_ = false;
}

std::string ManagedAccount::getMessage() const
{
    return message_;
}

void ManagedAccount::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ManagedAccount::messageIsSet() const
{
    return messageIsSet_;
}

void ManagedAccount::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ManagedAccount::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void ManagedAccount::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool ManagedAccount::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void ManagedAccount::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string ManagedAccount::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void ManagedAccount::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool ManagedAccount::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void ManagedAccount::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

std::string ManagedAccount::getIdentityStoreUserName() const
{
    return identityStoreUserName_;
}

void ManagedAccount::setIdentityStoreUserName(const std::string& value)
{
    identityStoreUserName_ = value;
    identityStoreUserNameIsSet_ = true;
}

bool ManagedAccount::identityStoreUserNameIsSet() const
{
    return identityStoreUserNameIsSet_;
}

void ManagedAccount::unsetidentityStoreUserName()
{
    identityStoreUserNameIsSet_ = false;
}

std::string ManagedAccount::getBlueprintProductId() const
{
    return blueprintProductId_;
}

void ManagedAccount::setBlueprintProductId(const std::string& value)
{
    blueprintProductId_ = value;
    blueprintProductIdIsSet_ = true;
}

bool ManagedAccount::blueprintProductIdIsSet() const
{
    return blueprintProductIdIsSet_;
}

void ManagedAccount::unsetblueprintProductId()
{
    blueprintProductIdIsSet_ = false;
}

std::string ManagedAccount::getBlueprintProductVersion() const
{
    return blueprintProductVersion_;
}

void ManagedAccount::setBlueprintProductVersion(const std::string& value)
{
    blueprintProductVersion_ = value;
    blueprintProductVersionIsSet_ = true;
}

bool ManagedAccount::blueprintProductVersionIsSet() const
{
    return blueprintProductVersionIsSet_;
}

void ManagedAccount::unsetblueprintProductVersion()
{
    blueprintProductVersionIsSet_ = false;
}

std::string ManagedAccount::getBlueprintStatus() const
{
    return blueprintStatus_;
}

void ManagedAccount::setBlueprintStatus(const std::string& value)
{
    blueprintStatus_ = value;
    blueprintStatusIsSet_ = true;
}

bool ManagedAccount::blueprintStatusIsSet() const
{
    return blueprintStatusIsSet_;
}

void ManagedAccount::unsetblueprintStatus()
{
    blueprintStatusIsSet_ = false;
}

bool ManagedAccount::isIsBlueprintHasMultiAccountResource() const
{
    return isBlueprintHasMultiAccountResource_;
}

void ManagedAccount::setIsBlueprintHasMultiAccountResource(bool value)
{
    isBlueprintHasMultiAccountResource_ = value;
    isBlueprintHasMultiAccountResourceIsSet_ = true;
}

bool ManagedAccount::isBlueprintHasMultiAccountResourceIsSet() const
{
    return isBlueprintHasMultiAccountResourceIsSet_;
}

void ManagedAccount::unsetisBlueprintHasMultiAccountResource()
{
    isBlueprintHasMultiAccountResourceIsSet_ = false;
}

std::vector<RegionManagedList>& ManagedAccount::getRegions()
{
    return regions_;
}

void ManagedAccount::setRegions(const std::vector<RegionManagedList>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ManagedAccount::regionsIsSet() const
{
    return regionsIsSet_;
}

void ManagedAccount::unsetregions()
{
    regionsIsSet_ = false;
}

utility::datetime ManagedAccount::getCreatedAt() const
{
    return createdAt_;
}

void ManagedAccount::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ManagedAccount::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ManagedAccount::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ManagedAccount::getUpdatedAt() const
{
    return updatedAt_;
}

void ManagedAccount::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ManagedAccount::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ManagedAccount::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


