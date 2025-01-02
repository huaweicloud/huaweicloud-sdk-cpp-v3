

#include "huaweicloud/rds/v3/model/ListReadOnlyReplayDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReadOnlyReplayDatabaseRequest::ListReadOnlyReplayDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListReadOnlyReplayDatabaseRequest::~ListReadOnlyReplayDatabaseRequest() = default;

void ListReadOnlyReplayDatabaseRequest::validate()
{
}

web::json::value ListReadOnlyReplayDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListReadOnlyReplayDatabaseRequest::fromJson(const web::json::value& val)
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


std::string ListReadOnlyReplayDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void ListReadOnlyReplayDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListReadOnlyReplayDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListReadOnlyReplayDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


