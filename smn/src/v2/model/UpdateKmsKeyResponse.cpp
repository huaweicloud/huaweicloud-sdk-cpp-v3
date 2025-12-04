

#include "huaweicloud/smn/v2/model/UpdateKmsKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateKmsKeyResponse::UpdateKmsKeyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateKmsKeyResponse::~UpdateKmsKeyResponse() = default;

void UpdateKmsKeyResponse::validate()
{
}

web::json::value UpdateKmsKeyResponse::toJson() const
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
bool UpdateKmsKeyResponse::fromJson(const web::json::value& val)
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


std::string UpdateKmsKeyResponse::getRequestId() const
{
    return requestId_;
}

void UpdateKmsKeyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateKmsKeyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateKmsKeyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateKmsKeyResponse::getId() const
{
    return id_;
}

void UpdateKmsKeyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateKmsKeyResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateKmsKeyResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


