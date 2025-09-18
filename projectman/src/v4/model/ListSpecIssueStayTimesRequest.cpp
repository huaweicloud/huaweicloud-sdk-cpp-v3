

#include "huaweicloud/projectman/v4/model/ListSpecIssueStayTimesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListSpecIssueStayTimesRequest::ListSpecIssueStayTimesRequest()
{
    bodyIsSet_ = false;
}

ListSpecIssueStayTimesRequest::~ListSpecIssueStayTimesRequest() = default;

void ListSpecIssueStayTimesRequest::validate()
{
}

web::json::value ListSpecIssueStayTimesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSpecIssueStayTimesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListSpecIssueStayTimesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListSpecIssueStayTimesRequestBody ListSpecIssueStayTimesRequest::getBody() const
{
    return body_;
}

void ListSpecIssueStayTimesRequest::setBody(const ListSpecIssueStayTimesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSpecIssueStayTimesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSpecIssueStayTimesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


