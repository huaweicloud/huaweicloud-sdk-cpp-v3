

#include "huaweicloud/modelarts/v1/model/UpdateNotebookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateNotebookRequest::UpdateNotebookRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNotebookRequest::~UpdateNotebookRequest() = default;

void UpdateNotebookRequest::validate()
{
}

web::json::value UpdateNotebookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNotebookRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NotebookUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNotebookRequest::getId() const
{
    return id_;
}

void UpdateNotebookRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateNotebookRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateNotebookRequest::unsetid()
{
    idIsSet_ = false;
}

NotebookUpdateRequest UpdateNotebookRequest::getBody() const
{
    return body_;
}

void UpdateNotebookRequest::setBody(const NotebookUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNotebookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNotebookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


