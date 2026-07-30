

#include "huaweicloud/modelarts/v1/model/ListHyperClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperClusterRequest::ListHyperClusterRequest()
{
    type_ = "";
    typeIsSet_ = false;
}

ListHyperClusterRequest::~ListHyperClusterRequest() = default;

void ListHyperClusterRequest::validate()
{
}

web::json::value ListHyperClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListHyperClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListHyperClusterRequest::getType() const
{
    return type_;
}

void ListHyperClusterRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListHyperClusterRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListHyperClusterRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


