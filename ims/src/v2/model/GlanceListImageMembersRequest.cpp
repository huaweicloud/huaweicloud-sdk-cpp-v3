

#include "huaweicloud/ims/v2/model/GlanceListImageMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImageMembersRequest::GlanceListImageMembersRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

GlanceListImageMembersRequest::~GlanceListImageMembersRequest() = default;

void GlanceListImageMembersRequest::validate()
{
}

web::json::value GlanceListImageMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool GlanceListImageMembersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string GlanceListImageMembersRequest::getImageId() const
{
    return imageId_;
}

void GlanceListImageMembersRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceListImageMembersRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceListImageMembersRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

int32_t GlanceListImageMembersRequest::getLimit() const
{
    return limit_;
}

void GlanceListImageMembersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GlanceListImageMembersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void GlanceListImageMembersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string GlanceListImageMembersRequest::getMarker() const
{
    return marker_;
}

void GlanceListImageMembersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool GlanceListImageMembersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void GlanceListImageMembersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


