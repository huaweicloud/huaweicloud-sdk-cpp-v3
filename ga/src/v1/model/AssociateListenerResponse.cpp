

#include "huaweicloud/ga/v1/model/AssociateListenerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AssociateListenerResponse::AssociateListenerResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

AssociateListenerResponse::~AssociateListenerResponse() = default;

void AssociateListenerResponse::validate()
{
}

web::json::value AssociateListenerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool AssociateListenerResponse::fromJson(const web::json::value& val)
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


std::string AssociateListenerResponse::getRequestId() const
{
    return requestId_;
}

void AssociateListenerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AssociateListenerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AssociateListenerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


