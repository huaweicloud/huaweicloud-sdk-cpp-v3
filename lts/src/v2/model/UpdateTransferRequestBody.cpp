

#include "huaweicloud/lts/v2/model/UpdateTransferRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateTransferRequestBody::UpdateTransferRequestBody()
{
    logTransferId_ = "";
    logTransferIdIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logTransferInfoIsSet_ = false;
    logStreamsIsSet_ = false;
}

UpdateTransferRequestBody::~UpdateTransferRequestBody() = default;

void UpdateTransferRequestBody::validate()
{
}

web::json::value UpdateTransferRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTransferIdIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_id")] = ModelBase::toJson(logTransferId_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logTransferInfoIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_info")] = ModelBase::toJson(logTransferInfo_);
    }
    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }

    return val;
}
bool UpdateTransferRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_info"));
        if(!fieldValue.is_null())
        {
            UpdateTransferRequestBody_log_transfer_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<LogStreams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    return ok;
}


std::string UpdateTransferRequestBody::getLogTransferId() const
{
    return logTransferId_;
}

void UpdateTransferRequestBody::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool UpdateTransferRequestBody::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void UpdateTransferRequestBody::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

std::string UpdateTransferRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateTransferRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateTransferRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateTransferRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

UpdateTransferRequestBody_log_transfer_info UpdateTransferRequestBody::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void UpdateTransferRequestBody::setLogTransferInfo(const UpdateTransferRequestBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool UpdateTransferRequestBody::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void UpdateTransferRequestBody::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

std::vector<LogStreams>& UpdateTransferRequestBody::getLogStreams()
{
    return logStreams_;
}

void UpdateTransferRequestBody::setLogStreams(const std::vector<LogStreams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool UpdateTransferRequestBody::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void UpdateTransferRequestBody::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

}
}
}
}
}


