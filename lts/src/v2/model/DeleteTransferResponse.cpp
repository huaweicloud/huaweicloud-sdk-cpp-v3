

#include "huaweicloud/lts/v2/model/DeleteTransferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteTransferResponse::DeleteTransferResponse()
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

DeleteTransferResponse::~DeleteTransferResponse() = default;

void DeleteTransferResponse::validate()
{
}

web::json::value DeleteTransferResponse::toJson() const
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
bool DeleteTransferResponse::fromJson(const web::json::value& val)
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


std::string DeleteTransferResponse::getLogGroupId() const
{
    return logGroupId_;
}

void DeleteTransferResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool DeleteTransferResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void DeleteTransferResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string DeleteTransferResponse::getLogGroupName() const
{
    return logGroupName_;
}

void DeleteTransferResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool DeleteTransferResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void DeleteTransferResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::vector<CreateTransferResponseBody_log_streams>& DeleteTransferResponse::getLogStreams()
{
    return logStreams_;
}

void DeleteTransferResponse::setLogStreams(const std::vector<CreateTransferResponseBody_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool DeleteTransferResponse::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void DeleteTransferResponse::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

std::string DeleteTransferResponse::getLogTransferId() const
{
    return logTransferId_;
}

void DeleteTransferResponse::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool DeleteTransferResponse::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void DeleteTransferResponse::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

CreateTransferResponseBody_log_transfer_info DeleteTransferResponse::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void DeleteTransferResponse::setLogTransferInfo(const CreateTransferResponseBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool DeleteTransferResponse::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void DeleteTransferResponse::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

}
}
}
}
}


