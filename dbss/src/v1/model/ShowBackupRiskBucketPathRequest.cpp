

#include "huaweicloud/dbss/v1/model/ShowBackupRiskBucketPathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowBackupRiskBucketPathRequest::ShowBackupRiskBucketPathRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBackupRiskBucketPathRequest::~ShowBackupRiskBucketPathRequest() = default;

void ShowBackupRiskBucketPathRequest::validate()
{
}

web::json::value ShowBackupRiskBucketPathRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowBackupRiskBucketPathRequest::fromJson(const web::json::value& val)
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


std::string ShowBackupRiskBucketPathRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupRiskBucketPathRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupRiskBucketPathRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupRiskBucketPathRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


