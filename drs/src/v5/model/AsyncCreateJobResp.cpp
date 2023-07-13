

#include "huaweicloud/drs/v5/model/AsyncCreateJobResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncCreateJobResp::AsyncCreateJobResp()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
}

AsyncCreateJobResp::~AsyncCreateJobResp() = default;

void AsyncCreateJobResp::validate()
{
}

web::json::value AsyncCreateJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }

    return val;
}

bool AsyncCreateJobResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
    return ok;
}

std::string AsyncCreateJobResp::getAsyncJobId() const
{
    return asyncJobId_;
}

void AsyncCreateJobResp::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool AsyncCreateJobResp::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void AsyncCreateJobResp::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

}
}
}
}
}


