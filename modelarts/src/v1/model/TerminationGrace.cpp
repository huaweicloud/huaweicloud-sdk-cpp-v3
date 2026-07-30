

#include "huaweicloud/modelarts/v1/model/TerminationGrace.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TerminationGrace::TerminationGrace()
{
    preStopCmd_ = "";
    preStopCmdIsSet_ = false;
    terminationGracePeriodSeconds_ = 0;
    terminationGracePeriodSecondsIsSet_ = false;
}

TerminationGrace::~TerminationGrace() = default;

void TerminationGrace::validate()
{
}

web::json::value TerminationGrace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preStopCmdIsSet_) {
        val[utility::conversions::to_string_t("pre_stop_cmd")] = ModelBase::toJson(preStopCmd_);
    }
    if(terminationGracePeriodSecondsIsSet_) {
        val[utility::conversions::to_string_t("termination_grace_period_seconds")] = ModelBase::toJson(terminationGracePeriodSeconds_);
    }

    return val;
}
bool TerminationGrace::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pre_stop_cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_stop_cmd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStopCmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("termination_grace_period_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("termination_grace_period_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminationGracePeriodSeconds(refVal);
        }
    }
    return ok;
}


std::string TerminationGrace::getPreStopCmd() const
{
    return preStopCmd_;
}

void TerminationGrace::setPreStopCmd(const std::string& value)
{
    preStopCmd_ = value;
    preStopCmdIsSet_ = true;
}

bool TerminationGrace::preStopCmdIsSet() const
{
    return preStopCmdIsSet_;
}

void TerminationGrace::unsetpreStopCmd()
{
    preStopCmdIsSet_ = false;
}

int32_t TerminationGrace::getTerminationGracePeriodSeconds() const
{
    return terminationGracePeriodSeconds_;
}

void TerminationGrace::setTerminationGracePeriodSeconds(int32_t value)
{
    terminationGracePeriodSeconds_ = value;
    terminationGracePeriodSecondsIsSet_ = true;
}

bool TerminationGrace::terminationGracePeriodSecondsIsSet() const
{
    return terminationGracePeriodSecondsIsSet_;
}

void TerminationGrace::unsetterminationGracePeriodSeconds()
{
    terminationGracePeriodSecondsIsSet_ = false;
}

}
}
}
}
}


