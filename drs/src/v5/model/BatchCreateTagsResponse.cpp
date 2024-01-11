

#include "huaweicloud/drs/v5/model/BatchCreateTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchCreateTagsResponse::BatchCreateTagsResponse()
{
    bodyIsSet_ = false;
}

BatchCreateTagsResponse::~BatchCreateTagsResponse() = default;

void BatchCreateTagsResponse::validate()
{
}

web::json::value BatchCreateTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object BatchCreateTagsResponse::getBody() const
{
    return body_;
}

void BatchCreateTagsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


