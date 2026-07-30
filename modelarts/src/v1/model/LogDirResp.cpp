

#include "huaweicloud/modelarts/v1/model/LogDirResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogDirResp::LogDirResp()
{
    pfsIsSet_ = false;
}

LogDirResp::~LogDirResp() = default;

void LogDirResp::validate()
{
}

web::json::value LogDirResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pfsIsSet_) {
        val[utility::conversions::to_string_t("pfs")] = ModelBase::toJson(pfs_);
    }

    return val;
}
bool LogDirResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pfs"));
        if(!fieldValue.is_null())
        {
            PFSSummaryResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPfs(refVal);
        }
    }
    return ok;
}


PFSSummaryResp LogDirResp::getPfs() const
{
    return pfs_;
}

void LogDirResp::setPfs(const PFSSummaryResp& value)
{
    pfs_ = value;
    pfsIsSet_ = true;
}

bool LogDirResp::pfsIsSet() const
{
    return pfsIsSet_;
}

void LogDirResp::unsetpfs()
{
    pfsIsSet_ = false;
}

}
}
}
}
}


