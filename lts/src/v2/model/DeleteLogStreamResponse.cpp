

#include "huaweicloud/lts/v2/model/DeleteLogStreamResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteLogStreamResponse::DeleteLogStreamResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteLogStreamResponse::~DeleteLogStreamResponse() = default;

void DeleteLogStreamResponse::validate()
{
}

web::json::value DeleteLogStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteLogStreamResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteLogStreamResponse::getBody() const
{
    return body_;
}

void DeleteLogStreamResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteLogStreamResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteLogStreamResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


