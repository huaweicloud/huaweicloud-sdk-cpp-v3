

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussCoordinators.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussCoordinators::OpenGaussCoordinators()
{
    azCode_ = "";
    azCodeIsSet_ = false;
}

OpenGaussCoordinators::~OpenGaussCoordinators() = default;

void OpenGaussCoordinators::validate()
{
}

web::json::value OpenGaussCoordinators::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }

    return val;
}
bool OpenGaussCoordinators::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    return ok;
}


std::string OpenGaussCoordinators::getAzCode() const
{
    return azCode_;
}

void OpenGaussCoordinators::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool OpenGaussCoordinators::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void OpenGaussCoordinators::unsetazCode()
{
    azCodeIsSet_ = false;
}

}
}
}
}
}


