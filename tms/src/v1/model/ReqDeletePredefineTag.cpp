

#include "huaweicloud/tms/v1/model/ReqDeletePredefineTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqDeletePredefineTag::ReqDeletePredefineTag()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

ReqDeletePredefineTag::~ReqDeletePredefineTag() = default;

void ReqDeletePredefineTag::validate()
{
}

web::json::value ReqDeletePredefineTag::toJson() const
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

bool ReqDeletePredefineTag::fromJson(const web::json::value& val)
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


std::string ReqDeletePredefineTag::getAction() const
{
    return action_;
}

void ReqDeletePredefineTag::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ReqDeletePredefineTag::actionIsSet() const
{
    return actionIsSet_;
}

void ReqDeletePredefineTag::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<PredefineTagRequest>& ReqDeletePredefineTag::getTags()
{
    return tags_;
}

void ReqDeletePredefineTag::setTags(const std::vector<PredefineTagRequest>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ReqDeletePredefineTag::tagsIsSet() const
{
    return tagsIsSet_;
}

void ReqDeletePredefineTag::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


