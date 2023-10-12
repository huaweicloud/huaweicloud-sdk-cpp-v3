

#include "huaweicloud/cloudtable/v2/model/RestartInstanceRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




RestartInstanceRsp::RestartInstanceRsp()
{
    jobIdIsSet_ = false;
}

RestartInstanceRsp::~RestartInstanceRsp() = default;

void RestartInstanceRsp::validate()
{
}

web::json::value RestartInstanceRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartInstanceRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestartInstanceRsp::getJobId()
{
    return jobId_;
}

void RestartInstanceRsp::setJobId(const std::vector<std::string>& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartInstanceRsp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartInstanceRsp::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


