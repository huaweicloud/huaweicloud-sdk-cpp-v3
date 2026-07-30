

#include "huaweicloud/modelarts/v1/model/Nfs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Nfs::Nfs()
{
    nfsServerPath_ = "";
    nfsServerPathIsSet_ = false;
    localPath_ = "";
    localPathIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
}

Nfs::~Nfs() = default;

void Nfs::validate()
{
}

web::json::value Nfs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nfsServerPathIsSet_) {
        val[utility::conversions::to_string_t("nfs_server_path")] = ModelBase::toJson(nfsServerPath_);
    }
    if(localPathIsSet_) {
        val[utility::conversions::to_string_t("local_path")] = ModelBase::toJson(localPath_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }

    return val;
}
bool Nfs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nfs_server_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nfs_server_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNfsServerPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnly(refVal);
        }
    }
    return ok;
}


std::string Nfs::getNfsServerPath() const
{
    return nfsServerPath_;
}

void Nfs::setNfsServerPath(const std::string& value)
{
    nfsServerPath_ = value;
    nfsServerPathIsSet_ = true;
}

bool Nfs::nfsServerPathIsSet() const
{
    return nfsServerPathIsSet_;
}

void Nfs::unsetnfsServerPath()
{
    nfsServerPathIsSet_ = false;
}

std::string Nfs::getLocalPath() const
{
    return localPath_;
}

void Nfs::setLocalPath(const std::string& value)
{
    localPath_ = value;
    localPathIsSet_ = true;
}

bool Nfs::localPathIsSet() const
{
    return localPathIsSet_;
}

void Nfs::unsetlocalPath()
{
    localPathIsSet_ = false;
}

bool Nfs::isReadOnly() const
{
    return readOnly_;
}

void Nfs::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool Nfs::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void Nfs::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

}
}
}
}
}


