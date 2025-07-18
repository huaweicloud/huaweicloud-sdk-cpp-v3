

#include "huaweicloud/lts/v2/model/ListTransfersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTransfersRequest::ListTransfersRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    logTransferType_ = "";
    logTransferTypeIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

ListTransfersRequest::~ListTransfersRequest() = default;

void ListTransfersRequest::validate()
{
}

web::json::value ListTransfersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(logTransferTypeIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_type")] = ModelBase::toJson(logTransferType_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool ListTransfersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


std::string ListTransfersRequest::getContentType() const
{
    return contentType_;
}

void ListTransfersRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListTransfersRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListTransfersRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListTransfersRequest::getLogTransferType() const
{
    return logTransferType_;
}

void ListTransfersRequest::setLogTransferType(const std::string& value)
{
    logTransferType_ = value;
    logTransferTypeIsSet_ = true;
}

bool ListTransfersRequest::logTransferTypeIsSet() const
{
    return logTransferTypeIsSet_;
}

void ListTransfersRequest::unsetlogTransferType()
{
    logTransferTypeIsSet_ = false;
}

std::string ListTransfersRequest::getLogGroupName() const
{
    return logGroupName_;
}

void ListTransfersRequest::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool ListTransfersRequest::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void ListTransfersRequest::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string ListTransfersRequest::getLogStreamName() const
{
    return logStreamName_;
}

void ListTransfersRequest::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool ListTransfersRequest::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void ListTransfersRequest::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


