

#include "huaweicloud/rds/v3/model/ShowStorageUsedSpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowStorageUsedSpaceRequest::ShowStorageUsedSpaceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowStorageUsedSpaceRequest::~ShowStorageUsedSpaceRequest() = default;

void ShowStorageUsedSpaceRequest::validate()
{
}

web::json::value ShowStorageUsedSpaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowStorageUsedSpaceRequest::fromJson(const web::json::value& val)
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


std::string ShowStorageUsedSpaceRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowStorageUsedSpaceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowStorageUsedSpaceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowStorageUsedSpaceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


