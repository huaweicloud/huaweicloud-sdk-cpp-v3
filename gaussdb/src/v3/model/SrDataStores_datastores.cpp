

#include "huaweicloud/gaussdb/v3/model/SrDataStores_datastores.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SrDataStores_datastores::SrDataStores_datastores()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    kernelVersion_ = "";
    kernelVersionIsSet_ = false;
}

SrDataStores_datastores::~SrDataStores_datastores() = default;

void SrDataStores_datastores::validate()
{
}

web::json::value SrDataStores_datastores::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(kernelVersionIsSet_) {
        val[utility::conversions::to_string_t("kernel_version")] = ModelBase::toJson(kernelVersion_);
    }

    return val;
}
bool SrDataStores_datastores::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelVersion(refVal);
        }
    }
    return ok;
}


std::string SrDataStores_datastores::getId() const
{
    return id_;
}

void SrDataStores_datastores::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SrDataStores_datastores::idIsSet() const
{
    return idIsSet_;
}

void SrDataStores_datastores::unsetid()
{
    idIsSet_ = false;
}

std::string SrDataStores_datastores::getName() const
{
    return name_;
}

void SrDataStores_datastores::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SrDataStores_datastores::nameIsSet() const
{
    return nameIsSet_;
}

void SrDataStores_datastores::unsetname()
{
    nameIsSet_ = false;
}

std::string SrDataStores_datastores::getKernelVersion() const
{
    return kernelVersion_;
}

void SrDataStores_datastores::setKernelVersion(const std::string& value)
{
    kernelVersion_ = value;
    kernelVersionIsSet_ = true;
}

bool SrDataStores_datastores::kernelVersionIsSet() const
{
    return kernelVersionIsSet_;
}

void SrDataStores_datastores::unsetkernelVersion()
{
    kernelVersionIsSet_ = false;
}

}
}
}
}
}


