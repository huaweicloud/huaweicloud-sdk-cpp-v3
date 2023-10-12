

#include "huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchCreateOrDeleteTagsRequestBody::BatchCreateOrDeleteTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

BatchCreateOrDeleteTagsRequestBody::~BatchCreateOrDeleteTagsRequestBody() = default;

void BatchCreateOrDeleteTagsRequestBody::validate()
{
}

web::json::value BatchCreateOrDeleteTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool BatchCreateOrDeleteTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::vector<TagItem>& BatchCreateOrDeleteTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateOrDeleteTagsRequestBody::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateOrDeleteTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateOrDeleteTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateOrDeleteTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateOrDeleteTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateOrDeleteTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateOrDeleteTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string BatchCreateOrDeleteTagsRequestBody::getSequence() const
{
    return sequence_;
}

void BatchCreateOrDeleteTagsRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool BatchCreateOrDeleteTagsRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void BatchCreateOrDeleteTagsRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


