

#include "huaweicloud/csms/v1/model/UpdateSecretStageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretStageResponse::UpdateSecretStageResponse()
{
    stageIsSet_ = false;
}

UpdateSecretStageResponse::~UpdateSecretStageResponse() = default;

void UpdateSecretStageResponse::validate()
{
}

web::json::value UpdateSecretStageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }

    return val;
}
bool UpdateSecretStageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            Stage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    return ok;
}


Stage UpdateSecretStageResponse::getStage() const
{
    return stage_;
}

void UpdateSecretStageResponse::setStage(const Stage& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool UpdateSecretStageResponse::stageIsSet() const
{
    return stageIsSet_;
}

void UpdateSecretStageResponse::unsetstage()
{
    stageIsSet_ = false;
}

}
}
}
}
}


