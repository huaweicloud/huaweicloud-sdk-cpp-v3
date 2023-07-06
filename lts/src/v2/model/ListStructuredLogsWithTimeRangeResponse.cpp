

#include "huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructuredLogsWithTimeRangeResponse::ListStructuredLogsWithTimeRangeResponse()
{
    bodyIsSet_ = false;
}

ListStructuredLogsWithTimeRangeResponse::~ListStructuredLogsWithTimeRangeResponse() = default;

void ListStructuredLogsWithTimeRangeResponse::validate()
{
}

web::json::value ListStructuredLogsWithTimeRangeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListStructuredLogsWithTimeRangeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::map<std::string, std::vector<Object>>& ListStructuredLogsWithTimeRangeResponse::getBody()
{
    return body_;
}

void ListStructuredLogsWithTimeRangeResponse::setBody(const std::map<std::string, std::vector<Object>>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListStructuredLogsWithTimeRangeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


