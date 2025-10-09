

#include "huaweicloud/gaussdb/v3/model/ScalingScene.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ScalingScene::ScalingScene()
{
    conditionsIsSet_ = false;
}

ScalingScene::~ScalingScene() = default;

void ScalingScene::validate()
{
}

web::json::value ScalingScene::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }

    return val;
}
bool ScalingScene::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<ScalingCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    return ok;
}


std::vector<ScalingCondition>& ScalingScene::getConditions()
{
    return conditions_;
}

void ScalingScene::setConditions(const std::vector<ScalingCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool ScalingScene::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void ScalingScene::unsetconditions()
{
    conditionsIsSet_ = false;
}

}
}
}
}
}


