

#include "huaweicloud/ims/v2/model/AddOrUpdateTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




AddOrUpdateTagsRequestBody::AddOrUpdateTagsRequestBody()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    imageTagIsSet_ = false;
}

AddOrUpdateTagsRequestBody::~AddOrUpdateTagsRequestBody() = default;

void AddOrUpdateTagsRequestBody::validate()
{
}

web::json::value AddOrUpdateTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(imageTagIsSet_) {
        val[utility::conversions::to_string_t("image_tag")] = ModelBase::toJson(imageTag_);
    }

    return val;
}

bool AddOrUpdateTagsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_tag"));
        if(!fieldValue.is_null())
        {
            ResourceTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTag(refVal);
        }
    }
    return ok;
}


std::string AddOrUpdateTagsRequestBody::getImageId() const
{
    return imageId_;
}

void AddOrUpdateTagsRequestBody::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool AddOrUpdateTagsRequestBody::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void AddOrUpdateTagsRequestBody::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string AddOrUpdateTagsRequestBody::getTag() const
{
    return tag_;
}

void AddOrUpdateTagsRequestBody::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool AddOrUpdateTagsRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void AddOrUpdateTagsRequestBody::unsettag()
{
    tagIsSet_ = false;
}

ResourceTag AddOrUpdateTagsRequestBody::getImageTag() const
{
    return imageTag_;
}

void AddOrUpdateTagsRequestBody::setImageTag(const ResourceTag& value)
{
    imageTag_ = value;
    imageTagIsSet_ = true;
}

bool AddOrUpdateTagsRequestBody::imageTagIsSet() const
{
    return imageTagIsSet_;
}

void AddOrUpdateTagsRequestBody::unsetimageTag()
{
    imageTagIsSet_ = false;
}

}
}
}
}
}


