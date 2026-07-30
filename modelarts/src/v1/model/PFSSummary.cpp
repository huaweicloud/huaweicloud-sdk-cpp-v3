

#include "huaweicloud/modelarts/v1/model/PFSSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PFSSummary::PFSSummary()
{
    pfsPath_ = "";
    pfsPathIsSet_ = false;
}

PFSSummary::~PFSSummary() = default;

void PFSSummary::validate()
{
}

web::json::value PFSSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pfsPathIsSet_) {
        val[utility::conversions::to_string_t("pfs_path")] = ModelBase::toJson(pfsPath_);
    }

    return val;
}
bool PFSSummary::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PFSSummary::getPfsPath() const
{
    return pfsPath_;
}

void PFSSummary::setPfsPath(const std::string& value)
{
    pfsPath_ = value;
    pfsPathIsSet_ = true;
}

bool PFSSummary::pfsPathIsSet() const
{
    return pfsPathIsSet_;
}

void PFSSummary::unsetpfsPath()
{
    pfsPathIsSet_ = false;
}

}
}
}
}
}


