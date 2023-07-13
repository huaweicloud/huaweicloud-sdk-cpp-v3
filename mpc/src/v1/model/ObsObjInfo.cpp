

#include "huaweicloud/mpc/v1/model/ObsObjInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ObsObjInfo::ObsObjInfo()
{
    bucket_ = "";
    bucketIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
}

ObsObjInfo::~ObsObjInfo() = default;

void ObsObjInfo::validate()
{
}

web::json::value ObsObjInfo::toJson() const
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
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}

bool ObsObjInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    return ok;
}

std::string ObsObjInfo::getBucket() const
{
    return bucket_;
}

void ObsObjInfo::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ObsObjInfo::bucketIsSet() const
{
    return bucketIsSet_;
}

void ObsObjInfo::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ObsObjInfo::getLocation() const
{
    return location_;
}

void ObsObjInfo::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ObsObjInfo::locationIsSet() const
{
    return locationIsSet_;
}

void ObsObjInfo::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ObsObjInfo::getObject() const
{
    return object_;
}

void ObsObjInfo::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool ObsObjInfo::objectIsSet() const
{
    return objectIsSet_;
}

void ObsObjInfo::unsetobject()
{
    objectIsSet_ = false;
}

std::string ObsObjInfo::getFileName() const
{
    return fileName_;
}

void ObsObjInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ObsObjInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ObsObjInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


