

#include "huaweicloud/metastudio/v1/model/InstructionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InstructionInfo::InstructionInfo()
{
    instructionId_ = "";
    instructionIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instruction_ = "";
    instructionIsSet_ = false;
    slotListIsSet_ = false;
    replyWordsListIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

InstructionInfo::~InstructionInfo() = default;

void InstructionInfo::validate()
{
}

web::json::value InstructionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instructionIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_id")] = ModelBase::toJson(instructionId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instructionIsSet_) {
        val[utility::conversions::to_string_t("instruction")] = ModelBase::toJson(instruction_);
    }
    if(slotListIsSet_) {
        val[utility::conversions::to_string_t("slot_list")] = ModelBase::toJson(slotList_);
    }
    if(replyWordsListIsSet_) {
        val[utility::conversions::to_string_t("reply_words_list")] = ModelBase::toJson(replyWordsList_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool InstructionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instruction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instruction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstruction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slot_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slot_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InstructionSlotInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlotList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_words_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_words_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InstructionReplyWordsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyWordsList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string InstructionInfo::getInstructionId() const
{
    return instructionId_;
}

void InstructionInfo::setInstructionId(const std::string& value)
{
    instructionId_ = value;
    instructionIdIsSet_ = true;
}

bool InstructionInfo::instructionIdIsSet() const
{
    return instructionIdIsSet_;
}

void InstructionInfo::unsetinstructionId()
{
    instructionIdIsSet_ = false;
}

std::string InstructionInfo::getName() const
{
    return name_;
}

void InstructionInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstructionInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InstructionInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string InstructionInfo::getDescription() const
{
    return description_;
}

void InstructionInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InstructionInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InstructionInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string InstructionInfo::getInstruction() const
{
    return instruction_;
}

void InstructionInfo::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool InstructionInfo::instructionIsSet() const
{
    return instructionIsSet_;
}

void InstructionInfo::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::vector<InstructionSlotInfo>& InstructionInfo::getSlotList()
{
    return slotList_;
}

void InstructionInfo::setSlotList(const std::vector<InstructionSlotInfo>& value)
{
    slotList_ = value;
    slotListIsSet_ = true;
}

bool InstructionInfo::slotListIsSet() const
{
    return slotListIsSet_;
}

void InstructionInfo::unsetslotList()
{
    slotListIsSet_ = false;
}

std::vector<InstructionReplyWordsInfo>& InstructionInfo::getReplyWordsList()
{
    return replyWordsList_;
}

void InstructionInfo::setReplyWordsList(const std::vector<InstructionReplyWordsInfo>& value)
{
    replyWordsList_ = value;
    replyWordsListIsSet_ = true;
}

bool InstructionInfo::replyWordsListIsSet() const
{
    return replyWordsListIsSet_;
}

void InstructionInfo::unsetreplyWordsList()
{
    replyWordsListIsSet_ = false;
}

std::string InstructionInfo::getCreateTime() const
{
    return createTime_;
}

void InstructionInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InstructionInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InstructionInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InstructionInfo::getUpdateTime() const
{
    return updateTime_;
}

void InstructionInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool InstructionInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void InstructionInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


