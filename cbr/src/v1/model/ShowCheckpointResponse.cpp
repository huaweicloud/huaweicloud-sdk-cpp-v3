

#include "huaweicloud/cbr/v1/model/ShowCheckpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowCheckpointResponse::ShowCheckpointResponse()
{
    checkpointIsSet_ = false;
}

ShowCheckpointResponse::~ShowCheckpointResponse() = default;

void ShowCheckpointResponse::validate()
{
}

web::json::value ShowCheckpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }

    return val;
}
bool ShowCheckpointResponse::fromJson(const web::json::value& val)
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


CheckpointCreate ShowCheckpointResponse::getCheckpoint() const
{
    return checkpoint_;
}

void ShowCheckpointResponse::setCheckpoint(const CheckpointCreate& value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool ShowCheckpointResponse::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void ShowCheckpointResponse::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

}
}
}
}
}


