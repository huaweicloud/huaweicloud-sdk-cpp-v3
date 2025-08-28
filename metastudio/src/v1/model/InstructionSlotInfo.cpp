

#include "huaweicloud/metastudio/v1/model/InstructionSlotInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InstructionSlotInfo::InstructionSlotInfo()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    knowledgeLibraryListIsSet_ = false;
}

InstructionSlotInfo::~InstructionSlotInfo() = default;

void InstructionSlotInfo::validate()
{
}

web::json::value InstructionSlotInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(knowledgeLibraryListIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_list")] = ModelBase::toJson(knowledgeLibraryList_);
    }

    return val;
}
bool InstructionSlotInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SlotKnowledgeLibraryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryList(refVal);
        }
    }
    return ok;
}


std::string InstructionSlotInfo::getName() const
{
    return name_;
}

void InstructionSlotInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstructionSlotInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InstructionSlotInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string InstructionSlotInfo::getDescription() const
{
    return description_;
}

void InstructionSlotInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InstructionSlotInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InstructionSlotInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<SlotKnowledgeLibraryInfo>& InstructionSlotInfo::getKnowledgeLibraryList()
{
    return knowledgeLibraryList_;
}

void InstructionSlotInfo::setKnowledgeLibraryList(const std::vector<SlotKnowledgeLibraryInfo>& value)
{
    knowledgeLibraryList_ = value;
    knowledgeLibraryListIsSet_ = true;
}

bool InstructionSlotInfo::knowledgeLibraryListIsSet() const
{
    return knowledgeLibraryListIsSet_;
}

void InstructionSlotInfo::unsetknowledgeLibraryList()
{
    knowledgeLibraryListIsSet_ = false;
}

}
}
}
}
}


