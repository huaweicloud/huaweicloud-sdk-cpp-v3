

#include "huaweicloud/gaussdb/v3/model/InvokeGaussMySqlInstanceSwitchOverResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InvokeGaussMySqlInstanceSwitchOverResponse::InvokeGaussMySqlInstanceSwitchOverResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

InvokeGaussMySqlInstanceSwitchOverResponse::~InvokeGaussMySqlInstanceSwitchOverResponse() = default;

void InvokeGaussMySqlInstanceSwitchOverResponse::validate()
{
}

web::json::value InvokeGaussMySqlInstanceSwitchOverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool InvokeGaussMySqlInstanceSwitchOverResponse::fromJson(const web::json::value& val)
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

std::string InvokeGaussMySqlInstanceSwitchOverResponse::getJobId() const
{
    return jobId_;
}

void InvokeGaussMySqlInstanceSwitchOverResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool InvokeGaussMySqlInstanceSwitchOverResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void InvokeGaussMySqlInstanceSwitchOverResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


