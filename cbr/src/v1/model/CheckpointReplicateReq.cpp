

#include "huaweicloud/cbr/v1/model/CheckpointReplicateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointReplicateReq::CheckpointReplicateReq()
{
    replicateIsSet_ = false;
}

CheckpointReplicateReq::~CheckpointReplicateReq() = default;

void CheckpointReplicateReq::validate()
{
}

web::json::value CheckpointReplicateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicateIsSet_) {
        val[utility::conversions::to_string_t("replicate")] = ModelBase::toJson(replicate_);
    }

    return val;
}
bool CheckpointReplicateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replicate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicate"));
        if(!fieldValue.is_null())
        {
            CheckpointReplicateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicate(refVal);
        }
    }
    return ok;
}


CheckpointReplicateParam CheckpointReplicateReq::getReplicate() const
{
    return replicate_;
}

void CheckpointReplicateReq::setReplicate(const CheckpointReplicateParam& value)
{
    replicate_ = value;
    replicateIsSet_ = true;
}

bool CheckpointReplicateReq::replicateIsSet() const
{
    return replicateIsSet_;
}

void CheckpointReplicateReq::unsetreplicate()
{
    replicateIsSet_ = false;
}

}
}
}
}
}


