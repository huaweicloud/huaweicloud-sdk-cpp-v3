

#include "huaweicloud/rds/v3/model/BatchTagActionDelRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchTagActionDelRequestBody::BatchTagActionDelRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchTagActionDelRequestBody::~BatchTagActionDelRequestBody() = default;

void BatchTagActionDelRequestBody::validate()
{
}

web::json::value BatchTagActionDelRequestBody::toJson() const
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

bool BatchTagActionDelRequestBody::fromJson(const web::json::value& val)
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
            std::vector<TagDelWithKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string BatchTagActionDelRequestBody::getAction() const
{
    return action_;
}

void BatchTagActionDelRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchTagActionDelRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchTagActionDelRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<TagDelWithKeyValue>& BatchTagActionDelRequestBody::getTags()
{
    return tags_;
}

void BatchTagActionDelRequestBody::setTags(const std::vector<TagDelWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchTagActionDelRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchTagActionDelRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


