

#include "huaweicloud/drs/v3/model/ShowJobListRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ShowJobListRequest::ShowJobListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowJobListRequest::~ShowJobListRequest() = default;

void ShowJobListRequest::validate()
{
}

web::json::value ShowJobListRequest::toJson() const
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

bool ShowJobListRequest::fromJson(const web::json::value& val)
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
            QueryJobsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ShowJobListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowJobListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowJobListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowJobListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryJobsReq ShowJobListRequest::getBody() const
{
    return body_;
}

void ShowJobListRequest::setBody(const QueryJobsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowJobListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowJobListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


