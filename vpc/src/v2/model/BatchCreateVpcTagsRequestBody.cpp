

#include "huaweicloud/vpc/v2/model/BatchCreateVpcTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateVpcTagsRequestBody::BatchCreateVpcTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateVpcTagsRequestBody::~BatchCreateVpcTagsRequestBody() = default;

void BatchCreateVpcTagsRequestBody::validate()
{
}

web::json::value BatchCreateVpcTagsRequestBody::toJson() const
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
bool BatchCreateVpcTagsRequestBody::fromJson(const web::json::value& val)
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


std::string BatchCreateVpcTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateVpcTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateVpcTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateVpcTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchCreateVpcTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateVpcTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateVpcTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateVpcTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


