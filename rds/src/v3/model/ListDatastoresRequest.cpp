

#include "huaweicloud/rds/v3/model/ListDatastoresRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDatastoresRequest::ListDatastoresRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

ListDatastoresRequest::~ListDatastoresRequest() = default;

void ListDatastoresRequest::validate()
{
}

web::json::value ListDatastoresRequest::toJson() const
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
bool ListDatastoresRequest::fromJson(const web::json::value& val)
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


std::string ListDatastoresRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatastoresRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatastoresRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatastoresRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDatastoresRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListDatastoresRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListDatastoresRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListDatastoresRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


