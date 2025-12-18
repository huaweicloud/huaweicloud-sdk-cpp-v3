

#include "huaweicloud/cce/v3/model/ListAutopilotJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotJobsResponse::ListAutopilotJobsResponse()
{
    bodyIsSet_ = false;
}

ListAutopilotJobsResponse::~ListAutopilotJobsResponse() = default;

void ListAutopilotJobsResponse::validate()
{
}

web::json::value ListAutopilotJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAutopilotJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<V2Job> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<V2Job>& ListAutopilotJobsResponse::getBody()
{
    return body_;
}

void ListAutopilotJobsResponse::setBody(const std::vector<V2Job>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAutopilotJobsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAutopilotJobsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


