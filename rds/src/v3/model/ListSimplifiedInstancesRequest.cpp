

#include "huaweicloud/rds/v3/model/ListSimplifiedInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSimplifiedInstancesRequest::ListSimplifiedInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListSimplifiedInstancesRequest::~ListSimplifiedInstancesRequest() = default;

void ListSimplifiedInstancesRequest::validate()
{
}

web::json::value ListSimplifiedInstancesRequest::toJson() const
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
bool ListSimplifiedInstancesRequest::fromJson(const web::json::value& val)
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
            SimplifiedInstancesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSimplifiedInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSimplifiedInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSimplifiedInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSimplifiedInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SimplifiedInstancesRequest ListSimplifiedInstancesRequest::getBody() const
{
    return body_;
}

void ListSimplifiedInstancesRequest::setBody(const SimplifiedInstancesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSimplifiedInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSimplifiedInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


