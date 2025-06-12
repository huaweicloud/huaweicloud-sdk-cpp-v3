

#include "huaweicloud/metastudio/v1/model/LayerRotationConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LayerRotationConfig::LayerRotationConfig()
{
    angle_ = 0;
    angleIsSet_ = false;
}

LayerRotationConfig::~LayerRotationConfig() = default;

void LayerRotationConfig::validate()
{
}

web::json::value LayerRotationConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(angleIsSet_) {
        val[utility::conversions::to_string_t("angle")] = ModelBase::toJson(angle_);
    }

    return val;
}
bool LayerRotationConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("angle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("angle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAngle(refVal);
        }
    }
    return ok;
}


int32_t LayerRotationConfig::getAngle() const
{
    return angle_;
}

void LayerRotationConfig::setAngle(int32_t value)
{
    angle_ = value;
    angleIsSet_ = true;
}

bool LayerRotationConfig::angleIsSet() const
{
    return angleIsSet_;
}

void LayerRotationConfig::unsetangle()
{
    angleIsSet_ = false;
}

}
}
}
}
}


