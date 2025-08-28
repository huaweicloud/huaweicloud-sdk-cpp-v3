

#include "huaweicloud/metastudio/v1/model/InstructionLibraryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InstructionLibraryInfo::InstructionLibraryInfo()
{
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

InstructionLibraryInfo::~InstructionLibraryInfo() = default;

void InstructionLibraryInfo::validate()
{
}

web::json::value InstructionLibraryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool InstructionLibraryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instruction_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionLibraryId(refVal);
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


std::string InstructionLibraryInfo::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void InstructionLibraryInfo::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool InstructionLibraryInfo::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void InstructionLibraryInfo::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string InstructionLibraryInfo::getName() const
{
    return name_;
}

void InstructionLibraryInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstructionLibraryInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InstructionLibraryInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string InstructionLibraryInfo::getCreateTime() const
{
    return createTime_;
}

void InstructionLibraryInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InstructionLibraryInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InstructionLibraryInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InstructionLibraryInfo::getUpdateTime() const
{
    return updateTime_;
}

void InstructionLibraryInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool InstructionLibraryInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void InstructionLibraryInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


