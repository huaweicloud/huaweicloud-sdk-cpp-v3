

#include "huaweicloud/meeting/v1/model/CreateVisionActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateVisionActiveCodeResponse::CreateVisionActiveCodeResponse()
{
    activeCode_ = "";
    activeCodeIsSet_ = false;
}

CreateVisionActiveCodeResponse::~CreateVisionActiveCodeResponse() = default;

void CreateVisionActiveCodeResponse::validate()
{
}

web::json::value CreateVisionActiveCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeCodeIsSet_) {
        val[utility::conversions::to_string_t("activeCode")] = ModelBase::toJson(activeCode_);
    }

    return val;
}
bool CreateVisionActiveCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("activeCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCode(refVal);
        }
    }
    return ok;
}


std::string CreateVisionActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void CreateVisionActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool CreateVisionActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void CreateVisionActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

}
}
}
}
}


