

#include "huaweicloud/modelarts/v1/model/TmsResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsResource::TmsResource()
{
    resourceDetailIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
}

TmsResource::~TmsResource() = default;

void TmsResource::validate()
{
}

web::json::value TmsResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool TmsResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<InferTmsTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


Object TmsResource::getResourceDetail() const
{
    return resourceDetail_;
}

void TmsResource::setResourceDetail(const Object& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool TmsResource::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void TmsResource::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string TmsResource::getResourceId() const
{
    return resourceId_;
}

void TmsResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TmsResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TmsResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string TmsResource::getResourceName() const
{
    return resourceName_;
}

void TmsResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool TmsResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void TmsResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<InferTmsTag>& TmsResource::getTags()
{
    return tags_;
}

void TmsResource::setTags(const std::vector<InferTmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TmsResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void TmsResource::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


