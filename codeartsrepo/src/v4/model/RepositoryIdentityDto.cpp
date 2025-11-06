

#include "huaweicloud/codeartsrepo/v4/model/RepositoryIdentityDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryIdentityDto::RepositoryIdentityDto()
{
    id_ = 0;
    idIsSet_ = false;
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
}

RepositoryIdentityDto::~RepositoryIdentityDto() = default;

void RepositoryIdentityDto::validate()
{
}

web::json::value RepositoryIdentityDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }

    return val;
}
bool RepositoryIdentityDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathWithNamespace(refVal);
        }
    }
    return ok;
}


int32_t RepositoryIdentityDto::getId() const
{
    return id_;
}

void RepositoryIdentityDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryIdentityDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryIdentityDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryIdentityDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void RepositoryIdentityDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool RepositoryIdentityDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void RepositoryIdentityDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

}
}
}
}
}


