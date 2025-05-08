

#include "huaweicloud/vod/v1/model/ShowObjectMetaDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowObjectMetaDataResponse::ShowObjectMetaDataResponse()
{
    bucket_ = "";
    bucketIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    objectListIsSet_ = false;
}

ShowObjectMetaDataResponse::~ShowObjectMetaDataResponse() = default;

void ShowObjectMetaDataResponse::validate()
{
}

web::json::value ShowObjectMetaDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(objectListIsSet_) {
        val[utility::conversions::to_string_t("object_list")] = ModelBase::toJson(objectList_);
    }

    return val;
}
bool ShowObjectMetaDataResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectList(refVal);
        }
    }
    return ok;
}


std::string ShowObjectMetaDataResponse::getBucket() const
{
    return bucket_;
}

void ShowObjectMetaDataResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ShowObjectMetaDataResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void ShowObjectMetaDataResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ShowObjectMetaDataResponse::getNextMarker() const
{
    return nextMarker_;
}

void ShowObjectMetaDataResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ShowObjectMetaDataResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ShowObjectMetaDataResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

std::vector<ObjectList>& ShowObjectMetaDataResponse::getObjectList()
{
    return objectList_;
}

void ShowObjectMetaDataResponse::setObjectList(const std::vector<ObjectList>& value)
{
    objectList_ = value;
    objectListIsSet_ = true;
}

bool ShowObjectMetaDataResponse::objectListIsSet() const
{
    return objectListIsSet_;
}

void ShowObjectMetaDataResponse::unsetobjectList()
{
    objectListIsSet_ = false;
}

}
}
}
}
}


