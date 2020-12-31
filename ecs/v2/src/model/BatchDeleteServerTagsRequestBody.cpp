

#include "huaweicloud/ecs/model/BatchDeleteServerTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerTagsRequestBody::BatchDeleteServerTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDeleteServerTagsRequestBody::~BatchDeleteServerTagsRequestBody() = default;

void BatchDeleteServerTagsRequestBody::validate()
{
}

web::json::value BatchDeleteServerTagsRequestBody::toJson() const
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

bool BatchDeleteServerTagsRequestBody::fromJson(const web::json::value& val)
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
            std::vector<ServerTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteServerTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteServerTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteServerTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteServerTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ServerTag>& BatchDeleteServerTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteServerTagsRequestBody::setTags(const std::vector<ServerTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteServerTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteServerTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


