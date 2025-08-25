

#include "huaweicloud/cpcs/v1/model/ImageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ImageInfo::ImageInfo()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    archType_ = "";
    archTypeIsSet_ = false;
    specificationId_ = "";
    specificationIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    versionType_ = "";
    versionTypeIsSet_ = false;
    trustDomain_ = "";
    trustDomainIsSet_ = false;
    vendorName_ = "";
    vendorNameIsSet_ = false;
    vendorImageVersion_ = "";
    vendorImageVersionIsSet_ = false;
    ccspVersionNeed_ = "";
    ccspVersionNeedIsSet_ = false;
    hwImageVersion_ = "";
    hwImageVersionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ImageInfo::~ImageInfo() = default;

void ImageInfo::validate()
{
}

web::json::value ImageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(archTypeIsSet_) {
        val[utility::conversions::to_string_t("arch_type")] = ModelBase::toJson(archType_);
    }
    if(specificationIdIsSet_) {
        val[utility::conversions::to_string_t("specification_id")] = ModelBase::toJson(specificationId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(versionTypeIsSet_) {
        val[utility::conversions::to_string_t("version_type")] = ModelBase::toJson(versionType_);
    }
    if(trustDomainIsSet_) {
        val[utility::conversions::to_string_t("trust_domain")] = ModelBase::toJson(trustDomain_);
    }
    if(vendorNameIsSet_) {
        val[utility::conversions::to_string_t("vendor_name")] = ModelBase::toJson(vendorName_);
    }
    if(vendorImageVersionIsSet_) {
        val[utility::conversions::to_string_t("vendor_image_version")] = ModelBase::toJson(vendorImageVersion_);
    }
    if(ccspVersionNeedIsSet_) {
        val[utility::conversions::to_string_t("ccsp_version_need")] = ModelBase::toJson(ccspVersionNeed_);
    }
    if(hwImageVersionIsSet_) {
        val[utility::conversions::to_string_t("hw_image_version")] = ModelBase::toJson(hwImageVersion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ImageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arch_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecificationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trust_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trust_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vendor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vendor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVendorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vendor_image_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vendor_image_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVendorImageVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccsp_version_need"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccsp_version_need"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcspVersionNeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw_image_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw_image_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwImageVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ImageInfo::getImageId() const
{
    return imageId_;
}

void ImageInfo::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ImageInfo::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ImageInfo::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ImageInfo::getImageName() const
{
    return imageName_;
}

void ImageInfo::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ImageInfo::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ImageInfo::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ImageInfo::getServiceType() const
{
    return serviceType_;
}

void ImageInfo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ImageInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ImageInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ImageInfo::getArchType() const
{
    return archType_;
}

void ImageInfo::setArchType(const std::string& value)
{
    archType_ = value;
    archTypeIsSet_ = true;
}

bool ImageInfo::archTypeIsSet() const
{
    return archTypeIsSet_;
}

void ImageInfo::unsetarchType()
{
    archTypeIsSet_ = false;
}

std::string ImageInfo::getSpecificationId() const
{
    return specificationId_;
}

void ImageInfo::setSpecificationId(const std::string& value)
{
    specificationId_ = value;
    specificationIdIsSet_ = true;
}

bool ImageInfo::specificationIdIsSet() const
{
    return specificationIdIsSet_;
}

void ImageInfo::unsetspecificationId()
{
    specificationIdIsSet_ = false;
}

std::string ImageInfo::getCreateTime() const
{
    return createTime_;
}

void ImageInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ImageInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ImageInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ImageInfo::getVersionType() const
{
    return versionType_;
}

void ImageInfo::setVersionType(const std::string& value)
{
    versionType_ = value;
    versionTypeIsSet_ = true;
}

bool ImageInfo::versionTypeIsSet() const
{
    return versionTypeIsSet_;
}

void ImageInfo::unsetversionType()
{
    versionTypeIsSet_ = false;
}

std::string ImageInfo::getTrustDomain() const
{
    return trustDomain_;
}

void ImageInfo::setTrustDomain(const std::string& value)
{
    trustDomain_ = value;
    trustDomainIsSet_ = true;
}

bool ImageInfo::trustDomainIsSet() const
{
    return trustDomainIsSet_;
}

void ImageInfo::unsettrustDomain()
{
    trustDomainIsSet_ = false;
}

std::string ImageInfo::getVendorName() const
{
    return vendorName_;
}

void ImageInfo::setVendorName(const std::string& value)
{
    vendorName_ = value;
    vendorNameIsSet_ = true;
}

bool ImageInfo::vendorNameIsSet() const
{
    return vendorNameIsSet_;
}

void ImageInfo::unsetvendorName()
{
    vendorNameIsSet_ = false;
}

std::string ImageInfo::getVendorImageVersion() const
{
    return vendorImageVersion_;
}

void ImageInfo::setVendorImageVersion(const std::string& value)
{
    vendorImageVersion_ = value;
    vendorImageVersionIsSet_ = true;
}

bool ImageInfo::vendorImageVersionIsSet() const
{
    return vendorImageVersionIsSet_;
}

void ImageInfo::unsetvendorImageVersion()
{
    vendorImageVersionIsSet_ = false;
}

std::string ImageInfo::getCcspVersionNeed() const
{
    return ccspVersionNeed_;
}

void ImageInfo::setCcspVersionNeed(const std::string& value)
{
    ccspVersionNeed_ = value;
    ccspVersionNeedIsSet_ = true;
}

bool ImageInfo::ccspVersionNeedIsSet() const
{
    return ccspVersionNeedIsSet_;
}

void ImageInfo::unsetccspVersionNeed()
{
    ccspVersionNeedIsSet_ = false;
}

std::string ImageInfo::getHwImageVersion() const
{
    return hwImageVersion_;
}

void ImageInfo::setHwImageVersion(const std::string& value)
{
    hwImageVersion_ = value;
    hwImageVersionIsSet_ = true;
}

bool ImageInfo::hwImageVersionIsSet() const
{
    return hwImageVersionIsSet_;
}

void ImageInfo::unsethwImageVersion()
{
    hwImageVersionIsSet_ = false;
}

std::string ImageInfo::getDescription() const
{
    return description_;
}

void ImageInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


