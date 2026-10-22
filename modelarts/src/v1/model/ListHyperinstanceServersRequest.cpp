

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceServersRequest::ListHyperinstanceServersRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ListHyperinstanceServersRequest::~ListHyperinstanceServersRequest() = default;

void ListHyperinstanceServersRequest::validate()
{
}

web::json::value ListHyperinstanceServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListHyperinstanceServersRequest::fromJson(const web::json::value& val)
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


std::string ListHyperinstanceServersRequest::getId() const
{
    return id_;
}

void ListHyperinstanceServersRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListHyperinstanceServersRequest::idIsSet() const
{
    return idIsSet_;
}

void ListHyperinstanceServersRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


