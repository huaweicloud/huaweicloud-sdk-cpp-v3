

#include "huaweicloud/dbss/v1/model/UnbindDbEncryptEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UnbindDbEncryptEipRequest::UnbindDbEncryptEipRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

UnbindDbEncryptEipRequest::~UnbindDbEncryptEipRequest() = default;

void UnbindDbEncryptEipRequest::validate()
{
}

web::json::value UnbindDbEncryptEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool UnbindDbEncryptEipRequest::fromJson(const web::json::value& val)
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


std::string UnbindDbEncryptEipRequest::getInstanceId() const
{
    return instanceId_;
}

void UnbindDbEncryptEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnbindDbEncryptEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnbindDbEncryptEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


