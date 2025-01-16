

#include "huaweicloud/smn/v2/model/CreateNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateNotifyPolicyResponse::CreateNotifyPolicyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateNotifyPolicyResponse::~CreateNotifyPolicyResponse() = default;

void CreateNotifyPolicyResponse::validate()
{
}

web::json::value CreateNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateNotifyPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string CreateNotifyPolicyResponse::getRequestId() const
{
    return requestId_;
}

void CreateNotifyPolicyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateNotifyPolicyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateNotifyPolicyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateNotifyPolicyResponse::getId() const
{
    return id_;
}

void CreateNotifyPolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateNotifyPolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateNotifyPolicyResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


