

#include "huaweicloud/dbss/v1/model/ObsBucketObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ObsBucketObject::ObsBucketObject()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
}

ObsBucketObject::~ObsBucketObject() = default;

void ObsBucketObject::validate()
{
}

web::json::value ObsBucketObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool ObsBucketObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string ObsBucketObject::getBucketName() const
{
    return bucketName_;
}

void ObsBucketObject::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ObsBucketObject::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ObsBucketObject::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ObsBucketObject::getLocation() const
{
    return location_;
}

void ObsBucketObject::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ObsBucketObject::locationIsSet() const
{
    return locationIsSet_;
}

void ObsBucketObject::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


