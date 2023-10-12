

#include "huaweicloud/dds/v3/model/ShowReplSetNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowReplSetNameRequest::ShowReplSetNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowReplSetNameRequest::~ShowReplSetNameRequest() = default;

void ShowReplSetNameRequest::validate()
{
}

web::json::value ShowReplSetNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowReplSetNameRequest::fromJson(const web::json::value& val)
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


std::string ShowReplSetNameRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowReplSetNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowReplSetNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowReplSetNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


