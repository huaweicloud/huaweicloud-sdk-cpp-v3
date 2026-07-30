

#include "huaweicloud/modelarts/v1/model/DeleteInferTmsTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferTmsTagsRequest::DeleteInferTmsTagsRequest()
{
    tagsIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

DeleteInferTmsTagsRequest::~DeleteInferTmsTagsRequest() = default;

void DeleteInferTmsTagsRequest::validate()
{
}

web::json::value DeleteInferTmsTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool DeleteInferTmsTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTagForDeletion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::vector<TmsTagForDeletion>& DeleteInferTmsTagsRequest::getTags()
{
    return tags_;
}

void DeleteInferTmsTagsRequest::setTags(const std::vector<TmsTagForDeletion>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteInferTmsTagsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteInferTmsTagsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string DeleteInferTmsTagsRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteInferTmsTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteInferTmsTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteInferTmsTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


