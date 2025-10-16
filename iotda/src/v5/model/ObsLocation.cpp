

#include "huaweicloud/iotda/v5/model/ObsLocation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ObsLocation::ObsLocation()
{
    regionName_ = "";
    regionNameIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    objectKey_ = "";
    objectKeyIsSet_ = false;
    signMethod_ = "";
    signMethodIsSet_ = false;
    sign_ = "";
    signIsSet_ = false;
}

ObsLocation::~ObsLocation() = default;

void ObsLocation::validate()
{
}

web::json::value ObsLocation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(objectKeyIsSet_) {
        val[utility::conversions::to_string_t("object_key")] = ModelBase::toJson(objectKey_);
    }
    if(signMethodIsSet_) {
        val[utility::conversions::to_string_t("sign_method")] = ModelBase::toJson(signMethod_);
    }
    if(signIsSet_) {
        val[utility::conversions::to_string_t("sign")] = ModelBase::toJson(sign_);
    }

    return val;
}
bool ObsLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSign(refVal);
        }
    }
    return ok;
}


std::string ObsLocation::getRegionName() const
{
    return regionName_;
}

void ObsLocation::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ObsLocation::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ObsLocation::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ObsLocation::getBucketName() const
{
    return bucketName_;
}

void ObsLocation::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ObsLocation::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ObsLocation::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ObsLocation::getObjectKey() const
{
    return objectKey_;
}

void ObsLocation::setObjectKey(const std::string& value)
{
    objectKey_ = value;
    objectKeyIsSet_ = true;
}

bool ObsLocation::objectKeyIsSet() const
{
    return objectKeyIsSet_;
}

void ObsLocation::unsetobjectKey()
{
    objectKeyIsSet_ = false;
}

std::string ObsLocation::getSignMethod() const
{
    return signMethod_;
}

void ObsLocation::setSignMethod(const std::string& value)
{
    signMethod_ = value;
    signMethodIsSet_ = true;
}

bool ObsLocation::signMethodIsSet() const
{
    return signMethodIsSet_;
}

void ObsLocation::unsetsignMethod()
{
    signMethodIsSet_ = false;
}

std::string ObsLocation::getSign() const
{
    return sign_;
}

void ObsLocation::setSign(const std::string& value)
{
    sign_ = value;
    signIsSet_ = true;
}

bool ObsLocation::signIsSet() const
{
    return signIsSet_;
}

void ObsLocation::unsetsign()
{
    signIsSet_ = false;
}

}
}
}
}
}


