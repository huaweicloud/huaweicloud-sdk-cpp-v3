

#include "huaweicloud/drs/v5/model/ShowActionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowActionsResponse::ShowActionsResponse()
{
    jobActionIsSet_ = false;
}

ShowActionsResponse::~ShowActionsResponse() = default;

void ShowActionsResponse::validate()
{
}

web::json::value ShowActionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobActionIsSet_) {
        val[utility::conversions::to_string_t("job_action")] = ModelBase::toJson(jobAction_);
    }

    return val;
}

bool ShowActionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_action"));
        if(!fieldValue.is_null())
        {
            JobActions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobAction(refVal);
        }
    }
    return ok;
}

JobActions ShowActionsResponse::getJobAction() const
{
    return jobAction_;
}

void ShowActionsResponse::setJobAction(const JobActions& value)
{
    jobAction_ = value;
    jobActionIsSet_ = true;
}

bool ShowActionsResponse::jobActionIsSet() const
{
    return jobActionIsSet_;
}

void ShowActionsResponse::unsetjobAction()
{
    jobActionIsSet_ = false;
}

}
}
}
}
}


