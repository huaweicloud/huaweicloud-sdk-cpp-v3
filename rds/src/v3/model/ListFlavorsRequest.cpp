

#include "huaweicloud/rds/v3/model/ListFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListFlavorsRequest::ListFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
}

ListFlavorsRequest::~ListFlavorsRequest() = default;

void ListFlavorsRequest::validate()
{
}

web::json::value ListFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}
bool ListFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    return ok;
}


std::string ListFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListFlavorsRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListFlavorsRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListFlavorsRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListFlavorsRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListFlavorsRequest::getVersionName() const
{
    return versionName_;
}

void ListFlavorsRequest::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool ListFlavorsRequest::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void ListFlavorsRequest::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string ListFlavorsRequest::getSpecCode() const
{
    return specCode_;
}

void ListFlavorsRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListFlavorsRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListFlavorsRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


