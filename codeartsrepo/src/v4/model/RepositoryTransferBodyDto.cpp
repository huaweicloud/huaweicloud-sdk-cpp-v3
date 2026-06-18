

#include "huaweicloud/codeartsrepo/v4/model/RepositoryTransferBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryTransferBodyDto::RepositoryTransferBodyDto()
{
    namespace_ = "";
    namespaceIsSet_ = false;
}

RepositoryTransferBodyDto::~RepositoryTransferBodyDto() = default;

void RepositoryTransferBodyDto::validate()
{
}

web::json::value RepositoryTransferBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }

    return val;
}
bool RepositoryTransferBodyDto::fromJson(const web::json::value& val)
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


std::string RepositoryTransferBodyDto::getNamespace() const
{
    return namespace_;
}

void RepositoryTransferBodyDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool RepositoryTransferBodyDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void RepositoryTransferBodyDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


