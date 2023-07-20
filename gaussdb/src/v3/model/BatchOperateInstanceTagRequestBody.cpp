

#include "huaweicloud/gaussdb/v3/model/BatchOperateInstanceTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchOperateInstanceTagRequestBody::BatchOperateInstanceTagRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchOperateInstanceTagRequestBody::~BatchOperateInstanceTagRequestBody() = default;

void BatchOperateInstanceTagRequestBody::validate()
{
}

web::json::value BatchOperateInstanceTagRequestBody::toJson() const
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

bool BatchOperateInstanceTagRequestBody::fromJson(const web::json::value& val)
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
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string BatchOperateInstanceTagRequestBody::getAction() const
{
    return action_;
}

void BatchOperateInstanceTagRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchOperateInstanceTagRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchOperateInstanceTagRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<TagItem>& BatchOperateInstanceTagRequestBody::getTags()
{
    return tags_;
}

void BatchOperateInstanceTagRequestBody::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchOperateInstanceTagRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchOperateInstanceTagRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


