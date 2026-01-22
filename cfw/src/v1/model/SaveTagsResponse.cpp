

#include "huaweicloud/cfw/v1/model/SaveTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SaveTagsResponse::SaveTagsResponse()
{
    bodyIsSet_ = false;
}

SaveTagsResponse::~SaveTagsResponse() = default;

void SaveTagsResponse::validate()
{
}

web::json::value SaveTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTagsResponse::fromJson(const web::json::value& val)
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


Object SaveTagsResponse::getBody() const
{
    return body_;
}

void SaveTagsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


