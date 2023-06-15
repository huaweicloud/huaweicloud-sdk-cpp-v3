

#include "huaweicloud/cbr/v1/model/CreateCheckpointResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateCheckpointResponse::CreateCheckpointResponse()
{
    checkpointIsSet_ = false;
}

CreateCheckpointResponse::~CreateCheckpointResponse() = default;

void CreateCheckpointResponse::validate()
{
}

web::json::value CreateCheckpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }

    return val;
}

bool CreateCheckpointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint"));
        if(!fieldValue.is_null())
        {
            CheckpointCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpoint(refVal);
        }
    }
    return ok;
}


CheckpointCreate CreateCheckpointResponse::getCheckpoint() const
{
    return checkpoint_;
}

void CreateCheckpointResponse::setCheckpoint(const CheckpointCreate& value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool CreateCheckpointResponse::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void CreateCheckpointResponse::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

}
}
}
}
}


