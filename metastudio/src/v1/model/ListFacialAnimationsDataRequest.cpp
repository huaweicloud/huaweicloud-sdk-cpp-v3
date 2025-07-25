

#include "huaweicloud/metastudio/v1/model/ListFacialAnimationsDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListFacialAnimationsDataRequest::ListFacialAnimationsDataRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ListFacialAnimationsDataRequest::~ListFacialAnimationsDataRequest() = default;

void ListFacialAnimationsDataRequest::validate()
{
}

web::json::value ListFacialAnimationsDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ListFacialAnimationsDataRequest::fromJson(const web::json::value& val)
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


std::string ListFacialAnimationsDataRequest::getJobId() const
{
    return jobId_;
}

void ListFacialAnimationsDataRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListFacialAnimationsDataRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListFacialAnimationsDataRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


