

#include "huaweicloud/smn/v2/model/CreateKmsKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateKmsKeyResponse::CreateKmsKeyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateKmsKeyResponse::~CreateKmsKeyResponse() = default;

void CreateKmsKeyResponse::validate()
{
}

web::json::value CreateKmsKeyResponse::toJson() const
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
bool CreateKmsKeyResponse::fromJson(const web::json::value& val)
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


std::string CreateKmsKeyResponse::getRequestId() const
{
    return requestId_;
}

void CreateKmsKeyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateKmsKeyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateKmsKeyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateKmsKeyResponse::getId() const
{
    return id_;
}

void CreateKmsKeyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateKmsKeyResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateKmsKeyResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


