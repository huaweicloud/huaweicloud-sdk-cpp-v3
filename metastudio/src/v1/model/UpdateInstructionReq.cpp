

#include "huaweicloud/metastudio/v1/model/UpdateInstructionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionReq::UpdateInstructionReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instruction_ = "";
    instructionIsSet_ = false;
    slotListIsSet_ = false;
    replyWordsListIsSet_ = false;
}

UpdateInstructionReq::~UpdateInstructionReq() = default;

void UpdateInstructionReq::validate()
{
}

web::json::value UpdateInstructionReq::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool UpdateInstructionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateInstructionReq::getName() const
{
    return name_;
}

void UpdateInstructionReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInstructionReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInstructionReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInstructionReq::getDescription() const
{
    return description_;
}

void UpdateInstructionReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateInstructionReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateInstructionReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateInstructionReq::getInstruction() const
{
    return instruction_;
}

void UpdateInstructionReq::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool UpdateInstructionReq::instructionIsSet() const
{
    return instructionIsSet_;
}

void UpdateInstructionReq::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::vector<InstructionSlotInfo>& UpdateInstructionReq::getSlotList()
{
    return slotList_;
}

void UpdateInstructionReq::setSlotList(const std::vector<InstructionSlotInfo>& value)
{
    slotList_ = value;
    slotListIsSet_ = true;
}

bool UpdateInstructionReq::slotListIsSet() const
{
    return slotListIsSet_;
}

void UpdateInstructionReq::unsetslotList()
{
    slotListIsSet_ = false;
}

std::vector<InstructionReplyWordsInfo>& UpdateInstructionReq::getReplyWordsList()
{
    return replyWordsList_;
}

void UpdateInstructionReq::setReplyWordsList(const std::vector<InstructionReplyWordsInfo>& value)
{
    replyWordsList_ = value;
    replyWordsListIsSet_ = true;
}

bool UpdateInstructionReq::replyWordsListIsSet() const
{
    return replyWordsListIsSet_;
}

void UpdateInstructionReq::unsetreplyWordsList()
{
    replyWordsListIsSet_ = false;
}

}
}
}
}
}


