

#include "huaweicloud/cce/v3/model/ListAutopilotChartsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotChartsResponse::ListAutopilotChartsResponse()
{
    bodyIsSet_ = false;
}

ListAutopilotChartsResponse::~ListAutopilotChartsResponse() = default;

void ListAutopilotChartsResponse::validate()
{
}

web::json::value ListAutopilotChartsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAutopilotChartsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ChartResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ChartResp>& ListAutopilotChartsResponse::getBody()
{
    return body_;
}

void ListAutopilotChartsResponse::setBody(const std::vector<ChartResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAutopilotChartsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAutopilotChartsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


