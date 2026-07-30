

#include "huaweicloud/modelarts/v1/model/PFSSummaryResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PFSSummaryResp::PFSSummaryResp()
{
    pfsPath_ = "";
    pfsPathIsSet_ = false;
}

PFSSummaryResp::~PFSSummaryResp() = default;

void PFSSummaryResp::validate()
{
}

web::json::value PFSSummaryResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pfsPathIsSet_) {
        val[utility::conversions::to_string_t("pfs_path")] = ModelBase::toJson(pfsPath_);
    }

    return val;
}
bool PFSSummaryResp::fromJson(const web::json::value& val)
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


std::string PFSSummaryResp::getPfsPath() const
{
    return pfsPath_;
}

void PFSSummaryResp::setPfsPath(const std::string& value)
{
    pfsPath_ = value;
    pfsPathIsSet_ = true;
}

bool PFSSummaryResp::pfsPathIsSet() const
{
    return pfsPathIsSet_;
}

void PFSSummaryResp::unsetpfsPath()
{
    pfsPathIsSet_ = false;
}

}
}
}
}
}


