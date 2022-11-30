

#include "huaweicloud/ecs/v2/model/BatchCreateServerTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchCreateServerTagsRequestBody::BatchCreateServerTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateServerTagsRequestBody::~BatchCreateServerTagsRequestBody() = default;

void BatchCreateServerTagsRequestBody::validate()
{
}

web::json::value BatchCreateServerTagsRequestBody::toJson() const
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

bool BatchCreateServerTagsRequestBody::fromJson(const web::json::value& val)
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


std::string BatchCreateServerTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateServerTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateServerTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateServerTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ServerTag>& BatchCreateServerTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateServerTagsRequestBody::setTags(const std::vector<ServerTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateServerTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateServerTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


