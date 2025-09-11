

#include "huaweicloud/dbss/v1/model/RebootDbOmInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootDbOmInstanceRequest::RebootDbOmInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RebootDbOmInstanceRequest::~RebootDbOmInstanceRequest() = default;

void RebootDbOmInstanceRequest::validate()
{
}

web::json::value RebootDbOmInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool RebootDbOmInstanceRequest::fromJson(const web::json::value& val)
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


std::string RebootDbOmInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RebootDbOmInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RebootDbOmInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RebootDbOmInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


