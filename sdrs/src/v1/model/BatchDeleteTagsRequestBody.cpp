

#include "huaweicloud/sdrs/v1/model/BatchDeleteTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchDeleteTagsRequestBody::BatchDeleteTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BatchDeleteTagsRequestBody::~BatchDeleteTagsRequestBody() = default;

void BatchDeleteTagsRequestBody::validate()
{
}

web::json::value BatchDeleteTagsRequestBody::toJson() const
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

bool BatchDeleteTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteResourceTag> refVal;
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

std::vector<DeleteResourceTag>& BatchDeleteTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteTagsRequestBody::setTags(const std::vector<DeleteResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchDeleteTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


