

#include "huaweicloud/aad/v2/model/UpgradeInstanceSpecRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpgradeInstanceSpecRequest::UpgradeInstanceSpecRequest()
{
    bodyIsSet_ = false;
}

UpgradeInstanceSpecRequest::~UpgradeInstanceSpecRequest() = default;

void UpgradeInstanceSpecRequest::validate()
{
}

web::json::value UpgradeInstanceSpecRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeInstanceSpecRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeInstanceSpecV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpgradeInstanceSpecV2RequestBody UpgradeInstanceSpecRequest::getBody() const
{
    return body_;
}

void UpgradeInstanceSpecRequest::setBody(const UpgradeInstanceSpecV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeInstanceSpecRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeInstanceSpecRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


