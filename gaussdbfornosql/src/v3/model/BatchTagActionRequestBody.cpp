

#include "huaweicloud/gaussdbfornosql/v3/model/BatchTagActionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BatchTagActionRequestBody::BatchTagActionRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchTagActionRequestBody::~BatchTagActionRequestBody() = default;

void BatchTagActionRequestBody::validate()
{
}

web::json::value BatchTagActionRequestBody::toJson() const
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
bool BatchTagActionRequestBody::fromJson(const web::json::value& val)
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
            std::vector<BatchTagActionTagOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BatchTagActionRequestBody::getAction() const
{
    return action_;
}

void BatchTagActionRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchTagActionRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchTagActionRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<BatchTagActionTagOption>& BatchTagActionRequestBody::getTags()
{
    return tags_;
}

void BatchTagActionRequestBody::setTags(const std::vector<BatchTagActionTagOption>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchTagActionRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchTagActionRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


