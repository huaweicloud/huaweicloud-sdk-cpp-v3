

#include "huaweicloud/live/v1/model/RecordObsFileAddr.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordObsFileAddr::RecordObsFileAddr()
{
    bucket_ = "";
    bucketIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
}

RecordObsFileAddr::~RecordObsFileAddr() = default;

void RecordObsFileAddr::validate()
{
}

web::json::value RecordObsFileAddr::toJson() const
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
bool RecordObsFileAddr::fromJson(const web::json::value& val)
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


std::string RecordObsFileAddr::getBucket() const
{
    return bucket_;
}

void RecordObsFileAddr::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool RecordObsFileAddr::bucketIsSet() const
{
    return bucketIsSet_;
}

void RecordObsFileAddr::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string RecordObsFileAddr::getLocation() const
{
    return location_;
}

void RecordObsFileAddr::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool RecordObsFileAddr::locationIsSet() const
{
    return locationIsSet_;
}

void RecordObsFileAddr::unsetlocation()
{
    locationIsSet_ = false;
}

std::string RecordObsFileAddr::getObject() const
{
    return object_;
}

void RecordObsFileAddr::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool RecordObsFileAddr::objectIsSet() const
{
    return objectIsSet_;
}

void RecordObsFileAddr::unsetobject()
{
    objectIsSet_ = false;
}

}
}
}
}
}


