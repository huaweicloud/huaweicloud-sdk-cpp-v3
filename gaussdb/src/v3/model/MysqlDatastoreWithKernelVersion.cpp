

#include "huaweicloud/gaussdb/v3/model/MysqlDatastoreWithKernelVersion.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlDatastoreWithKernelVersion::MysqlDatastoreWithKernelVersion()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    kernelVersion_ = "";
    kernelVersionIsSet_ = false;
}

MysqlDatastoreWithKernelVersion::~MysqlDatastoreWithKernelVersion() = default;

void MysqlDatastoreWithKernelVersion::validate()
{
}

web::json::value MysqlDatastoreWithKernelVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(kernelVersionIsSet_) {
        val[utility::conversions::to_string_t("kernel_version")] = ModelBase::toJson(kernelVersion_);
    }

    return val;
}

bool MysqlDatastoreWithKernelVersion::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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

std::string MysqlDatastoreWithKernelVersion::getType() const
{
    return type_;
}

void MysqlDatastoreWithKernelVersion::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlDatastoreWithKernelVersion::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlDatastoreWithKernelVersion::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlDatastoreWithKernelVersion::getVersion() const
{
    return version_;
}

void MysqlDatastoreWithKernelVersion::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool MysqlDatastoreWithKernelVersion::versionIsSet() const
{
    return versionIsSet_;
}

void MysqlDatastoreWithKernelVersion::unsetversion()
{
    versionIsSet_ = false;
}

std::string MysqlDatastoreWithKernelVersion::getKernelVersion() const
{
    return kernelVersion_;
}

void MysqlDatastoreWithKernelVersion::setKernelVersion(const std::string& value)
{
    kernelVersion_ = value;
    kernelVersionIsSet_ = true;
}

bool MysqlDatastoreWithKernelVersion::kernelVersionIsSet() const
{
    return kernelVersionIsSet_;
}

void MysqlDatastoreWithKernelVersion::unsetkernelVersion()
{
    kernelVersionIsSet_ = false;
}

}
}
}
}
}


