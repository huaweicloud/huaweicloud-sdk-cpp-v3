

#include "huaweicloud/codeartsrepo/v4/model/PushEventPayloadDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PushEventPayloadDto::PushEventPayloadDto()
{
    commitCount_ = 0;
    commitCountIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    refType_ = "";
    refTypeIsSet_ = false;
    commitFrom_ = "";
    commitFromIsSet_ = false;
    commitTo_ = "";
    commitToIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    commitTitle_ = "";
    commitTitleIsSet_ = false;
}

PushEventPayloadDto::~PushEventPayloadDto() = default;

void PushEventPayloadDto::validate()
{
}

web::json::value PushEventPayloadDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commit_count")] = ModelBase::toJson(commitCount_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(refTypeIsSet_) {
        val[utility::conversions::to_string_t("ref_type")] = ModelBase::toJson(refType_);
    }
    if(commitFromIsSet_) {
        val[utility::conversions::to_string_t("commit_from")] = ModelBase::toJson(commitFrom_);
    }
    if(commitToIsSet_) {
        val[utility::conversions::to_string_t("commit_to")] = ModelBase::toJson(commitTo_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(commitTitleIsSet_) {
        val[utility::conversions::to_string_t("commit_title")] = ModelBase::toJson(commitTitle_);
    }

    return val;
}
bool PushEventPayloadDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ref_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitTitle(refVal);
        }
    }
    return ok;
}


int32_t PushEventPayloadDto::getCommitCount() const
{
    return commitCount_;
}

void PushEventPayloadDto::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool PushEventPayloadDto::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void PushEventPayloadDto::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

std::string PushEventPayloadDto::getAction() const
{
    return action_;
}

void PushEventPayloadDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool PushEventPayloadDto::actionIsSet() const
{
    return actionIsSet_;
}

void PushEventPayloadDto::unsetaction()
{
    actionIsSet_ = false;
}

std::string PushEventPayloadDto::getRefType() const
{
    return refType_;
}

void PushEventPayloadDto::setRefType(const std::string& value)
{
    refType_ = value;
    refTypeIsSet_ = true;
}

bool PushEventPayloadDto::refTypeIsSet() const
{
    return refTypeIsSet_;
}

void PushEventPayloadDto::unsetrefType()
{
    refTypeIsSet_ = false;
}

std::string PushEventPayloadDto::getCommitFrom() const
{
    return commitFrom_;
}

void PushEventPayloadDto::setCommitFrom(const std::string& value)
{
    commitFrom_ = value;
    commitFromIsSet_ = true;
}

bool PushEventPayloadDto::commitFromIsSet() const
{
    return commitFromIsSet_;
}

void PushEventPayloadDto::unsetcommitFrom()
{
    commitFromIsSet_ = false;
}

std::string PushEventPayloadDto::getCommitTo() const
{
    return commitTo_;
}

void PushEventPayloadDto::setCommitTo(const std::string& value)
{
    commitTo_ = value;
    commitToIsSet_ = true;
}

bool PushEventPayloadDto::commitToIsSet() const
{
    return commitToIsSet_;
}

void PushEventPayloadDto::unsetcommitTo()
{
    commitToIsSet_ = false;
}

std::string PushEventPayloadDto::getRef() const
{
    return ref_;
}

void PushEventPayloadDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool PushEventPayloadDto::refIsSet() const
{
    return refIsSet_;
}

void PushEventPayloadDto::unsetref()
{
    refIsSet_ = false;
}

std::string PushEventPayloadDto::getCommitTitle() const
{
    return commitTitle_;
}

void PushEventPayloadDto::setCommitTitle(const std::string& value)
{
    commitTitle_ = value;
    commitTitleIsSet_ = true;
}

bool PushEventPayloadDto::commitTitleIsSet() const
{
    return commitTitleIsSet_;
}

void PushEventPayloadDto::unsetcommitTitle()
{
    commitTitleIsSet_ = false;
}

}
}
}
}
}


