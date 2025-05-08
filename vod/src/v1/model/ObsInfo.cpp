

#include "huaweicloud/vod/v1/model/ObsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObsInfo::ObsInfo()
{
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

ObsInfo::~ObsInfo() = default;

void ObsInfo::validate()
{
}

web::json::value ObsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool ObsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string ObsInfo::getBucket() const
{
    return bucket_;
}

void ObsInfo::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ObsInfo::bucketIsSet() const
{
    return bucketIsSet_;
}

void ObsInfo::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ObsInfo::getObject() const
{
    return object_;
}

void ObsInfo::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool ObsInfo::objectIsSet() const
{
    return objectIsSet_;
}

void ObsInfo::unsetobject()
{
    objectIsSet_ = false;
}

std::string ObsInfo::getRegion() const
{
    return region_;
}

void ObsInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ObsInfo::regionIsSet() const
{
    return regionIsSet_;
}

void ObsInfo::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


