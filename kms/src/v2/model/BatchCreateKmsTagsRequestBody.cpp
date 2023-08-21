

#include "huaweicloud/kms/v2/model/BatchCreateKmsTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




BatchCreateKmsTagsRequestBody::BatchCreateKmsTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

BatchCreateKmsTagsRequestBody::~BatchCreateKmsTagsRequestBody() = default;

void BatchCreateKmsTagsRequestBody::validate()
{
}

web::json::value BatchCreateKmsTagsRequestBody::toJson() const
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

bool BatchCreateKmsTagsRequestBody::fromJson(const web::json::value& val)
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

std::vector<TagItem>& BatchCreateKmsTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateKmsTagsRequestBody::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateKmsTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateKmsTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateKmsTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateKmsTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateKmsTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateKmsTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string BatchCreateKmsTagsRequestBody::getSequence() const
{
    return sequence_;
}

void BatchCreateKmsTagsRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool BatchCreateKmsTagsRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void BatchCreateKmsTagsRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


