

#include "huaweicloud/modelarts/v1/model/QueryHyperinstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




QueryHyperinstanceTagsRequest::QueryHyperinstanceTagsRequest()
{
    id_ = "";
    idIsSet_ = false;
}

QueryHyperinstanceTagsRequest::~QueryHyperinstanceTagsRequest() = default;

void QueryHyperinstanceTagsRequest::validate()
{
}

web::json::value QueryHyperinstanceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool QueryHyperinstanceTagsRequest::fromJson(const web::json::value& val)
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


std::string QueryHyperinstanceTagsRequest::getId() const
{
    return id_;
}

void QueryHyperinstanceTagsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryHyperinstanceTagsRequest::idIsSet() const
{
    return idIsSet_;
}

void QueryHyperinstanceTagsRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


