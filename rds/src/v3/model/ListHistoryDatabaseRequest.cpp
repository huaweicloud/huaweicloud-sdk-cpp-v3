

#include "huaweicloud/rds/v3/model/ListHistoryDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryDatabaseRequest::ListHistoryDatabaseRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListHistoryDatabaseRequest::~ListHistoryDatabaseRequest() = default;

void ListHistoryDatabaseRequest::validate()
{
}

web::json::value ListHistoryDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHistoryDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostgreSQLHistoryDatabaseRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListHistoryDatabaseRequest::getEngine() const
{
    return engine_;
}

void ListHistoryDatabaseRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListHistoryDatabaseRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListHistoryDatabaseRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListHistoryDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHistoryDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHistoryDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHistoryDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

PostgreSQLHistoryDatabaseRequest ListHistoryDatabaseRequest::getBody() const
{
    return body_;
}

void ListHistoryDatabaseRequest::setBody(const PostgreSQLHistoryDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHistoryDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHistoryDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


