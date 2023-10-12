

#include "huaweicloud/lts/v2/model/DeleteTransferRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteTransferRequest::DeleteTransferRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    logTransferId_ = "";
    logTransferIdIsSet_ = false;
}

DeleteTransferRequest::~DeleteTransferRequest() = default;

void DeleteTransferRequest::validate()
{
}

web::json::value DeleteTransferRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(logTransferIdIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_id")] = ModelBase::toJson(logTransferId_);
    }

    return val;
}
bool DeleteTransferRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferId(refVal);
        }
    }
    return ok;
}


std::string DeleteTransferRequest::getContentType() const
{
    return contentType_;
}

void DeleteTransferRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteTransferRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteTransferRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string DeleteTransferRequest::getLogTransferId() const
{
    return logTransferId_;
}

void DeleteTransferRequest::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool DeleteTransferRequest::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void DeleteTransferRequest::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

}
}
}
}
}


