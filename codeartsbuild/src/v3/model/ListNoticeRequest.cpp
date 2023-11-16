

#include "huaweicloud/codeartsbuild/v3/model/ListNoticeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListNoticeRequest::ListNoticeRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListNoticeRequest::~ListNoticeRequest() = default;

void ListNoticeRequest::validate()
{
}

web::json::value ListNoticeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListNoticeRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListNoticeRequest::getJobId() const
{
    return jobId_;
}

void ListNoticeRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListNoticeRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListNoticeRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


