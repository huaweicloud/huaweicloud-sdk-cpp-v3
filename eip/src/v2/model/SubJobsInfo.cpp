

#include "huaweicloud/eip/v2/model/SubJobsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




SubJobsInfo::SubJobsInfo()
{
    subJobsIsSet_ = false;
}

SubJobsInfo::~SubJobsInfo() = default;

void SubJobsInfo::validate()
{
}

web::json::value SubJobsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subJobsIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs")] = ModelBase::toJson(subJobs_);
    }

    return val;
}
bool SubJobsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sub_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobs(refVal);
        }
    }
    return ok;
}


std::vector<Object>& SubJobsInfo::getSubJobs()
{
    return subJobs_;
}

void SubJobsInfo::setSubJobs(const std::vector<Object>& value)
{
    subJobs_ = value;
    subJobsIsSet_ = true;
}

bool SubJobsInfo::subJobsIsSet() const
{
    return subJobsIsSet_;
}

void SubJobsInfo::unsetsubJobs()
{
    subJobsIsSet_ = false;
}

}
}
}
}
}


