

#include "huaweicloud/modelarts/v1/model/NFSSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NFSSummary::NFSSummary()
{
    nfsPath_ = "";
    nfsPathIsSet_ = false;
}

NFSSummary::~NFSSummary() = default;

void NFSSummary::validate()
{
}

web::json::value NFSSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nfsPathIsSet_) {
        val[utility::conversions::to_string_t("nfs_path")] = ModelBase::toJson(nfsPath_);
    }

    return val;
}
bool NFSSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nfs_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nfs_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNfsPath(refVal);
        }
    }
    return ok;
}


std::string NFSSummary::getNfsPath() const
{
    return nfsPath_;
}

void NFSSummary::setNfsPath(const std::string& value)
{
    nfsPath_ = value;
    nfsPathIsSet_ = true;
}

bool NFSSummary::nfsPathIsSet() const
{
    return nfsPathIsSet_;
}

void NFSSummary::unsetnfsPath()
{
    nfsPathIsSet_ = false;
}

}
}
}
}
}


