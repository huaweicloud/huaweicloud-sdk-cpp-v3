

#include "huaweicloud/rds/v3/model/ListDrInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDrInfosRequest::ListDrInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListDrInfosRequest::~ListDrInfosRequest() = default;

void ListDrInfosRequest::validate()
{
}

web::json::value ListDrInfosRequest::toJson() const
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
bool ListDrInfosRequest::fromJson(const web::json::value& val)
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
            QueryDRInfoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListDrInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDrInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDrInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDrInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryDRInfoRequest ListDrInfosRequest::getBody() const
{
    return body_;
}

void ListDrInfosRequest::setBody(const QueryDRInfoRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListDrInfosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListDrInfosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


