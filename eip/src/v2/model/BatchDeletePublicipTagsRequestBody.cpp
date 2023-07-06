

#include "huaweicloud/eip/v2/model/BatchDeletePublicipTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDeletePublicipTagsRequestBody::BatchDeletePublicipTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BatchDeletePublicipTagsRequestBody::~BatchDeletePublicipTagsRequestBody() = default;

void BatchDeletePublicipTagsRequestBody::validate()
{
}

web::json::value BatchDeletePublicipTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool BatchDeletePublicipTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::vector<ResourceTagOption>& BatchDeletePublicipTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeletePublicipTagsRequestBody::setTags(const std::vector<ResourceTagOption>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeletePublicipTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeletePublicipTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchDeletePublicipTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeletePublicipTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeletePublicipTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeletePublicipTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


