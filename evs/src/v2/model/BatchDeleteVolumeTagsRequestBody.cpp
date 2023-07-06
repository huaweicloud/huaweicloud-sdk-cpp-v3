

#include "huaweicloud/evs/v2/model/BatchDeleteVolumeTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchDeleteVolumeTagsRequestBody::BatchDeleteVolumeTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDeleteVolumeTagsRequestBody::~BatchDeleteVolumeTagsRequestBody() = default;

void BatchDeleteVolumeTagsRequestBody::validate()
{
}

web::json::value BatchDeleteVolumeTagsRequestBody::toJson() const
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

bool BatchDeleteVolumeTagsRequestBody::fromJson(const web::json::value& val)
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
            std::vector<DeleteTagsOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteVolumeTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteVolumeTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteVolumeTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteVolumeTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<DeleteTagsOption>& BatchDeleteVolumeTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteVolumeTagsRequestBody::setTags(const std::vector<DeleteTagsOption>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteVolumeTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteVolumeTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


