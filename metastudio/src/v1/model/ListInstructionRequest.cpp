

#include "huaweicloud/metastudio/v1/model/ListInstructionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInstructionRequest::ListInstructionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListInstructionRequest::~ListInstructionRequest() = default;

void ListInstructionRequest::validate()
{
}

web::json::value ListInstructionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListInstructionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    return ok;
}


std::string ListInstructionRequest::getAuthorization() const
{
    return authorization_;
}

void ListInstructionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListInstructionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListInstructionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListInstructionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListInstructionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListInstructionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListInstructionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListInstructionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListInstructionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListInstructionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListInstructionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListInstructionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListInstructionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListInstructionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListInstructionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListInstructionRequest::getOffset() const
{
    return offset_;
}

void ListInstructionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstructionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstructionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstructionRequest::getLimit() const
{
    return limit_;
}

void ListInstructionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstructionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstructionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstructionRequest::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void ListInstructionRequest::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool ListInstructionRequest::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void ListInstructionRequest::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string ListInstructionRequest::getName() const
{
    return name_;
}

void ListInstructionRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstructionRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstructionRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


