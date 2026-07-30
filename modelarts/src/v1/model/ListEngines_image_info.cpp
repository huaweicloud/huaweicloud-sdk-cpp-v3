

#include "huaweicloud/modelarts/v1/model/ListEngines_image_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEngines_image_info::ListEngines_image_info()
{
    cpuImageUrl_ = "";
    cpuImageUrlIsSet_ = false;
    gpuImageUrl_ = "";
    gpuImageUrlIsSet_ = false;
    imageVersion_ = "";
    imageVersionIsSet_ = false;
}

ListEngines_image_info::~ListEngines_image_info() = default;

void ListEngines_image_info::validate()
{
}

web::json::value ListEngines_image_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuImageUrlIsSet_) {
        val[utility::conversions::to_string_t("cpu_image_url")] = ModelBase::toJson(cpuImageUrl_);
    }
    if(gpuImageUrlIsSet_) {
        val[utility::conversions::to_string_t("gpu_image_url")] = ModelBase::toJson(gpuImageUrl_);
    }
    if(imageVersionIsSet_) {
        val[utility::conversions::to_string_t("image_version")] = ModelBase::toJson(imageVersion_);
    }

    return val;
}
bool ListEngines_image_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageVersion(refVal);
        }
    }
    return ok;
}


std::string ListEngines_image_info::getCpuImageUrl() const
{
    return cpuImageUrl_;
}

void ListEngines_image_info::setCpuImageUrl(const std::string& value)
{
    cpuImageUrl_ = value;
    cpuImageUrlIsSet_ = true;
}

bool ListEngines_image_info::cpuImageUrlIsSet() const
{
    return cpuImageUrlIsSet_;
}

void ListEngines_image_info::unsetcpuImageUrl()
{
    cpuImageUrlIsSet_ = false;
}

std::string ListEngines_image_info::getGpuImageUrl() const
{
    return gpuImageUrl_;
}

void ListEngines_image_info::setGpuImageUrl(const std::string& value)
{
    gpuImageUrl_ = value;
    gpuImageUrlIsSet_ = true;
}

bool ListEngines_image_info::gpuImageUrlIsSet() const
{
    return gpuImageUrlIsSet_;
}

void ListEngines_image_info::unsetgpuImageUrl()
{
    gpuImageUrlIsSet_ = false;
}

std::string ListEngines_image_info::getImageVersion() const
{
    return imageVersion_;
}

void ListEngines_image_info::setImageVersion(const std::string& value)
{
    imageVersion_ = value;
    imageVersionIsSet_ = true;
}

bool ListEngines_image_info::imageVersionIsSet() const
{
    return imageVersionIsSet_;
}

void ListEngines_image_info::unsetimageVersion()
{
    imageVersionIsSet_ = false;
}

}
}
}
}
}


