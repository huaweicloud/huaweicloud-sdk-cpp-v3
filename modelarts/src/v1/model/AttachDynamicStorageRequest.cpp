

#include "huaweicloud/modelarts/v1/model/AttachDynamicStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDynamicStorageRequest::AttachDynamicStorageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachDynamicStorageRequest::~AttachDynamicStorageRequest() = default;

void AttachDynamicStorageRequest::validate()
{
}

web::json::value AttachDynamicStorageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AttachDynamicStorageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DataVolumesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachDynamicStorageRequest::getInstanceId() const
{
    return instanceId_;
}

void AttachDynamicStorageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AttachDynamicStorageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AttachDynamicStorageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DataVolumesReq AttachDynamicStorageRequest::getBody() const
{
    return body_;
}

void AttachDynamicStorageRequest::setBody(const DataVolumesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachDynamicStorageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachDynamicStorageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


