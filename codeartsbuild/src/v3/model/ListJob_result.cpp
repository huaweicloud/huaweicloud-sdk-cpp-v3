

#include "huaweicloud/codeartsbuild/v3/model/ListJob_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJob_result::ListJob_result()
{
    total_ = 0;
    totalIsSet_ = false;
    jobListIsSet_ = false;
}

ListJob_result::~ListJob_result() = default;

void ListJob_result::validate()
{
}

web::json::value ListJob_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(jobListIsSet_) {
        val[utility::conversions::to_string_t("job_list")] = ModelBase::toJson(jobList_);
    }

    return val;
}
bool ListJob_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListJob_result_job_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobList(refVal);
        }
    }
    return ok;
}


int32_t ListJob_result::getTotal() const
{
    return total_;
}

void ListJob_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListJob_result::totalIsSet() const
{
    return totalIsSet_;
}

void ListJob_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListJob_result_job_list>& ListJob_result::getJobList()
{
    return jobList_;
}

void ListJob_result::setJobList(const std::vector<ListJob_result_job_list>& value)
{
    jobList_ = value;
    jobListIsSet_ = true;
}

bool ListJob_result::jobListIsSet() const
{
    return jobListIsSet_;
}

void ListJob_result::unsetjobList()
{
    jobListIsSet_ = false;
}

}
}
}
}
}


