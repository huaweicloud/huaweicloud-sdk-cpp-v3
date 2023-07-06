

#include "huaweicloud/eip/v2/model/ShowPublicIpTypeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowPublicIpTypeResponse::ShowPublicIpTypeResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowPublicIpTypeResponse::~ShowPublicIpTypeResponse() = default;

void ShowPublicIpTypeResponse::validate()
{
}

web::json::value ShowPublicIpTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowPublicIpTypeResponse::fromJson(const web::json::value& val)
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

std::string ShowPublicIpTypeResponse::getBody() const
{
    return body_;
}

void ShowPublicIpTypeResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPublicIpTypeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPublicIpTypeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


