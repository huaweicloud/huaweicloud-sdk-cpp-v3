

#include "huaweicloud/drs/v3/model/BatchCheckResultsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCheckResultsRequest::BatchCheckResultsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCheckResultsRequest::~BatchCheckResultsRequest() = default;

void BatchCheckResultsRequest::validate()
{
}

web::json::value BatchCheckResultsRequest::toJson() const
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
bool BatchCheckResultsRequest::fromJson(const web::json::value& val)
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
            BatchQueryPrecheckResultReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCheckResultsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchCheckResultsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchCheckResultsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchCheckResultsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryPrecheckResultReq BatchCheckResultsRequest::getBody() const
{
    return body_;
}

void BatchCheckResultsRequest::setBody(const BatchQueryPrecheckResultReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCheckResultsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCheckResultsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


