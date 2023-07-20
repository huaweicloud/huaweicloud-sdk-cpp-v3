

#include "huaweicloud/dds/v3/model/UpdateReplSetNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateReplSetNameResponse::UpdateReplSetNameResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateReplSetNameResponse::~UpdateReplSetNameResponse() = default;

void UpdateReplSetNameResponse::validate()
{
}

web::json::value UpdateReplSetNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateReplSetNameResponse::fromJson(const web::json::value& val)
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

std::string UpdateReplSetNameResponse::getBody() const
{
    return body_;
}

void UpdateReplSetNameResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReplSetNameResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReplSetNameResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


