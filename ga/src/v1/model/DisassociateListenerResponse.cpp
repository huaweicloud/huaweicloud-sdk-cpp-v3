

#include "huaweicloud/ga/v1/model/DisassociateListenerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DisassociateListenerResponse::DisassociateListenerResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DisassociateListenerResponse::~DisassociateListenerResponse() = default;

void DisassociateListenerResponse::validate()
{
}

web::json::value DisassociateListenerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DisassociateListenerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string DisassociateListenerResponse::getRequestId() const
{
    return requestId_;
}

void DisassociateListenerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DisassociateListenerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DisassociateListenerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


