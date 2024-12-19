

#include "huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SyncLimitDataRequest::SyncLimitDataRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SyncLimitDataRequest::~SyncLimitDataRequest() = default;

void SyncLimitDataRequest::validate()
{
}

web::json::value SyncLimitDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SyncLimitDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string SyncLimitDataRequest::getInstanceId() const
{
    return instanceId_;
}

void SyncLimitDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SyncLimitDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SyncLimitDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


