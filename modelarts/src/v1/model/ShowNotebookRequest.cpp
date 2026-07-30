

#include "huaweicloud/modelarts/v1/model/ShowNotebookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNotebookRequest::ShowNotebookRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowNotebookRequest::~ShowNotebookRequest() = default;

void ShowNotebookRequest::validate()
{
}

web::json::value ShowNotebookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowNotebookRequest::fromJson(const web::json::value& val)
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


std::string ShowNotebookRequest::getId() const
{
    return id_;
}

void ShowNotebookRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowNotebookRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowNotebookRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


