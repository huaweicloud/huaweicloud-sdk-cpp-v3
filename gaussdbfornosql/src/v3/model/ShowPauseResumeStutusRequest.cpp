

#include "huaweicloud/gaussdbfornosql/v3/model/ShowPauseResumeStutusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowPauseResumeStutusRequest::ShowPauseResumeStutusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowPauseResumeStutusRequest::~ShowPauseResumeStutusRequest() = default;

void ShowPauseResumeStutusRequest::validate()
{
}

web::json::value ShowPauseResumeStutusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ShowPauseResumeStutusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}

std::string ShowPauseResumeStutusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowPauseResumeStutusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowPauseResumeStutusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowPauseResumeStutusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


