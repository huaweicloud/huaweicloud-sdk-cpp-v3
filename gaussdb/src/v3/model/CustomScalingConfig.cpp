

#include "huaweicloud/gaussdb/v3/model/CustomScalingConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CustomScalingConfig::CustomScalingConfig()
{
    enlargeSceneIsSet_ = false;
}

CustomScalingConfig::~CustomScalingConfig() = default;

void CustomScalingConfig::validate()
{
}

web::json::value CustomScalingConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enlargeSceneIsSet_) {
        val[utility::conversions::to_string_t("enlarge_scene")] = ModelBase::toJson(enlargeScene_);
    }

    return val;
}
bool CustomScalingConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enlarge_scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enlarge_scene"));
        if(!fieldValue.is_null())
        {
            ScalingScene refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnlargeScene(refVal);
        }
    }
    return ok;
}


ScalingScene CustomScalingConfig::getEnlargeScene() const
{
    return enlargeScene_;
}

void CustomScalingConfig::setEnlargeScene(const ScalingScene& value)
{
    enlargeScene_ = value;
    enlargeSceneIsSet_ = true;
}

bool CustomScalingConfig::enlargeSceneIsSet() const
{
    return enlargeSceneIsSet_;
}

void CustomScalingConfig::unsetenlargeScene()
{
    enlargeSceneIsSet_ = false;
}

}
}
}
}
}


