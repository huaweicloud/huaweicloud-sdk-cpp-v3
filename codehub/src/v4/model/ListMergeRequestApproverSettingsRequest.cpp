

#include "huaweicloud/codehub/v4/model/ListMergeRequestApproverSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestApproverSettingsRequest::ListMergeRequestApproverSettingsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestApproverSettingsRequest::~ListMergeRequestApproverSettingsRequest() = default;

void ListMergeRequestApproverSettingsRequest::validate()
{
}

web::json::value ListMergeRequestApproverSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestApproverSettingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestApproverSettingsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestApproverSettingsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestApproverSettingsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestApproverSettingsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestApproverSettingsRequest::getTargetType() const
{
    return targetType_;
}

void ListMergeRequestApproverSettingsRequest::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ListMergeRequestApproverSettingsRequest::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ListMergeRequestApproverSettingsRequest::unsettargetType()
{
    targetTypeIsSet_ = false;
}

int32_t ListMergeRequestApproverSettingsRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestApproverSettingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestApproverSettingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestApproverSettingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestApproverSettingsRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestApproverSettingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestApproverSettingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestApproverSettingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


