

#include "huaweicloud/metastudio/v1/model/ListInsertCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInsertCommandsRequest::ListInsertCommandsRequest()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
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
}

ListInsertCommandsRequest::~ListInsertCommandsRequest() = default;

void ListInsertCommandsRequest::validate()
{
}

web::json::value ListInsertCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
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

    return val;
}
bool ListInsertCommandsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
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
    return ok;
}


std::string ListInsertCommandsRequest::getRoomId() const
{
    return roomId_;
}

void ListInsertCommandsRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ListInsertCommandsRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ListInsertCommandsRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ListInsertCommandsRequest::getJobId() const
{
    return jobId_;
}

void ListInsertCommandsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListInsertCommandsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListInsertCommandsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListInsertCommandsRequest::getAuthorization() const
{
    return authorization_;
}

void ListInsertCommandsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListInsertCommandsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListInsertCommandsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListInsertCommandsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListInsertCommandsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListInsertCommandsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListInsertCommandsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListInsertCommandsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListInsertCommandsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListInsertCommandsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListInsertCommandsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListInsertCommandsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListInsertCommandsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListInsertCommandsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListInsertCommandsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListInsertCommandsRequest::getOffset() const
{
    return offset_;
}

void ListInsertCommandsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInsertCommandsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInsertCommandsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInsertCommandsRequest::getLimit() const
{
    return limit_;
}

void ListInsertCommandsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInsertCommandsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInsertCommandsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


