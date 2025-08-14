

#include "huaweicloud/iotda/v5/model/DeleteOtaPackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteOtaPackageResponse::DeleteOtaPackageResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteOtaPackageResponse::~DeleteOtaPackageResponse() = default;

void DeleteOtaPackageResponse::validate()
{
}

web::json::value DeleteOtaPackageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteOtaPackageResponse::fromJson(const web::json::value& val)
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


std::string DeleteOtaPackageResponse::getBody() const
{
    return body_;
}

void DeleteOtaPackageResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteOtaPackageResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteOtaPackageResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


