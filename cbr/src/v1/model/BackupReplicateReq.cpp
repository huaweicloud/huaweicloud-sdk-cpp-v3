

#include "huaweicloud/cbr/v1/model/BackupReplicateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupReplicateReq::BackupReplicateReq()
{
    replicateIsSet_ = false;
}

BackupReplicateReq::~BackupReplicateReq() = default;

void BackupReplicateReq::validate()
{
}

web::json::value BackupReplicateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicateIsSet_) {
        val[utility::conversions::to_string_t("replicate")] = ModelBase::toJson(replicate_);
    }

    return val;
}

bool BackupReplicateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replicate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicate"));
        if(!fieldValue.is_null())
        {
            BackupReplicateReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicate(refVal);
        }
    }
    return ok;
}

BackupReplicateReqBody BackupReplicateReq::getReplicate() const
{
    return replicate_;
}

void BackupReplicateReq::setReplicate(const BackupReplicateReqBody& value)
{
    replicate_ = value;
    replicateIsSet_ = true;
}

bool BackupReplicateReq::replicateIsSet() const
{
    return replicateIsSet_;
}

void BackupReplicateReq::unsetreplicate()
{
    replicateIsSet_ = false;
}

}
}
}
}
}


