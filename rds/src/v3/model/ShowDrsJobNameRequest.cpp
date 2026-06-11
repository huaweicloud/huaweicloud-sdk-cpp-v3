

#include "huaweicloud/rds/v3/model/ShowDrsJobNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDrsJobNameRequest::ShowDrsJobNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowDrsJobNameRequest::~ShowDrsJobNameRequest() = default;

void ShowDrsJobNameRequest::validate()
{
}

web::json::value ShowDrsJobNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowDrsJobNameRequest::fromJson(const web::json::value& val)
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


std::string ShowDrsJobNameRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDrsJobNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDrsJobNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDrsJobNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


