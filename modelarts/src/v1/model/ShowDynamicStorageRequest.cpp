

#include "huaweicloud/modelarts/v1/model/ShowDynamicStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowDynamicStorageRequest::ShowDynamicStorageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    storageId_ = "";
    storageIdIsSet_ = false;
}

ShowDynamicStorageRequest::~ShowDynamicStorageRequest() = default;

void ShowDynamicStorageRequest::validate()
{
}

web::json::value ShowDynamicStorageRequest::toJson() const
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
bool ShowDynamicStorageRequest::fromJson(const web::json::value& val)
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


std::string ShowDynamicStorageRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDynamicStorageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDynamicStorageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDynamicStorageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDynamicStorageRequest::getStorageId() const
{
    return storageId_;
}

void ShowDynamicStorageRequest::setStorageId(const std::string& value)
{
    storageId_ = value;
    storageIdIsSet_ = true;
}

bool ShowDynamicStorageRequest::storageIdIsSet() const
{
    return storageIdIsSet_;
}

void ShowDynamicStorageRequest::unsetstorageId()
{
    storageIdIsSet_ = false;
}

}
}
}
}
}


