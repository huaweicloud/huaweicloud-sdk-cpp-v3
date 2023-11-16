

#include "huaweicloud/codeartsbuild/v3/model/ListJobConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJobConfigRequest::ListJobConfigRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    getAllParams_ = "";
    getAllParamsIsSet_ = false;
}

ListJobConfigRequest::~ListJobConfigRequest() = default;

void ListJobConfigRequest::validate()
{
}

web::json::value ListJobConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(getAllParamsIsSet_) {
        val[utility::conversions::to_string_t("get_all_params")] = ModelBase::toJson(getAllParams_);
    }

    return val;
}
bool ListJobConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("get_all_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("get_all_params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGetAllParams(refVal);
        }
    }
    return ok;
}


std::string ListJobConfigRequest::getJobId() const
{
    return jobId_;
}

void ListJobConfigRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobConfigRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobConfigRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListJobConfigRequest::getGetAllParams() const
{
    return getAllParams_;
}

void ListJobConfigRequest::setGetAllParams(const std::string& value)
{
    getAllParams_ = value;
    getAllParamsIsSet_ = true;
}

bool ListJobConfigRequest::getAllParamsIsSet() const
{
    return getAllParamsIsSet_;
}

void ListJobConfigRequest::unsetgetAllParams()
{
    getAllParamsIsSet_ = false;
}

}
}
}
}
}


