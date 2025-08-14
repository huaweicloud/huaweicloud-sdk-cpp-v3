

#include "huaweicloud/iotda/v5/model/QueryResourceByTagsDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueryResourceByTagsDTO::QueryResourceByTagsDTO()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    tagsIsSet_ = false;
}

QueryResourceByTagsDTO::~QueryResourceByTagsDTO() = default;

void QueryResourceByTagsDTO::validate()
{
}

web::json::value QueryResourceByTagsDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool QueryResourceByTagsDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagV5DTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string QueryResourceByTagsDTO::getResourceType() const
{
    return resourceType_;
}

void QueryResourceByTagsDTO::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool QueryResourceByTagsDTO::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void QueryResourceByTagsDTO::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::vector<TagV5DTO>& QueryResourceByTagsDTO::getTags()
{
    return tags_;
}

void QueryResourceByTagsDTO::setTags(const std::vector<TagV5DTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryResourceByTagsDTO::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryResourceByTagsDTO::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


