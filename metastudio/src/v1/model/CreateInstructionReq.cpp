

#include "huaweicloud/metastudio/v1/model/CreateInstructionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionReq::CreateInstructionReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instruction_ = "";
    instructionIsSet_ = false;
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    slotListIsSet_ = false;
    replyWordsListIsSet_ = false;
}

CreateInstructionReq::~CreateInstructionReq() = default;

void CreateInstructionReq::validate()
{
}

web::json::value CreateInstructionReq::toJson() const
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
    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }
    if(slotListIsSet_) {
        val[utility::conversions::to_string_t("slot_list")] = ModelBase::toJson(slotList_);
    }
    if(replyWordsListIsSet_) {
        val[utility::conversions::to_string_t("reply_words_list")] = ModelBase::toJson(replyWordsList_);
    }

    return val;
}
bool CreateInstructionReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instruction_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionLibraryId(refVal);
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


std::string CreateInstructionReq::getName() const
{
    return name_;
}

void CreateInstructionReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstructionReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstructionReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateInstructionReq::getDescription() const
{
    return description_;
}

void CreateInstructionReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateInstructionReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateInstructionReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateInstructionReq::getInstruction() const
{
    return instruction_;
}

void CreateInstructionReq::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool CreateInstructionReq::instructionIsSet() const
{
    return instructionIsSet_;
}

void CreateInstructionReq::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::string CreateInstructionReq::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void CreateInstructionReq::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool CreateInstructionReq::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void CreateInstructionReq::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::vector<InstructionSlotInfo>& CreateInstructionReq::getSlotList()
{
    return slotList_;
}

void CreateInstructionReq::setSlotList(const std::vector<InstructionSlotInfo>& value)
{
    slotList_ = value;
    slotListIsSet_ = true;
}

bool CreateInstructionReq::slotListIsSet() const
{
    return slotListIsSet_;
}

void CreateInstructionReq::unsetslotList()
{
    slotListIsSet_ = false;
}

std::vector<InstructionReplyWordsInfo>& CreateInstructionReq::getReplyWordsList()
{
    return replyWordsList_;
}

void CreateInstructionReq::setReplyWordsList(const std::vector<InstructionReplyWordsInfo>& value)
{
    replyWordsList_ = value;
    replyWordsListIsSet_ = true;
}

bool CreateInstructionReq::replyWordsListIsSet() const
{
    return replyWordsListIsSet_;
}

void CreateInstructionReq::unsetreplyWordsList()
{
    replyWordsListIsSet_ = false;
}

}
}
}
}
}


