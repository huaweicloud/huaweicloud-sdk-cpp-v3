

#include "huaweicloud/cce/v3/model/AccessScope.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AccessScope::AccessScope()
{
    namespacesIsSet_ = false;
}

AccessScope::~AccessScope() = default;

void AccessScope::validate()
{
}

web::json::value AccessScope::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespacesIsSet_) {
        val[utility::conversions::to_string_t("namespaces")] = ModelBase::toJson(namespaces_);
    }

    return val;
}
bool AccessScope::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("namespaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespaces"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaces(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessScope::getNamespaces()
{
    return namespaces_;
}

void AccessScope::setNamespaces(const std::vector<std::string>& value)
{
    namespaces_ = value;
    namespacesIsSet_ = true;
}

bool AccessScope::namespacesIsSet() const
{
    return namespacesIsSet_;
}

void AccessScope::unsetnamespaces()
{
    namespacesIsSet_ = false;
}

}
}
}
}
}


