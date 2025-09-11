

#include "huaweicloud/dbss/v1/model/RebootDbEncryptInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootDbEncryptInstanceRequest::RebootDbEncryptInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RebootDbEncryptInstanceRequest::~RebootDbEncryptInstanceRequest() = default;

void RebootDbEncryptInstanceRequest::validate()
{
}

web::json::value RebootDbEncryptInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool RebootDbEncryptInstanceRequest::fromJson(const web::json::value& val)
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


std::string RebootDbEncryptInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RebootDbEncryptInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RebootDbEncryptInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RebootDbEncryptInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


