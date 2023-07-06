

#include "huaweicloud/drs/v5/model/CollectDbObjectsAsyncResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDbObjectsAsyncResponse::CollectDbObjectsAsyncResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CollectDbObjectsAsyncResponse::~CollectDbObjectsAsyncResponse() = default;

void CollectDbObjectsAsyncResponse::validate()
{
}

web::json::value CollectDbObjectsAsyncResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool CollectDbObjectsAsyncResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string CollectDbObjectsAsyncResponse::getId() const
{
    return id_;
}

void CollectDbObjectsAsyncResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CollectDbObjectsAsyncResponse::idIsSet() const
{
    return idIsSet_;
}

void CollectDbObjectsAsyncResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CollectDbObjectsAsyncResponse::getStatus() const
{
    return status_;
}

void CollectDbObjectsAsyncResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectDbObjectsAsyncResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectDbObjectsAsyncResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


