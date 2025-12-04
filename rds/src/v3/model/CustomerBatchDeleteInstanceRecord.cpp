

#include "huaweicloud/rds/v3/model/CustomerBatchDeleteInstanceRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerBatchDeleteInstanceRecord::CustomerBatchDeleteInstanceRecord()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CustomerBatchDeleteInstanceRecord::~CustomerBatchDeleteInstanceRecord() = default;

void CustomerBatchDeleteInstanceRecord::validate()
{
}

web::json::value CustomerBatchDeleteInstanceRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CustomerBatchDeleteInstanceRecord::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string CustomerBatchDeleteInstanceRecord::getInstanceId() const
{
    return instanceId_;
}

void CustomerBatchDeleteInstanceRecord::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CustomerBatchDeleteInstanceRecord::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CustomerBatchDeleteInstanceRecord::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CustomerBatchDeleteInstanceRecord::getJobId() const
{
    return jobId_;
}

void CustomerBatchDeleteInstanceRecord::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CustomerBatchDeleteInstanceRecord::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CustomerBatchDeleteInstanceRecord::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


