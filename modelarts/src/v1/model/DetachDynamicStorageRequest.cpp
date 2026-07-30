

#include "huaweicloud/modelarts/v1/model/DetachDynamicStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDynamicStorageRequest::DetachDynamicStorageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    storageId_ = "";
    storageIdIsSet_ = false;
}

DetachDynamicStorageRequest::~DetachDynamicStorageRequest() = default;

void DetachDynamicStorageRequest::validate()
{
}

web::json::value DetachDynamicStorageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(storageIdIsSet_) {
        val[utility::conversions::to_string_t("storage_id")] = ModelBase::toJson(storageId_);
    }

    return val;
}
bool DetachDynamicStorageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("storage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageId(refVal);
        }
    }
    return ok;
}


std::string DetachDynamicStorageRequest::getInstanceId() const
{
    return instanceId_;
}

void DetachDynamicStorageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DetachDynamicStorageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DetachDynamicStorageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DetachDynamicStorageRequest::getStorageId() const
{
    return storageId_;
}

void DetachDynamicStorageRequest::setStorageId(const std::string& value)
{
    storageId_ = value;
    storageIdIsSet_ = true;
}

bool DetachDynamicStorageRequest::storageIdIsSet() const
{
    return storageIdIsSet_;
}

void DetachDynamicStorageRequest::unsetstorageId()
{
    storageIdIsSet_ = false;
}

}
}
}
}
}


