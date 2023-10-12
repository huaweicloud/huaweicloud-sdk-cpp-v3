

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForList_attributes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussUserForList_attributes::GaussDBforOpenGaussUserForList_attributes()
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
}

GaussDBforOpenGaussUserForList_attributes::~GaussDBforOpenGaussUserForList_attributes() = default;

void GaussDBforOpenGaussUserForList_attributes::validate()
{
}

web::json::value GaussDBforOpenGaussUserForList_attributes::toJson() const
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

    return val;
}
bool GaussDBforOpenGaussUserForList_attributes::fromJson(const web::json::value& val)
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
    return ok;
}


bool GaussDBforOpenGaussUserForList_attributes::isRolsuper() const
{
    return rolsuper_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolsuper(bool value)
{
    rolsuper_ = value;
    rolsuperIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolsuperIsSet() const
{
    return rolsuperIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolsuper()
{
    rolsuperIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolinherit() const
{
    return rolinherit_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolinherit(bool value)
{
    rolinherit_ = value;
    rolinheritIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolinheritIsSet() const
{
    return rolinheritIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolinherit()
{
    rolinheritIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolcreaterole() const
{
    return rolcreaterole_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolcreaterole(bool value)
{
    rolcreaterole_ = value;
    rolcreateroleIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolcreateroleIsSet() const
{
    return rolcreateroleIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolcreaterole()
{
    rolcreateroleIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolcreatedb() const
{
    return rolcreatedb_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolcreatedb(bool value)
{
    rolcreatedb_ = value;
    rolcreatedbIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolcreatedbIsSet() const
{
    return rolcreatedbIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolcreatedb()
{
    rolcreatedbIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolcanlogin() const
{
    return rolcanlogin_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolcanlogin(bool value)
{
    rolcanlogin_ = value;
    rolcanloginIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolcanloginIsSet() const
{
    return rolcanloginIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolcanlogin()
{
    rolcanloginIsSet_ = false;
}

int32_t GaussDBforOpenGaussUserForList_attributes::getRolconnlimit() const
{
    return rolconnlimit_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolconnlimit(int32_t value)
{
    rolconnlimit_ = value;
    rolconnlimitIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolconnlimitIsSet() const
{
    return rolconnlimitIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolconnlimit()
{
    rolconnlimitIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolreplication() const
{
    return rolreplication_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolreplication(bool value)
{
    rolreplication_ = value;
    rolreplicationIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolreplicationIsSet() const
{
    return rolreplicationIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolreplication()
{
    rolreplicationIsSet_ = false;
}

bool GaussDBforOpenGaussUserForList_attributes::isRolbypassrls() const
{
    return rolbypassrls_;
}

void GaussDBforOpenGaussUserForList_attributes::setRolbypassrls(bool value)
{
    rolbypassrls_ = value;
    rolbypassrlsIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList_attributes::rolbypassrlsIsSet() const
{
    return rolbypassrlsIsSet_;
}

void GaussDBforOpenGaussUserForList_attributes::unsetrolbypassrls()
{
    rolbypassrlsIsSet_ = false;
}

}
}
}
}
}


