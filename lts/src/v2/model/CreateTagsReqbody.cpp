

#include "huaweicloud/lts/v2/model/CreateTagsReqbody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTagsReqbody::CreateTagsReqbody()
{
    action_ = "";
    actionIsSet_ = false;
    isOpen_ = false;
    isOpenIsSet_ = false;
    tagsIsSet_ = false;
}

CreateTagsReqbody::~CreateTagsReqbody() = default;

void CreateTagsReqbody::validate()
{
}

web::json::value CreateTagsReqbody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateTagsReqbody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string CreateTagsReqbody::getAction() const
{
    return action_;
}

void CreateTagsReqbody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CreateTagsReqbody::actionIsSet() const
{
    return actionIsSet_;
}

void CreateTagsReqbody::unsetaction()
{
    actionIsSet_ = false;
}

bool CreateTagsReqbody::isIsOpen() const
{
    return isOpen_;
}

void CreateTagsReqbody::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool CreateTagsReqbody::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void CreateTagsReqbody::unsetisOpen()
{
    isOpenIsSet_ = false;
}

std::vector<TagsBody>& CreateTagsReqbody::getTags()
{
    return tags_;
}

void CreateTagsReqbody::setTags(const std::vector<TagsBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTagsReqbody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTagsReqbody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


