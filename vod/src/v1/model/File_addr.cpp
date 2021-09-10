

#include "huaweicloud/vod/v1/model/File_addr.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




File_addr::File_addr()
{
    bucket_ = "";
    bucketIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
}

File_addr::~File_addr() = default;

void File_addr::validate()
{
}

web::json::value File_addr::toJson() const
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

bool File_addr::fromJson(const web::json::value& val)
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


std::string File_addr::getBucket() const
{
    return bucket_;
}

void File_addr::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool File_addr::bucketIsSet() const
{
    return bucketIsSet_;
}

void File_addr::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string File_addr::getLocation() const
{
    return location_;
}

void File_addr::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool File_addr::locationIsSet() const
{
    return locationIsSet_;
}

void File_addr::unsetlocation()
{
    locationIsSet_ = false;
}

std::string File_addr::getObject() const
{
    return object_;
}

void File_addr::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool File_addr::objectIsSet() const
{
    return objectIsSet_;
}

void File_addr::unsetobject()
{
    objectIsSet_ = false;
}

}
}
}
}
}


