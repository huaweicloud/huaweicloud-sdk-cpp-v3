

#include "huaweicloud/modelarts/v1/model/DeleteHyperinstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperinstanceTagsRequest::DeleteHyperinstanceTagsRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteHyperinstanceTagsRequest::~DeleteHyperinstanceTagsRequest() = default;

void DeleteHyperinstanceTagsRequest::validate()
{
}

web::json::value DeleteHyperinstanceTagsRequest::toJson() const
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
bool DeleteHyperinstanceTagsRequest::fromJson(const web::json::value& val)
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


std::string DeleteHyperinstanceTagsRequest::getId() const
{
    return id_;
}

void DeleteHyperinstanceTagsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHyperinstanceTagsRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteHyperinstanceTagsRequest::unsetid()
{
    idIsSet_ = false;
}

TagRequest DeleteHyperinstanceTagsRequest::getBody() const
{
    return body_;
}

void DeleteHyperinstanceTagsRequest::setBody(const TagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHyperinstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHyperinstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


