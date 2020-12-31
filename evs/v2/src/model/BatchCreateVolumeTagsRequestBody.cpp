

#include "huaweicloud/evs/model/BatchCreateVolumeTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchCreateVolumeTagsRequestBody::BatchCreateVolumeTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateVolumeTagsRequestBody::~BatchCreateVolumeTagsRequestBody() = default;

void BatchCreateVolumeTagsRequestBody::validate()
{
}

web::json::value BatchCreateVolumeTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool BatchCreateVolumeTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BatchCreateVolumeTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateVolumeTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateVolumeTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateVolumeTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<Tag>& BatchCreateVolumeTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateVolumeTagsRequestBody::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateVolumeTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateVolumeTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


