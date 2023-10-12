

#include "huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateDisasterRecoveryDrillRequestBody::CreateDisasterRecoveryDrillRequestBody()
{
    disasterRecoveryDrillIsSet_ = false;
}

CreateDisasterRecoveryDrillRequestBody::~CreateDisasterRecoveryDrillRequestBody() = default;

void CreateDisasterRecoveryDrillRequestBody::validate()
{
}

web::json::value CreateDisasterRecoveryDrillRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill")] = ModelBase::toJson(disasterRecoveryDrill_);
    }

    return val;
}
bool CreateDisasterRecoveryDrillRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill"));
        if(!fieldValue.is_null())
        {
            CreateDisasterRecoveryDrillRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrill(refVal);
        }
    }
    return ok;
}


CreateDisasterRecoveryDrillRequestParams CreateDisasterRecoveryDrillRequestBody::getDisasterRecoveryDrill() const
{
    return disasterRecoveryDrill_;
}

void CreateDisasterRecoveryDrillRequestBody::setDisasterRecoveryDrill(const CreateDisasterRecoveryDrillRequestParams& value)
{
    disasterRecoveryDrill_ = value;
    disasterRecoveryDrillIsSet_ = true;
}

bool CreateDisasterRecoveryDrillRequestBody::disasterRecoveryDrillIsSet() const
{
    return disasterRecoveryDrillIsSet_;
}

void CreateDisasterRecoveryDrillRequestBody::unsetdisasterRecoveryDrill()
{
    disasterRecoveryDrillIsSet_ = false;
}

}
}
}
}
}


