

#include "huaweicloud/modelarts/v1/model/ShowLeaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowLeaseRequest::ShowLeaseRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowLeaseRequest::~ShowLeaseRequest() = default;

void ShowLeaseRequest::validate()
{
}

web::json::value ShowLeaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowLeaseRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLeaseRequest::getId() const
{
    return id_;
}

void ShowLeaseRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowLeaseRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowLeaseRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


