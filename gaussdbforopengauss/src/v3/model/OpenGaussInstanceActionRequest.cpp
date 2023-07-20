

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceActionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussInstanceActionRequest::OpenGaussInstanceActionRequest()
{
    expandClusterIsSet_ = false;
    enlargeVolumeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

OpenGaussInstanceActionRequest::~OpenGaussInstanceActionRequest() = default;

void OpenGaussInstanceActionRequest::validate()
{
}

web::json::value OpenGaussInstanceActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expandClusterIsSet_) {
        val[utility::conversions::to_string_t("expand_cluster")] = ModelBase::toJson(expandCluster_);
    }
    if(enlargeVolumeIsSet_) {
        val[utility::conversions::to_string_t("enlarge_volume")] = ModelBase::toJson(enlargeVolume_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool OpenGaussInstanceActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expand_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expand_cluster"));
        if(!fieldValue.is_null())
        {
            OpenGaussExpandCluster refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpandCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enlarge_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enlarge_volume"));
        if(!fieldValue.is_null())
        {
            OpenGaussEnlargeVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnlargeVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

OpenGaussExpandCluster OpenGaussInstanceActionRequest::getExpandCluster() const
{
    return expandCluster_;
}

void OpenGaussInstanceActionRequest::setExpandCluster(const OpenGaussExpandCluster& value)
{
    expandCluster_ = value;
    expandClusterIsSet_ = true;
}

bool OpenGaussInstanceActionRequest::expandClusterIsSet() const
{
    return expandClusterIsSet_;
}

void OpenGaussInstanceActionRequest::unsetexpandCluster()
{
    expandClusterIsSet_ = false;
}

OpenGaussEnlargeVolume OpenGaussInstanceActionRequest::getEnlargeVolume() const
{
    return enlargeVolume_;
}

void OpenGaussInstanceActionRequest::setEnlargeVolume(const OpenGaussEnlargeVolume& value)
{
    enlargeVolume_ = value;
    enlargeVolumeIsSet_ = true;
}

bool OpenGaussInstanceActionRequest::enlargeVolumeIsSet() const
{
    return enlargeVolumeIsSet_;
}

void OpenGaussInstanceActionRequest::unsetenlargeVolume()
{
    enlargeVolumeIsSet_ = false;
}

std::string OpenGaussInstanceActionRequest::getIsAutoPay() const
{
    return isAutoPay_;
}

void OpenGaussInstanceActionRequest::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool OpenGaussInstanceActionRequest::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void OpenGaussInstanceActionRequest::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


