

#include "huaweicloud/dbss/v1/model/DeleteDbOmInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteDbOmInstanceRequest::DeleteDbOmInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteDbOmInstanceRequest::~DeleteDbOmInstanceRequest() = default;

void DeleteDbOmInstanceRequest::validate()
{
}

web::json::value DeleteDbOmInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteDbOmInstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteDbOmInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDbOmInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDbOmInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDbOmInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


