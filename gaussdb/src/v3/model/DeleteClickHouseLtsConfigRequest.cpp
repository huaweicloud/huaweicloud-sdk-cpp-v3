

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseLtsConfigRequest::DeleteClickHouseLtsConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteClickHouseLtsConfigRequest::~DeleteClickHouseLtsConfigRequest() = default;

void DeleteClickHouseLtsConfigRequest::validate()
{
}

web::json::value DeleteClickHouseLtsConfigRequest::toJson() const
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
bool DeleteClickHouseLtsConfigRequest::fromJson(const web::json::value& val)
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
            DeleteChLtsConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteClickHouseLtsConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClickHouseLtsConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClickHouseLtsConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClickHouseLtsConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteChLtsConfigRequestBody DeleteClickHouseLtsConfigRequest::getBody() const
{
    return body_;
}

void DeleteClickHouseLtsConfigRequest::setBody(const DeleteChLtsConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteClickHouseLtsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteClickHouseLtsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


