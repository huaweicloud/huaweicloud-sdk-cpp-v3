

#include "huaweicloud/cce/v3/model/PodIdentitySubject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PodIdentitySubject::PodIdentitySubject()
{
    namespace_ = "";
    namespaceIsSet_ = false;
    serviceAccount_ = "";
    serviceAccountIsSet_ = false;
}

PodIdentitySubject::~PodIdentitySubject() = default;

void PodIdentitySubject::validate()
{
}

web::json::value PodIdentitySubject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(serviceAccountIsSet_) {
        val[utility::conversions::to_string_t("serviceAccount")] = ModelBase::toJson(serviceAccount_);
    }

    return val;
}
bool PodIdentitySubject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("serviceAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceAccount(refVal);
        }
    }
    return ok;
}


std::string PodIdentitySubject::getNamespace() const
{
    return namespace_;
}

void PodIdentitySubject::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool PodIdentitySubject::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void PodIdentitySubject::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string PodIdentitySubject::getServiceAccount() const
{
    return serviceAccount_;
}

void PodIdentitySubject::setServiceAccount(const std::string& value)
{
    serviceAccount_ = value;
    serviceAccountIsSet_ = true;
}

bool PodIdentitySubject::serviceAccountIsSet() const
{
    return serviceAccountIsSet_;
}

void PodIdentitySubject::unsetserviceAccount()
{
    serviceAccountIsSet_ = false;
}

}
}
}
}
}


