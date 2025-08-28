

#include "huaweicloud/metastudio/v1/model/ListInstructionLibraryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInstructionLibraryRequest::ListInstructionLibraryRequest()
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
    name_ = "";
    nameIsSet_ = false;
}

ListInstructionLibraryRequest::~ListInstructionLibraryRequest() = default;

void ListInstructionLibraryRequest::validate()
{
}

web::json::value ListInstructionLibraryRequest::toJson() const
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
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListInstructionLibraryRequest::fromJson(const web::json::value& val)
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


std::string ListInstructionLibraryRequest::getAuthorization() const
{
    return authorization_;
}

void ListInstructionLibraryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListInstructionLibraryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListInstructionLibraryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListInstructionLibraryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListInstructionLibraryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListInstructionLibraryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListInstructionLibraryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListInstructionLibraryRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListInstructionLibraryRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListInstructionLibraryRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListInstructionLibraryRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListInstructionLibraryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListInstructionLibraryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListInstructionLibraryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListInstructionLibraryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListInstructionLibraryRequest::getOffset() const
{
    return offset_;
}

void ListInstructionLibraryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstructionLibraryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstructionLibraryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstructionLibraryRequest::getLimit() const
{
    return limit_;
}

void ListInstructionLibraryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstructionLibraryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstructionLibraryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstructionLibraryRequest::getName() const
{
    return name_;
}

void ListInstructionLibraryRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstructionLibraryRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstructionLibraryRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


