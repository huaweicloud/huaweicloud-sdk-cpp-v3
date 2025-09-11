

#include "huaweicloud/dbss/v1/model/DeleteDbEncryptInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteDbEncryptInstanceRequest::DeleteDbEncryptInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteDbEncryptInstanceRequest::~DeleteDbEncryptInstanceRequest() = default;

void DeleteDbEncryptInstanceRequest::validate()
{
}

web::json::value DeleteDbEncryptInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteDbEncryptInstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteDbEncryptInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDbEncryptInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDbEncryptInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDbEncryptInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


