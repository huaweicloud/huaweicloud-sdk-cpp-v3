

#include "huaweicloud/lts/v2/model/UpdateTransferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateTransferResponse::UpdateTransferResponse()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamsIsSet_ = false;
    logTransferId_ = "";
    logTransferIdIsSet_ = false;
    logTransferInfoIsSet_ = false;
}

UpdateTransferResponse::~UpdateTransferResponse() = default;

void UpdateTransferResponse::validate()
{
}

web::json::value UpdateTransferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }
    if(logTransferIdIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_id")] = ModelBase::toJson(logTransferId_);
    }
    if(logTransferInfoIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_info")] = ModelBase::toJson(logTransferInfo_);
    }

    return val;
}
bool UpdateTransferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTransferResponseBody_log_streams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_info"));
        if(!fieldValue.is_null())
        {
            CreateTransferResponseBody_log_transfer_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferInfo(refVal);
        }
    }
    return ok;
}


std::string UpdateTransferResponse::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateTransferResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateTransferResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateTransferResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateTransferResponse::getLogGroupName() const
{
    return logGroupName_;
}

void UpdateTransferResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool UpdateTransferResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void UpdateTransferResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::vector<CreateTransferResponseBody_log_streams>& UpdateTransferResponse::getLogStreams()
{
    return logStreams_;
}

void UpdateTransferResponse::setLogStreams(const std::vector<CreateTransferResponseBody_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool UpdateTransferResponse::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void UpdateTransferResponse::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

std::string UpdateTransferResponse::getLogTransferId() const
{
    return logTransferId_;
}

void UpdateTransferResponse::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool UpdateTransferResponse::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void UpdateTransferResponse::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

CreateTransferResponseBody_log_transfer_info UpdateTransferResponse::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void UpdateTransferResponse::setLogTransferInfo(const CreateTransferResponseBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool UpdateTransferResponse::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void UpdateTransferResponse::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

}
}
}
}
}


