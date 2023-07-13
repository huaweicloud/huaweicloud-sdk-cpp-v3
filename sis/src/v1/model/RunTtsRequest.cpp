

#include "huaweicloud/sis/v1/model/RunTtsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunTtsRequest::RunTtsRequest()
{
    bodyIsSet_ = false;
}

RunTtsRequest::~RunTtsRequest() = default;

void RunTtsRequest::validate()
{
}

web::json::value RunTtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RunTtsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostCustomTTSReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

PostCustomTTSReq RunTtsRequest::getBody() const
{
    return body_;
}

void RunTtsRequest::setBody(const PostCustomTTSReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunTtsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunTtsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


