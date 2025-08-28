

#include "huaweicloud/metastudio/v1/model/ShowInstructionLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowInstructionLibraryResponse::ShowInstructionLibraryResponse()
{
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowInstructionLibraryResponse::~ShowInstructionLibraryResponse() = default;

void ShowInstructionLibraryResponse::validate()
{
}

web::json::value ShowInstructionLibraryResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowInstructionLibraryResponse::fromJson(const web::json::value& val)
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


std::string ShowInstructionLibraryResponse::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void ShowInstructionLibraryResponse::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool ShowInstructionLibraryResponse::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void ShowInstructionLibraryResponse::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string ShowInstructionLibraryResponse::getName() const
{
    return name_;
}

void ShowInstructionLibraryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInstructionLibraryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInstructionLibraryResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowInstructionLibraryResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstructionLibraryResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstructionLibraryResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstructionLibraryResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInstructionLibraryResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowInstructionLibraryResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowInstructionLibraryResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowInstructionLibraryResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowInstructionLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowInstructionLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowInstructionLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowInstructionLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


