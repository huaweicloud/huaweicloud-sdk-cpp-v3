

#include "huaweicloud/rds/v3/model/BatchTagActionAddRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchTagActionAddRequestBody::BatchTagActionAddRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchTagActionAddRequestBody::~BatchTagActionAddRequestBody() = default;

void BatchTagActionAddRequestBody::validate()
{
}

web::json::value BatchTagActionAddRequestBody::toJson() const
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

bool BatchTagActionAddRequestBody::fromJson(const web::json::value& val)
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
            std::vector<TagWithKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string BatchTagActionAddRequestBody::getAction() const
{
    return action_;
}

void BatchTagActionAddRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchTagActionAddRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchTagActionAddRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<TagWithKeyValue>& BatchTagActionAddRequestBody::getTags()
{
    return tags_;
}

void BatchTagActionAddRequestBody::setTags(const std::vector<TagWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchTagActionAddRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchTagActionAddRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


