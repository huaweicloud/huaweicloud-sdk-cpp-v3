

#include "huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAlarmTopicConfigInfoRequest::ListAlarmTopicConfigInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAlarmTopicConfigInfoRequest::~ListAlarmTopicConfigInfoRequest() = default;

void ListAlarmTopicConfigInfoRequest::validate()
{
}

web::json::value ListAlarmTopicConfigInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListAlarmTopicConfigInfoRequest::fromJson(const web::json::value& val)
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


std::string ListAlarmTopicConfigInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAlarmTopicConfigInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAlarmTopicConfigInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAlarmTopicConfigInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


