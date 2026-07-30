

#include "huaweicloud/modelarts/v1/model/DetachDynamicStorageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDynamicStorageResponse::DetachDynamicStorageResponse()
{
    category_ = "";
    categoryIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    efsId_ = "";
    efsIdIsSet_ = false;
    mountType_ = "";
    mountTypeIsSet_ = false;
}

DetachDynamicStorageResponse::~DetachDynamicStorageResponse() = default;

void DetachDynamicStorageResponse::validate()
{
}

web::json::value DetachDynamicStorageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(efsIdIsSet_) {
        val[utility::conversions::to_string_t("efs_id")] = ModelBase::toJson(efsId_);
    }
    if(mountTypeIsSet_) {
        val[utility::conversions::to_string_t("mount_type")] = ModelBase::toJson(mountType_);
    }

    return val;
}
bool DetachDynamicStorageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("efs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("efs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEfsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountType(refVal);
        }
    }
    return ok;
}


std::string DetachDynamicStorageResponse::getCategory() const
{
    return category_;
}

void DetachDynamicStorageResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool DetachDynamicStorageResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void DetachDynamicStorageResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getId() const
{
    return id_;
}

void DetachDynamicStorageResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DetachDynamicStorageResponse::idIsSet() const
{
    return idIsSet_;
}

void DetachDynamicStorageResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getMountPath() const
{
    return mountPath_;
}

void DetachDynamicStorageResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool DetachDynamicStorageResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void DetachDynamicStorageResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getStatus() const
{
    return status_;
}

void DetachDynamicStorageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DetachDynamicStorageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DetachDynamicStorageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getUri() const
{
    return uri_;
}

void DetachDynamicStorageResponse::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool DetachDynamicStorageResponse::uriIsSet() const
{
    return uriIsSet_;
}

void DetachDynamicStorageResponse::unseturi()
{
    uriIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getFailureReason() const
{
    return failureReason_;
}

void DetachDynamicStorageResponse::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool DetachDynamicStorageResponse::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void DetachDynamicStorageResponse::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getEfsId() const
{
    return efsId_;
}

void DetachDynamicStorageResponse::setEfsId(const std::string& value)
{
    efsId_ = value;
    efsIdIsSet_ = true;
}

bool DetachDynamicStorageResponse::efsIdIsSet() const
{
    return efsIdIsSet_;
}

void DetachDynamicStorageResponse::unsetefsId()
{
    efsIdIsSet_ = false;
}

std::string DetachDynamicStorageResponse::getMountType() const
{
    return mountType_;
}

void DetachDynamicStorageResponse::setMountType(const std::string& value)
{
    mountType_ = value;
    mountTypeIsSet_ = true;
}

bool DetachDynamicStorageResponse::mountTypeIsSet() const
{
    return mountTypeIsSet_;
}

void DetachDynamicStorageResponse::unsetmountType()
{
    mountTypeIsSet_ = false;
}

}
}
}
}
}


