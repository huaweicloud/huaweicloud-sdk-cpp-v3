

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBListDatabaseRolesPriv.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBListDatabaseRolesPriv::GaussDBListDatabaseRolesPriv()
{
    rolsuper_ = false;
    rolsuperIsSet_ = false;
    rolinherit_ = false;
    rolinheritIsSet_ = false;
    rolcreaterole_ = false;
    rolcreateroleIsSet_ = false;
    rolcreatedb_ = false;
    rolcreatedbIsSet_ = false;
    rolcanlogin_ = false;
    rolcanloginIsSet_ = false;
    rolconnlimit_ = 0;
    rolconnlimitIsSet_ = false;
    rolreplication_ = false;
    rolreplicationIsSet_ = false;
    rolbypassrls_ = false;
    rolbypassrlsIsSet_ = false;
    rolpassworddeadline_ = "";
    rolpassworddeadlineIsSet_ = false;
}

GaussDBListDatabaseRolesPriv::~GaussDBListDatabaseRolesPriv() = default;

void GaussDBListDatabaseRolesPriv::validate()
{
}

web::json::value GaussDBListDatabaseRolesPriv::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rolsuperIsSet_) {
        val[utility::conversions::to_string_t("rolsuper")] = ModelBase::toJson(rolsuper_);
    }
    if(rolinheritIsSet_) {
        val[utility::conversions::to_string_t("rolinherit")] = ModelBase::toJson(rolinherit_);
    }
    if(rolcreateroleIsSet_) {
        val[utility::conversions::to_string_t("rolcreaterole")] = ModelBase::toJson(rolcreaterole_);
    }
    if(rolcreatedbIsSet_) {
        val[utility::conversions::to_string_t("rolcreatedb")] = ModelBase::toJson(rolcreatedb_);
    }
    if(rolcanloginIsSet_) {
        val[utility::conversions::to_string_t("rolcanlogin")] = ModelBase::toJson(rolcanlogin_);
    }
    if(rolconnlimitIsSet_) {
        val[utility::conversions::to_string_t("rolconnlimit")] = ModelBase::toJson(rolconnlimit_);
    }
    if(rolreplicationIsSet_) {
        val[utility::conversions::to_string_t("rolreplication")] = ModelBase::toJson(rolreplication_);
    }
    if(rolbypassrlsIsSet_) {
        val[utility::conversions::to_string_t("rolbypassrls")] = ModelBase::toJson(rolbypassrls_);
    }
    if(rolpassworddeadlineIsSet_) {
        val[utility::conversions::to_string_t("rolpassworddeadline")] = ModelBase::toJson(rolpassworddeadline_);
    }

    return val;
}
bool GaussDBListDatabaseRolesPriv::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rolsuper"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolsuper"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolsuper(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolinherit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolinherit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolinherit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolcreaterole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolcreaterole"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolcreaterole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolcreatedb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolcreatedb"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolcreatedb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolcanlogin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolcanlogin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolcanlogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolconnlimit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolconnlimit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolconnlimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolreplication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolreplication"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolreplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolbypassrls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolbypassrls"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolbypassrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rolpassworddeadline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolpassworddeadline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolpassworddeadline(refVal);
        }
    }
    return ok;
}


bool GaussDBListDatabaseRolesPriv::isRolsuper() const
{
    return rolsuper_;
}

void GaussDBListDatabaseRolesPriv::setRolsuper(bool value)
{
    rolsuper_ = value;
    rolsuperIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolsuperIsSet() const
{
    return rolsuperIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolsuper()
{
    rolsuperIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolinherit() const
{
    return rolinherit_;
}

void GaussDBListDatabaseRolesPriv::setRolinherit(bool value)
{
    rolinherit_ = value;
    rolinheritIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolinheritIsSet() const
{
    return rolinheritIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolinherit()
{
    rolinheritIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolcreaterole() const
{
    return rolcreaterole_;
}

void GaussDBListDatabaseRolesPriv::setRolcreaterole(bool value)
{
    rolcreaterole_ = value;
    rolcreateroleIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolcreateroleIsSet() const
{
    return rolcreateroleIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolcreaterole()
{
    rolcreateroleIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolcreatedb() const
{
    return rolcreatedb_;
}

void GaussDBListDatabaseRolesPriv::setRolcreatedb(bool value)
{
    rolcreatedb_ = value;
    rolcreatedbIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolcreatedbIsSet() const
{
    return rolcreatedbIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolcreatedb()
{
    rolcreatedbIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolcanlogin() const
{
    return rolcanlogin_;
}

void GaussDBListDatabaseRolesPriv::setRolcanlogin(bool value)
{
    rolcanlogin_ = value;
    rolcanloginIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolcanloginIsSet() const
{
    return rolcanloginIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolcanlogin()
{
    rolcanloginIsSet_ = false;
}

int32_t GaussDBListDatabaseRolesPriv::getRolconnlimit() const
{
    return rolconnlimit_;
}

void GaussDBListDatabaseRolesPriv::setRolconnlimit(int32_t value)
{
    rolconnlimit_ = value;
    rolconnlimitIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolconnlimitIsSet() const
{
    return rolconnlimitIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolconnlimit()
{
    rolconnlimitIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolreplication() const
{
    return rolreplication_;
}

void GaussDBListDatabaseRolesPriv::setRolreplication(bool value)
{
    rolreplication_ = value;
    rolreplicationIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolreplicationIsSet() const
{
    return rolreplicationIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolreplication()
{
    rolreplicationIsSet_ = false;
}

bool GaussDBListDatabaseRolesPriv::isRolbypassrls() const
{
    return rolbypassrls_;
}

void GaussDBListDatabaseRolesPriv::setRolbypassrls(bool value)
{
    rolbypassrls_ = value;
    rolbypassrlsIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolbypassrlsIsSet() const
{
    return rolbypassrlsIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolbypassrls()
{
    rolbypassrlsIsSet_ = false;
}

std::string GaussDBListDatabaseRolesPriv::getRolpassworddeadline() const
{
    return rolpassworddeadline_;
}

void GaussDBListDatabaseRolesPriv::setRolpassworddeadline(const std::string& value)
{
    rolpassworddeadline_ = value;
    rolpassworddeadlineIsSet_ = true;
}

bool GaussDBListDatabaseRolesPriv::rolpassworddeadlineIsSet() const
{
    return rolpassworddeadlineIsSet_;
}

void GaussDBListDatabaseRolesPriv::unsetrolpassworddeadline()
{
    rolpassworddeadlineIsSet_ = false;
}

}
}
}
}
}


