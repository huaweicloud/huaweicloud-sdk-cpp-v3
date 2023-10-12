

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlEngineVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlEngineVersionRequest::ShowGaussMySqlEngineVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

ShowGaussMySqlEngineVersionRequest::~ShowGaussMySqlEngineVersionRequest() = default;

void ShowGaussMySqlEngineVersionRequest::validate()
{
}

web::json::value ShowGaussMySqlEngineVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}
bool ShowGaussMySqlEngineVersionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowGaussMySqlEngineVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlEngineVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlEngineVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlEngineVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlEngineVersionRequest::getDatabaseName() const
{
    return databaseName_;
}

void ShowGaussMySqlEngineVersionRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ShowGaussMySqlEngineVersionRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ShowGaussMySqlEngineVersionRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


