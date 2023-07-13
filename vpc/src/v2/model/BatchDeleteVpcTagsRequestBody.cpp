

#include "huaweicloud/vpc/v2/model/BatchDeleteVpcTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteVpcTagsRequestBody::BatchDeleteVpcTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDeleteVpcTagsRequestBody::~BatchDeleteVpcTagsRequestBody() = default;

void BatchDeleteVpcTagsRequestBody::validate()
{
}

web::json::value BatchDeleteVpcTagsRequestBody::toJson() const
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

bool BatchDeleteVpcTagsRequestBody::fromJson(const web::json::value& val)
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
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteVpcTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteVpcTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteVpcTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteVpcTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchDeleteVpcTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteVpcTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteVpcTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteVpcTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


