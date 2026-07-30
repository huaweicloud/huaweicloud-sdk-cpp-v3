

#include "huaweicloud/modelarts/v1/model/LogDir.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogDir::LogDir()
{
    pfsIsSet_ = false;
}

LogDir::~LogDir() = default;

void LogDir::validate()
{
}

web::json::value LogDir::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pfsIsSet_) {
        val[utility::conversions::to_string_t("pfs")] = ModelBase::toJson(pfs_);
    }

    return val;
}
bool LogDir::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pfs"));
        if(!fieldValue.is_null())
        {
            PFSSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPfs(refVal);
        }
    }
    return ok;
}


PFSSummary LogDir::getPfs() const
{
    return pfs_;
}

void LogDir::setPfs(const PFSSummary& value)
{
    pfs_ = value;
    pfsIsSet_ = true;
}

bool LogDir::pfsIsSet() const
{
    return pfsIsSet_;
}

void LogDir::unsetpfs()
{
    pfsIsSet_ = false;
}

}
}
}
}
}


