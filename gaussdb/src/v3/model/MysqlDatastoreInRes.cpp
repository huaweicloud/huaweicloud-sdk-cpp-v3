

#include "huaweicloud/gaussdb/v3/model/MysqlDatastoreInRes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlDatastoreInRes::MysqlDatastoreInRes()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    kernelVersion_ = "";
    kernelVersionIsSet_ = false;
}

MysqlDatastoreInRes::~MysqlDatastoreInRes() = default;

void MysqlDatastoreInRes::validate()
{
}

web::json::value MysqlDatastoreInRes::toJson() const
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

bool MysqlDatastoreInRes::fromJson(const web::json::value& val)
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

std::string MysqlDatastoreInRes::getType() const
{
    return type_;
}

void MysqlDatastoreInRes::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlDatastoreInRes::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlDatastoreInRes::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlDatastoreInRes::getVersion() const
{
    return version_;
}

void MysqlDatastoreInRes::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool MysqlDatastoreInRes::versionIsSet() const
{
    return versionIsSet_;
}

void MysqlDatastoreInRes::unsetversion()
{
    versionIsSet_ = false;
}

std::string MysqlDatastoreInRes::getKernelVersion() const
{
    return kernelVersion_;
}

void MysqlDatastoreInRes::setKernelVersion(const std::string& value)
{
    kernelVersion_ = value;
    kernelVersionIsSet_ = true;
}

bool MysqlDatastoreInRes::kernelVersionIsSet() const
{
    return kernelVersionIsSet_;
}

void MysqlDatastoreInRes::unsetkernelVersion()
{
    kernelVersionIsSet_ = false;
}

}
}
}
}
}


