

#include "huaweicloud/drs/v3/model/BatchQueryJobReqPage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryJobReqPage::BatchQueryJobReqPage()
{
    jobsIsSet_ = false;
    pageReqIsSet_ = false;
}

BatchQueryJobReqPage::~BatchQueryJobReqPage() = default;

void BatchQueryJobReqPage::validate()
{
}

web::json::value BatchQueryJobReqPage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(pageReqIsSet_) {
        val[utility::conversions::to_string_t("page_req")] = ModelBase::toJson(pageReq_);
    }

    return val;
}

bool BatchQueryJobReqPage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_req"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_req"));
        if(!fieldValue.is_null())
        {
            PageReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReq(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& BatchQueryJobReqPage::getJobs()
{
    return jobs_;
}

void BatchQueryJobReqPage::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryJobReqPage::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryJobReqPage::unsetjobs()
{
    jobsIsSet_ = false;
}

PageReq BatchQueryJobReqPage::getPageReq() const
{
    return pageReq_;
}

void BatchQueryJobReqPage::setPageReq(const PageReq& value)
{
    pageReq_ = value;
    pageReqIsSet_ = true;
}

bool BatchQueryJobReqPage::pageReqIsSet() const
{
    return pageReqIsSet_;
}

void BatchQueryJobReqPage::unsetpageReq()
{
    pageReqIsSet_ = false;
}

}
}
}
}
}


