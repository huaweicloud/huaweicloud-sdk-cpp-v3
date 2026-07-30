

#include "huaweicloud/modelarts/v1/model/DataVolumesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataVolumesReq::DataVolumesReq()
{
    category_ = "";
    categoryIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    efsId_ = "";
    efsIdIsSet_ = false;
}

DataVolumesReq::~DataVolumesReq() = default;

void DataVolumesReq::validate()
{
}

web::json::value DataVolumesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(efsIdIsSet_) {
        val[utility::conversions::to_string_t("efs_id")] = ModelBase::toJson(efsId_);
    }

    return val;
}
bool DataVolumesReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("efs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("efs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEfsId(refVal);
        }
    }
    return ok;
}


std::string DataVolumesReq::getCategory() const
{
    return category_;
}

void DataVolumesReq::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool DataVolumesReq::categoryIsSet() const
{
    return categoryIsSet_;
}

void DataVolumesReq::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string DataVolumesReq::getMountPath() const
{
    return mountPath_;
}

void DataVolumesReq::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool DataVolumesReq::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void DataVolumesReq::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string DataVolumesReq::getUri() const
{
    return uri_;
}

void DataVolumesReq::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool DataVolumesReq::uriIsSet() const
{
    return uriIsSet_;
}

void DataVolumesReq::unseturi()
{
    uriIsSet_ = false;
}

std::string DataVolumesReq::getEfsId() const
{
    return efsId_;
}

void DataVolumesReq::setEfsId(const std::string& value)
{
    efsId_ = value;
    efsIdIsSet_ = true;
}

bool DataVolumesReq::efsIdIsSet() const
{
    return efsIdIsSet_;
}

void DataVolumesReq::unsetefsId()
{
    efsIdIsSet_ = false;
}

}
}
}
}
}


