

#include "huaweicloud/cce/v3/model/ListChartsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListChartsResponse::ListChartsResponse()
{
    bodyIsSet_ = false;
}

ListChartsResponse::~ListChartsResponse() = default;

void ListChartsResponse::validate()
{
}

web::json::value ListChartsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListChartsResponse::fromJson(const web::json::value& val)
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


std::vector<ChartResp>& ListChartsResponse::getBody()
{
    return body_;
}

void ListChartsResponse::setBody(const std::vector<ChartResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListChartsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListChartsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


