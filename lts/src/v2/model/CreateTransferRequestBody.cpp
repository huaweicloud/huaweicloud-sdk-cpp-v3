

#include "huaweicloud/lts/v2/model/CreateTransferRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferRequestBody::CreateTransferRequestBody()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamsIsSet_ = false;
    logTransferInfoIsSet_ = false;
}

CreateTransferRequestBody::~CreateTransferRequestBody() = default;

void CreateTransferRequestBody::validate()
{
}

web::json::value CreateTransferRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamsIsSet_) {
        val[utility::conversions::to_string_t("log_streams")] = ModelBase::toJson(logStreams_);
    }
    if(logTransferInfoIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_info")] = ModelBase::toJson(logTransferInfo_);
    }

    return val;
}
bool CreateTransferRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_streams"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTransferRequestBody_log_streams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_info"));
        if(!fieldValue.is_null())
        {
            CreateTransferRequestBody_log_transfer_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferInfo(refVal);
        }
    }
    return ok;
}


std::string CreateTransferRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void CreateTransferRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateTransferRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateTransferRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::vector<CreateTransferRequestBody_log_streams>& CreateTransferRequestBody::getLogStreams()
{
    return logStreams_;
}

void CreateTransferRequestBody::setLogStreams(const std::vector<CreateTransferRequestBody_log_streams>& value)
{
    logStreams_ = value;
    logStreamsIsSet_ = true;
}

bool CreateTransferRequestBody::logStreamsIsSet() const
{
    return logStreamsIsSet_;
}

void CreateTransferRequestBody::unsetlogStreams()
{
    logStreamsIsSet_ = false;
}

CreateTransferRequestBody_log_transfer_info CreateTransferRequestBody::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void CreateTransferRequestBody::setLogTransferInfo(const CreateTransferRequestBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool CreateTransferRequestBody::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void CreateTransferRequestBody::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

}
}
}
}
}


