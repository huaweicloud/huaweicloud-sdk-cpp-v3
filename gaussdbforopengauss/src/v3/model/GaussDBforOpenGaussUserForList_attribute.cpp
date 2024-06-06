

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForList_attribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussUserForList_attribute::GaussDBforOpenGaussUserForList_attribute()
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

GaussDBforOpenGaussUserForList_attribute::~GaussDBforOpenGaussUserForList_attribute() = default;

void GaussDBforOpenGaussUserForList_attribute::validate()
{
}

web::json::value GaussDBforOpenGaussUserForList_attribute::toJson() const
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
bool GaussDBforOpenGaussUserForList_attribute::fromJson(const web::json::value& val)
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


bool GaussDBforOpenGaussUserForList_attribute::isRolsuper() const
{
    return rolsuper_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolsuper(bool value)
{
    rolsuper_ = value;
    rolsuperIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolsuperIsSet() const
{
    return rolsuperIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolsuper()
{
    rolsuperIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolinherit() const
{
    return rolinherit_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolinherit(bool value)
{
    rolinherit_ = value;
    rolinheritIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolinheritIsSet() const
{
    return rolinheritIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolinherit()
{
    rolinheritIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolcreaterole() const
{
    return rolcreaterole_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolcreaterole(bool value)
{
    rolcreaterole_ = value;
    rolcreateroleIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolcreateroleIsSet() const
{
    return rolcreateroleIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolcreaterole()
{
    rolcreateroleIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolcreatedb() const
{
    return rolcreatedb_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolcreatedb(bool value)
{
    rolcreatedb_ = value;
    rolcreatedbIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolcreatedbIsSet() const
{
    return rolcreatedbIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolcreatedb()
{
    rolcreatedbIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolcanlogin() const
{
    return rolcanlogin_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolcanlogin(bool value)
{
    rolcanlogin_ = value;
    rolcanloginIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolcanloginIsSet() const
{
    return rolcanloginIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolcanlogin()
{
    rolcanloginIsSet_ = false;
}

int32_t GaussDBforOpenGaussUserForList_attribute::getRolconnlimit() const
{
    return rolconnlimit_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolconnlimit(int32_t value)
{
    rolconnlimit_ = value;
    rolconnlimitIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolconnlimitIsSet() const
{
    return rolconnlimitIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolconnlimit()
{
    rolconnlimitIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolreplication() const
{
    return rolreplication_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolreplication(bool value)
{
    rolreplication_ = value;
    rolreplicationIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolreplicationIsSet() const
{
    return rolreplicationIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolreplication()
{
    rolreplicationIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attribute::isRolbypassrls() const
{
    return rolbypassrls_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolbypassrls(bool value)
{
    rolbypassrls_ = value;
    rolbypassrlsIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolbypassrlsIsSet() const
{
    return rolbypassrlsIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolbypassrls()
{
    rolbypassrlsIsSet_ = false;
}

std::string GaussDBforOpenGaussUserForList_attribute::getRolpassworddeadline() const
{
    return rolpassworddeadline_;
}

void GaussDBforOpenGaussUserForList_attribute::setRolpassworddeadline(const std::string& value)
{
    rolpassworddeadline_ = value;
    rolpassworddeadlineIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attribute::rolpassworddeadlineIsSet() const
{
    return rolpassworddeadlineIsSet_;
}

void GaussDBforOpenGaussUserForList_attribute::unsetrolpassworddeadline()
{
    rolpassworddeadlineIsSet_ = false;
}

}
}
}
}
}


