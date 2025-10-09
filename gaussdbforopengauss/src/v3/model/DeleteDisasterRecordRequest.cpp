

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteDisasterRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteDisasterRecordRequest::DeleteDisasterRecordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDisasterRecordRequest::~DeleteDisasterRecordRequest() = default;

void DeleteDisasterRecordRequest::validate()
{
}

web::json::value DeleteDisasterRecordRequest::toJson() const
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
bool DeleteDisasterRecordRequest::fromJson(const web::json::value& val)
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
            DeleteDisasterRecordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteDisasterRecordRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDisasterRecordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDisasterRecordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDisasterRecordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteDisasterRecordRequestBody DeleteDisasterRecordRequest::getBody() const
{
    return body_;
}

void DeleteDisasterRecordRequest::setBody(const DeleteDisasterRecordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDisasterRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDisasterRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


