

#include "huaweicloud/lts/v2/model/UpdateStructConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateStructConfigResponse::UpdateStructConfigResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateStructConfigResponse::~UpdateStructConfigResponse() = default;

void UpdateStructConfigResponse::validate()
{
}

web::json::value UpdateStructConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateStructConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateStructConfigResponse::getBody() const
{
    return body_;
}

void UpdateStructConfigResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStructConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStructConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


