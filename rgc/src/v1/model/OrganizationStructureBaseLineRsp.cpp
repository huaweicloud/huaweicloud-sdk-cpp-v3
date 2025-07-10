

#include "huaweicloud/rgc/v1/model/OrganizationStructureBaseLineRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




OrganizationStructureBaseLineRsp::OrganizationStructureBaseLineRsp()
{
    organizationalUnitName_ = "";
    organizationalUnitNameIsSet_ = false;
    organizationalUnitTypeIsSet_ = false;
    accountsIsSet_ = false;
}

OrganizationStructureBaseLineRsp::~OrganizationStructureBaseLineRsp() = default;

void OrganizationStructureBaseLineRsp::validate()
{
}

web::json::value OrganizationStructureBaseLineRsp::toJson() const
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
bool OrganizationStructureBaseLineRsp::fromJson(const web::json::value& val)
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
            std::vector<AccountBaselineRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccounts(refVal);
        }
    }
    return ok;
}


std::string OrganizationStructureBaseLineRsp::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void OrganizationStructureBaseLineRsp::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool OrganizationStructureBaseLineRsp::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void OrganizationStructureBaseLineRsp::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

OrganizationalUnitTypeForSetup OrganizationStructureBaseLineRsp::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void OrganizationStructureBaseLineRsp::setOrganizationalUnitType(const OrganizationalUnitTypeForSetup& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool OrganizationStructureBaseLineRsp::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void OrganizationStructureBaseLineRsp::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::vector<AccountBaselineRsp>& OrganizationStructureBaseLineRsp::getAccounts()
{
    return accounts_;
}

void OrganizationStructureBaseLineRsp::setAccounts(const std::vector<AccountBaselineRsp>& value)
{
    accounts_ = value;
    accountsIsSet_ = true;
}

bool OrganizationStructureBaseLineRsp::accountsIsSet() const
{
    return accountsIsSet_;
}

void OrganizationStructureBaseLineRsp::unsetaccounts()
{
    accountsIsSet_ = false;
}

}
}
}
}
}


