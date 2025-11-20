

#include "huaweicloud/metastudio/v1/model/CreateTtsOnceCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsOnceCodeResponse::CreateTtsOnceCodeResponse()
{
    onceCode_ = "";
    onceCodeIsSet_ = false;
}

CreateTtsOnceCodeResponse::~CreateTtsOnceCodeResponse() = default;

void CreateTtsOnceCodeResponse::validate()
{
}

web::json::value CreateTtsOnceCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onceCodeIsSet_) {
        val[utility::conversions::to_string_t("once_code")] = ModelBase::toJson(onceCode_);
    }

    return val;
}
bool CreateTtsOnceCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("once_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("once_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnceCode(refVal);
        }
    }
    return ok;
}


std::string CreateTtsOnceCodeResponse::getOnceCode() const
{
    return onceCode_;
}

void CreateTtsOnceCodeResponse::setOnceCode(const std::string& value)
{
    onceCode_ = value;
    onceCodeIsSet_ = true;
}

bool CreateTtsOnceCodeResponse::onceCodeIsSet() const
{
    return onceCodeIsSet_;
}

void CreateTtsOnceCodeResponse::unsetonceCode()
{
    onceCodeIsSet_ = false;
}

}
}
}
}
}


