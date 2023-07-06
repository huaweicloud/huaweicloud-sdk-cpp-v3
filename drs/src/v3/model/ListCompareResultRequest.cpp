

#include "huaweicloud/drs/v3/model/ListCompareResultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListCompareResultRequest::ListCompareResultRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListCompareResultRequest::~ListCompareResultRequest() = default;

void ListCompareResultRequest::validate()
{
}

web::json::value ListCompareResultRequest::toJson() const
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

bool ListCompareResultRequest::fromJson(const web::json::value& val)
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
            QueryCompareResultReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListCompareResultRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListCompareResultRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListCompareResultRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListCompareResultRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryCompareResultReq ListCompareResultRequest::getBody() const
{
    return body_;
}

void ListCompareResultRequest::setBody(const QueryCompareResultReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCompareResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCompareResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


