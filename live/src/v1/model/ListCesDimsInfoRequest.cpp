

#include "huaweicloud/live/v1/model/ListCesDimsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesDimsInfoRequest::ListCesDimsInfoRequest()
{
    namespace_ = "";
    namespaceIsSet_ = false;
}

ListCesDimsInfoRequest::~ListCesDimsInfoRequest() = default;

void ListCesDimsInfoRequest::validate()
{
}

web::json::value ListCesDimsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }

    return val;
}
bool ListCesDimsInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    return ok;
}


std::string ListCesDimsInfoRequest::getNamespace() const
{
    return namespace_;
}

void ListCesDimsInfoRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListCesDimsInfoRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListCesDimsInfoRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


