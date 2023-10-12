

#include "huaweicloud/lts/v2/model/CreateTransferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferResponse::CreateTransferResponse()
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

CreateTransferResponse::~CreateTransferResponse() = default;

void CreateTransferResponse::validate()
{
}

web::json::value CreateTransferResponse::toJson() const
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
bool CreateTransferResponse::fromJson(const web::json::value& val)
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


std::string CreateTransferResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreateTransferResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateTransferResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateTransferResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateTransferResponse::getLogGroupName() const
{
    return logGroupName_;
}

void CreateTransferResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool CreateTransferResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void CreateTransferResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::vector<CreateTransferResponseBody_log_streams>& CreateTransferResponse::getLogStreams()
{
    return logStreams_;
}

void CreateTransferResponse::setLogStreams(const std::vector<CreateTransferResponseBody_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool CreateTransferResponse::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void CreateTransferResponse::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

std::string CreateTransferResponse::getLogTransferId() const
{
    return logTransferId_;
}

void CreateTransferResponse::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool CreateTransferResponse::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void CreateTransferResponse::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

CreateTransferResponseBody_log_transfer_info CreateTransferResponse::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void CreateTransferResponse::setLogTransferInfo(const CreateTransferResponseBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool CreateTransferResponse::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void CreateTransferResponse::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

}
}
}
}
}


