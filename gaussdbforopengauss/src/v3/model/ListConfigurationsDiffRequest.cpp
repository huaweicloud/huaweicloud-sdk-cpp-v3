

#include "huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListConfigurationsDiffRequest::ListConfigurationsDiffRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListConfigurationsDiffRequest::~ListConfigurationsDiffRequest() = default;

void ListConfigurationsDiffRequest::validate()
{
}

web::json::value ListConfigurationsDiffRequest::toJson() const
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

bool ListConfigurationsDiffRequest::fromJson(const web::json::value& val)
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
            ParamGroupDiffRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListConfigurationsDiffRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListConfigurationsDiffRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListConfigurationsDiffRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListConfigurationsDiffRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ParamGroupDiffRequestBody ListConfigurationsDiffRequest::getBody() const
{
    return body_;
}

void ListConfigurationsDiffRequest::setBody(const ParamGroupDiffRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListConfigurationsDiffRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListConfigurationsDiffRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


