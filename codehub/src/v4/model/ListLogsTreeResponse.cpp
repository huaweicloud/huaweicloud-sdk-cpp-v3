

#include "huaweicloud/codehub/v4/model/ListLogsTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListLogsTreeResponse::ListLogsTreeResponse()
{
    bodyIsSet_ = false;
}

ListLogsTreeResponse::~ListLogsTreeResponse() = default;

void ListLogsTreeResponse::validate()
{
}

web::json::value ListLogsTreeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListLogsTreeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LogTreeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LogTreeDto>& ListLogsTreeResponse::getBody()
{
    return body_;
}

void ListLogsTreeResponse::setBody(const std::vector<LogTreeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLogsTreeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLogsTreeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


