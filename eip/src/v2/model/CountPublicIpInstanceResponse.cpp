

#include "huaweicloud/eip/v2/model/CountPublicIpInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CountPublicIpInstanceResponse::CountPublicIpInstanceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CountPublicIpInstanceResponse::~CountPublicIpInstanceResponse() = default;

void CountPublicIpInstanceResponse::validate()
{
}

web::json::value CountPublicIpInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CountPublicIpInstanceResponse::fromJson(const web::json::value& val)
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


std::string CountPublicIpInstanceResponse::getBody() const
{
    return body_;
}

void CountPublicIpInstanceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountPublicIpInstanceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountPublicIpInstanceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


