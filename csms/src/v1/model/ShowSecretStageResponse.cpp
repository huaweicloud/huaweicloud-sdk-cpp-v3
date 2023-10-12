

#include "huaweicloud/csms/v1/model/ShowSecretStageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretStageResponse::ShowSecretStageResponse()
{
    stageIsSet_ = false;
}

ShowSecretStageResponse::~ShowSecretStageResponse() = default;

void ShowSecretStageResponse::validate()
{
}

web::json::value ShowSecretStageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }

    return val;
}
bool ShowSecretStageResponse::fromJson(const web::json::value& val)
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


Stage ShowSecretStageResponse::getStage() const
{
    return stage_;
}

void ShowSecretStageResponse::setStage(const Stage& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool ShowSecretStageResponse::stageIsSet() const
{
    return stageIsSet_;
}

void ShowSecretStageResponse::unsetstage()
{
    stageIsSet_ = false;
}

}
}
}
}
}


