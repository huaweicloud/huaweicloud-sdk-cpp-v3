

#include "huaweicloud/live/v1/model/ObsFileAddr.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ObsFileAddr::ObsFileAddr()
{
    bucket_ = "";
    bucketIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
}

ObsFileAddr::~ObsFileAddr() = default;

void ObsFileAddr::validate()
{
}

web::json::value ObsFileAddr::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }

    return val;
}

bool ObsFileAddr::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    return ok;
}


std::string ObsFileAddr::getBucket() const
{
    return bucket_;
}

void ObsFileAddr::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ObsFileAddr::bucketIsSet() const
{
    return bucketIsSet_;
}

void ObsFileAddr::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ObsFileAddr::getLocation() const
{
    return location_;
}

void ObsFileAddr::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ObsFileAddr::locationIsSet() const
{
    return locationIsSet_;
}

void ObsFileAddr::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ObsFileAddr::getObject() const
{
    return object_;
}

void ObsFileAddr::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool ObsFileAddr::objectIsSet() const
{
    return objectIsSet_;
}

void ObsFileAddr::unsetobject()
{
    objectIsSet_ = false;
}

}
}
}
}
}


