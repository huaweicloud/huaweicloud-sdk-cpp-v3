

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionTagsRequestBody::UpdateFunctionTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

UpdateFunctionTagsRequestBody::~UpdateFunctionTagsRequestBody() = default;

void UpdateFunctionTagsRequestBody::validate()
{
}

web::json::value UpdateFunctionTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool UpdateFunctionTagsRequestBody::fromJson(const web::json::value& val)
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
            std::vector<KvItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<KvItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionTagsRequestBody::getAction() const
{
    return action_;
}

void UpdateFunctionTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateFunctionTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateFunctionTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<KvItem>& UpdateFunctionTagsRequestBody::getTags()
{
    return tags_;
}

void UpdateFunctionTagsRequestBody::setTags(const std::vector<KvItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateFunctionTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateFunctionTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<KvItem>& UpdateFunctionTagsRequestBody::getSysTags()
{
    return sysTags_;
}

void UpdateFunctionTagsRequestBody::setSysTags(const std::vector<KvItem>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool UpdateFunctionTagsRequestBody::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void UpdateFunctionTagsRequestBody::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


