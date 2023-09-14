

#include "huaweicloud/smn/v2/model/CreateLogtankResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateLogtankResponse::CreateLogtankResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateLogtankResponse::~CreateLogtankResponse() = default;

void CreateLogtankResponse::validate()
{
}

web::json::value CreateLogtankResponse::toJson() const
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

bool CreateLogtankResponse::fromJson(const web::json::value& val)
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

std::string CreateLogtankResponse::getRequestId() const
{
    return requestId_;
}

void CreateLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateLogtankResponse::getId() const
{
    return id_;
}

void CreateLogtankResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateLogtankResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateLogtankResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


