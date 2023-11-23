

#include "huaweicloud/rds/v3/model/ShowTdeStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTdeStatusRequest::ShowTdeStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowTdeStatusRequest::~ShowTdeStatusRequest() = default;

void ShowTdeStatusRequest::validate()
{
}

web::json::value ShowTdeStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowTdeStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowTdeStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTdeStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTdeStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTdeStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


