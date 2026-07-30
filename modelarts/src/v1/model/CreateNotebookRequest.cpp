

#include "huaweicloud/modelarts/v1/model/CreateNotebookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNotebookRequest::CreateNotebookRequest()
{
    bodyIsSet_ = false;
}

CreateNotebookRequest::~CreateNotebookRequest() = default;

void CreateNotebookRequest::validate()
{
}

web::json::value CreateNotebookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateNotebookRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NotebookCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NotebookCreateRequest CreateNotebookRequest::getBody() const
{
    return body_;
}

void CreateNotebookRequest::setBody(const NotebookCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNotebookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNotebookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


