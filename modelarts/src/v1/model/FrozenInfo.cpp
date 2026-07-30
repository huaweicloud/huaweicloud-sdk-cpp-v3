

#include "huaweicloud/modelarts/v1/model/FrozenInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FrozenInfo::FrozenInfo()
{
    scene_ = "";
    sceneIsSet_ = false;
    effect_ = 0;
    effectIsSet_ = false;
}

FrozenInfo::~FrozenInfo() = default;

void FrozenInfo::validate()
{
}

web::json::value FrozenInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }

    return val;
}
bool FrozenInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    return ok;
}


std::string FrozenInfo::getScene() const
{
    return scene_;
}

void FrozenInfo::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool FrozenInfo::sceneIsSet() const
{
    return sceneIsSet_;
}

void FrozenInfo::unsetscene()
{
    sceneIsSet_ = false;
}

int32_t FrozenInfo::getEffect() const
{
    return effect_;
}

void FrozenInfo::setEffect(int32_t value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool FrozenInfo::effectIsSet() const
{
    return effectIsSet_;
}

void FrozenInfo::unseteffect()
{
    effectIsSet_ = false;
}

}
}
}
}
}


