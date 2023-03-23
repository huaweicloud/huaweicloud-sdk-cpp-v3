

#include "huaweicloud/tms/v1/model/ReqCreatePredefineTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqCreatePredefineTag::ReqCreatePredefineTag()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

ReqCreatePredefineTag::~ReqCreatePredefineTag() = default;

void ReqCreatePredefineTag::validate()
{
}

web::json::value ReqCreatePredefineTag::toJson() const
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

bool ReqCreatePredefineTag::fromJson(const web::json::value& val)
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
            std::vector<PredefineTagRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ReqCreatePredefineTag::getAction() const
{
    return action_;
}

void ReqCreatePredefineTag::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ReqCreatePredefineTag::actionIsSet() const
{
    return actionIsSet_;
}

void ReqCreatePredefineTag::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<PredefineTagRequest>& ReqCreatePredefineTag::getTags()
{
    return tags_;
}

void ReqCreatePredefineTag::setTags(const std::vector<PredefineTagRequest>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ReqCreatePredefineTag::tagsIsSet() const
{
    return tagsIsSet_;
}

void ReqCreatePredefineTag::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


