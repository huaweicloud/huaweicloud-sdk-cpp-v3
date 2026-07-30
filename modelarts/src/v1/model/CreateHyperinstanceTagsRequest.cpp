

#include "huaweicloud/modelarts/v1/model/CreateHyperinstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHyperinstanceTagsRequest::CreateHyperinstanceTagsRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

CreateHyperinstanceTagsRequest::~CreateHyperinstanceTagsRequest() = default;

void CreateHyperinstanceTagsRequest::validate()
{
}

web::json::value CreateHyperinstanceTagsRequest::toJson() const
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
bool CreateHyperinstanceTagsRequest::fromJson(const web::json::value& val)
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
            TagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateHyperinstanceTagsRequest::getId() const
{
    return id_;
}

void CreateHyperinstanceTagsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHyperinstanceTagsRequest::idIsSet() const
{
    return idIsSet_;
}

void CreateHyperinstanceTagsRequest::unsetid()
{
    idIsSet_ = false;
}

TagRequest CreateHyperinstanceTagsRequest::getBody() const
{
    return body_;
}

void CreateHyperinstanceTagsRequest::setBody(const TagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHyperinstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHyperinstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


