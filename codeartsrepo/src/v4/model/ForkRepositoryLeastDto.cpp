

#include "huaweicloud/codeartsrepo/v4/model/ForkRepositoryLeastDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ForkRepositoryLeastDto::ForkRepositoryLeastDto()
{
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
}

ForkRepositoryLeastDto::~ForkRepositoryLeastDto() = default;

void ForkRepositoryLeastDto::validate()
{
}

web::json::value ForkRepositoryLeastDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }

    return val;
}
bool ForkRepositoryLeastDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ForkRepositoryLeastDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void ForkRepositoryLeastDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool ForkRepositoryLeastDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void ForkRepositoryLeastDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

}
}
}
}
}


