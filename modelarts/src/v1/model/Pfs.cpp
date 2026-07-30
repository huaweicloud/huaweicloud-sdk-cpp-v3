

#include "huaweicloud/modelarts/v1/model/Pfs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Pfs::Pfs()
{
    pfsPath_ = "";
    pfsPathIsSet_ = false;
    localPath_ = "";
    localPathIsSet_ = false;
}

Pfs::~Pfs() = default;

void Pfs::validate()
{
}

web::json::value Pfs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pfsPathIsSet_) {
        val[utility::conversions::to_string_t("pfs_path")] = ModelBase::toJson(pfsPath_);
    }
    if(localPathIsSet_) {
        val[utility::conversions::to_string_t("local_path")] = ModelBase::toJson(localPath_);
    }

    return val;
}
bool Pfs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pfs_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pfs_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPfsPath(refVal);
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
    return ok;
}


std::string Pfs::getPfsPath() const
{
    return pfsPath_;
}

void Pfs::setPfsPath(const std::string& value)
{
    pfsPath_ = value;
    pfsPathIsSet_ = true;
}

bool Pfs::pfsPathIsSet() const
{
    return pfsPathIsSet_;
}

void Pfs::unsetpfsPath()
{
    pfsPathIsSet_ = false;
}

std::string Pfs::getLocalPath() const
{
    return localPath_;
}

void Pfs::setLocalPath(const std::string& value)
{
    localPath_ = value;
    localPathIsSet_ = true;
}

bool Pfs::localPathIsSet() const
{
    return localPathIsSet_;
}

void Pfs::unsetlocalPath()
{
    localPathIsSet_ = false;
}

}
}
}
}
}


