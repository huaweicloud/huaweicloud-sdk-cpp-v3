

#include "huaweicloud/rds/v3/model/UpgradeDbMajorVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbMajorVersionResponse::UpgradeDbMajorVersionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpgradeDbMajorVersionResponse::~UpgradeDbMajorVersionResponse() = default;

void UpgradeDbMajorVersionResponse::validate()
{
}

web::json::value UpgradeDbMajorVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeDbMajorVersionResponse::fromJson(const web::json::value& val)
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


std::string UpgradeDbMajorVersionResponse::getBody() const
{
    return body_;
}

void UpgradeDbMajorVersionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbMajorVersionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbMajorVersionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


