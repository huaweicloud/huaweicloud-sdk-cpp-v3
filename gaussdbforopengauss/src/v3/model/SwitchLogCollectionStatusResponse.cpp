

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchLogCollectionStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchLogCollectionStatusResponse::SwitchLogCollectionStatusResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SwitchLogCollectionStatusResponse::~SwitchLogCollectionStatusResponse() = default;

void SwitchLogCollectionStatusResponse::validate()
{
}

web::json::value SwitchLogCollectionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchLogCollectionStatusResponse::fromJson(const web::json::value& val)
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


std::string SwitchLogCollectionStatusResponse::getBody() const
{
    return body_;
}

void SwitchLogCollectionStatusResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchLogCollectionStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchLogCollectionStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


