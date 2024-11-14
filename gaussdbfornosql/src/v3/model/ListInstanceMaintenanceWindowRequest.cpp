

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceMaintenanceWindowRequest::ListInstanceMaintenanceWindowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListInstanceMaintenanceWindowRequest::~ListInstanceMaintenanceWindowRequest() = default;

void ListInstanceMaintenanceWindowRequest::validate()
{
}

web::json::value ListInstanceMaintenanceWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListInstanceMaintenanceWindowRequest::fromJson(const web::json::value& val)
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


std::string ListInstanceMaintenanceWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceMaintenanceWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceMaintenanceWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceMaintenanceWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


