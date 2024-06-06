

#include "huaweicloud/gaussdb/v3/model/DeleteLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteLtsConfigsRequest::DeleteLtsConfigsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteLtsConfigsRequest::~DeleteLtsConfigsRequest() = default;

void DeleteLtsConfigsRequest::validate()
{
}

web::json::value DeleteLtsConfigsRequest::toJson() const
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
bool DeleteLtsConfigsRequest::fromJson(const web::json::value& val)
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
            DeleteLtsConfigsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteLtsConfigsRequestBody DeleteLtsConfigsRequest::getBody() const
{
    return body_;
}

void DeleteLtsConfigsRequest::setBody(const DeleteLtsConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteLtsConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteLtsConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


