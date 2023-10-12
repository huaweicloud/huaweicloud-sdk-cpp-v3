

#include "huaweicloud/lts/v2/model/ListTransfersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTransfersResponse::ListTransfersResponse()
{
    logTransfersIsSet_ = false;
}

ListTransfersResponse::~ListTransfersResponse() = default;

void ListTransfersResponse::validate()
{
}

web::json::value ListTransfersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTransfersIsSet_) {
        val[utility::conversions::to_string_t("log_transfers")] = ModelBase::toJson(logTransfers_);
    }

    return val;
}
bool ListTransfersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_transfers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfers"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTransferResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransfers(refVal);
        }
    }
    return ok;
}


std::vector<CreateTransferResponseBody>& ListTransfersResponse::getLogTransfers()
{
    return logTransfers_;
}

void ListTransfersResponse::setLogTransfers(const std::vector<CreateTransferResponseBody>& value)
{
    logTransfers_ = value;
    logTransfersIsSet_ = true;
}

bool ListTransfersResponse::logTransfersIsSet() const
{
    return logTransfersIsSet_;
}

void ListTransfersResponse::unsetlogTransfers()
{
    logTransfersIsSet_ = false;
}

}
}
}
}
}


