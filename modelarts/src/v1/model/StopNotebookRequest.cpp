

#include "huaweicloud/modelarts/v1/model/StopNotebookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopNotebookRequest::StopNotebookRequest()
{
    id_ = "";
    idIsSet_ = false;
}

StopNotebookRequest::~StopNotebookRequest() = default;

void StopNotebookRequest::validate()
{
}

web::json::value StopNotebookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool StopNotebookRequest::fromJson(const web::json::value& val)
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


std::string StopNotebookRequest::getId() const
{
    return id_;
}

void StopNotebookRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StopNotebookRequest::idIsSet() const
{
    return idIsSet_;
}

void StopNotebookRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


