

#include "huaweicloud/metastudio/v1/model/ShowInstructionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInstructionResponse::ShowInstructionResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowInstructionResponse::~ShowInstructionResponse() = default;

void ShowInstructionResponse::validate()
{
}

web::json::value ShowInstructionResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowInstructionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowInstructionResponse::getInstructionId() const
{
    return instructionId_;
}

void ShowInstructionResponse::setInstructionId(const std::string& value)
{
    instructionId_ = value;
    instructionIdIsSet_ = true;
}

bool ShowInstructionResponse::instructionIdIsSet() const
{
    return instructionIdIsSet_;
}

void ShowInstructionResponse::unsetinstructionId()
{
    instructionIdIsSet_ = false;
}

std::string ShowInstructionResponse::getName() const
{
    return name_;
}

void ShowInstructionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInstructionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInstructionResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowInstructionResponse::getDescription() const
{
    return description_;
}

void ShowInstructionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowInstructionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowInstructionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowInstructionResponse::getInstruction() const
{
    return instruction_;
}

void ShowInstructionResponse::setInstruction(const std::string& value)
{
    instruction_ = value;
    instructionIsSet_ = true;
}

bool ShowInstructionResponse::instructionIsSet() const
{
    return instructionIsSet_;
}

void ShowInstructionResponse::unsetinstruction()
{
    instructionIsSet_ = false;
}

std::vector<InstructionSlotInfo>& ShowInstructionResponse::getSlotList()
{
    return slotList_;
}

void ShowInstructionResponse::setSlotList(const std::vector<InstructionSlotInfo>& value)
{
    slotList_ = value;
    slotListIsSet_ = true;
}

bool ShowInstructionResponse::slotListIsSet() const
{
    return slotListIsSet_;
}

void ShowInstructionResponse::unsetslotList()
{
    slotListIsSet_ = false;
}

std::vector<InstructionReplyWordsInfo>& ShowInstructionResponse::getReplyWordsList()
{
    return replyWordsList_;
}

void ShowInstructionResponse::setReplyWordsList(const std::vector<InstructionReplyWordsInfo>& value)
{
    replyWordsList_ = value;
    replyWordsListIsSet_ = true;
}

bool ShowInstructionResponse::replyWordsListIsSet() const
{
    return replyWordsListIsSet_;
}

void ShowInstructionResponse::unsetreplyWordsList()
{
    replyWordsListIsSet_ = false;
}

std::string ShowInstructionResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstructionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstructionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstructionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInstructionResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowInstructionResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowInstructionResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowInstructionResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowInstructionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowInstructionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowInstructionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowInstructionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


