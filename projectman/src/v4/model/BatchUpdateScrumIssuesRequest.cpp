

#include "huaweicloud/projectman/v4/model/BatchUpdateScrumIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateScrumIssuesRequest::BatchUpdateScrumIssuesRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateScrumIssuesRequest::~BatchUpdateScrumIssuesRequest() = default;

void BatchUpdateScrumIssuesRequest::validate()
{
}

web::json::value BatchUpdateScrumIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateScrumIssuesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateRequest BatchUpdateScrumIssuesRequest::getBody() const
{
    return body_;
}

void BatchUpdateScrumIssuesRequest::setBody(const BatchUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateScrumIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateScrumIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


