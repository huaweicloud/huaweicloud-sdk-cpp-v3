

#include "huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListConfigurationsDifferencesRequest::ListConfigurationsDifferencesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListConfigurationsDifferencesRequest::~ListConfigurationsDifferencesRequest() = default;

void ListConfigurationsDifferencesRequest::validate()
{
}

web::json::value ListConfigurationsDifferencesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListConfigurationsDifferencesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListConfigurationsDifferencesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListConfigurationsDifferencesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListConfigurationsDifferencesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListConfigurationsDifferencesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListConfigurationsDifferencesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ListConfigurationsDifferencesRequestBody ListConfigurationsDifferencesRequest::getBody() const
{
    return body_;
}

void ListConfigurationsDifferencesRequest::setBody(const ListConfigurationsDifferencesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListConfigurationsDifferencesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListConfigurationsDifferencesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


