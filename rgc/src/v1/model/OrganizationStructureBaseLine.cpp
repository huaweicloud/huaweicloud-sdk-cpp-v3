

#include "huaweicloud/rgc/v1/model/OrganizationStructureBaseLine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




OrganizationStructureBaseLine::OrganizationStructureBaseLine()
{
    organizationalUnitName_ = "";
    organizationalUnitNameIsSet_ = false;
    organizationalUnitTypeIsSet_ = false;
    accountsIsSet_ = false;
}

OrganizationStructureBaseLine::~OrganizationStructureBaseLine() = default;

void OrganizationStructureBaseLine::validate()
{
}

web::json::value OrganizationStructureBaseLine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_name")] = ModelBase::toJson(organizationalUnitName_);
    }
    if(organizationalUnitTypeIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_type")] = ModelBase::toJson(organizationalUnitType_);
    }
    if(accountsIsSet_) {
        val[utility::conversions::to_string_t("accounts")] = ModelBase::toJson(accounts_);
    }

    return val;
}
bool OrganizationStructureBaseLine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_type"));
        if(!fieldValue.is_null())
        {
            OrganizationalUnitTypeForSetup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accounts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accounts"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountBaseline> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccounts(refVal);
        }
    }
    return ok;
}


std::string OrganizationStructureBaseLine::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void OrganizationStructureBaseLine::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool OrganizationStructureBaseLine::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void OrganizationStructureBaseLine::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

OrganizationalUnitTypeForSetup OrganizationStructureBaseLine::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void OrganizationStructureBaseLine::setOrganizationalUnitType(const OrganizationalUnitTypeForSetup& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool OrganizationStructureBaseLine::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void OrganizationStructureBaseLine::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::vector<AccountBaseline>& OrganizationStructureBaseLine::getAccounts()
{
    return accounts_;
}

void OrganizationStructureBaseLine::setAccounts(const std::vector<AccountBaseline>& value)
{
    accounts_ = value;
    accountsIsSet_ = true;
}

bool OrganizationStructureBaseLine::accountsIsSet() const
{
    return accountsIsSet_;
}

void OrganizationStructureBaseLine::unsetaccounts()
{
    accountsIsSet_ = false;
}

}
}
}
}
}


