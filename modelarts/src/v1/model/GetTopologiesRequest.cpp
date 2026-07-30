

#include "huaweicloud/modelarts/v1/model/GetTopologiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetTopologiesRequest::GetTopologiesRequest()
{
    id_ = "";
    idIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

GetTopologiesRequest::~GetTopologiesRequest() = default;

void GetTopologiesRequest::validate()
{
}

web::json::value GetTopologiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool GetTopologiesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string GetTopologiesRequest::getId() const
{
    return id_;
}

void GetTopologiesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetTopologiesRequest::idIsSet() const
{
    return idIsSet_;
}

void GetTopologiesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string GetTopologiesRequest::getResourceId() const
{
    return resourceId_;
}

void GetTopologiesRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool GetTopologiesRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void GetTopologiesRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


