

#include "huaweicloud/gaussdb/v3/model/ListHtapStorageTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapStorageTypeRequest::ListHtapStorageTypeRequest()
{
    database_ = "";
    databaseIsSet_ = false;
    versionName_ = "";
    versionNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListHtapStorageTypeRequest::~ListHtapStorageTypeRequest() = default;

void ListHtapStorageTypeRequest::validate()
{
}

web::json::value ListHtapStorageTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(versionNameIsSet_) {
        val[utility::conversions::to_string_t("version_name")] = ModelBase::toJson(versionName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListHtapStorageTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListHtapStorageTypeRequest::getDatabase() const
{
    return database_;
}

void ListHtapStorageTypeRequest::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ListHtapStorageTypeRequest::databaseIsSet() const
{
    return databaseIsSet_;
}

void ListHtapStorageTypeRequest::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ListHtapStorageTypeRequest::getVersionName() const
{
    return versionName_;
}

void ListHtapStorageTypeRequest::setVersionName(const std::string& value)
{
    versionName_ = value;
    versionNameIsSet_ = true;
}

bool ListHtapStorageTypeRequest::versionNameIsSet() const
{
    return versionNameIsSet_;
}

void ListHtapStorageTypeRequest::unsetversionName()
{
    versionNameIsSet_ = false;
}

std::string ListHtapStorageTypeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHtapStorageTypeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHtapStorageTypeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHtapStorageTypeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


