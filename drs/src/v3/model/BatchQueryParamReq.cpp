

#include "huaweicloud/drs/v3/model/BatchQueryParamReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryParamReq::BatchQueryParamReq()
{
    jobsIsSet_ = false;
    refresh_ = "";
    refreshIsSet_ = false;
}

BatchQueryParamReq::~BatchQueryParamReq() = default;

void BatchQueryParamReq::validate()
{
}

web::json::value BatchQueryParamReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(refreshIsSet_) {
        val[utility::conversions::to_string_t("refresh")] = ModelBase::toJson(refresh_);
    }

    return val;
}

bool BatchQueryParamReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefresh(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& BatchQueryParamReq::getJobs()
{
    return jobs_;
}

void BatchQueryParamReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryParamReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryParamReq::unsetjobs()
{
    jobsIsSet_ = false;
}

std::string BatchQueryParamReq::getRefresh() const
{
    return refresh_;
}

void BatchQueryParamReq::setRefresh(const std::string& value)
{
    refresh_ = value;
    refreshIsSet_ = true;
}

bool BatchQueryParamReq::refreshIsSet() const
{
    return refreshIsSet_;
}

void BatchQueryParamReq::unsetrefresh()
{
    refreshIsSet_ = false;
}

}
}
}
}
}


