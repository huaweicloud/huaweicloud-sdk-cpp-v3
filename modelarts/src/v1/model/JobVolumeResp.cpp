

#include "huaweicloud/modelarts/v1/model/JobVolumeResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobVolumeResp::JobVolumeResp()
{
    nfsIsSet_ = false;
}

JobVolumeResp::~JobVolumeResp() = default;

void JobVolumeResp::validate()
{
}

web::json::value JobVolumeResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nfsIsSet_) {
        val[utility::conversions::to_string_t("nfs")] = ModelBase::toJson(nfs_);
    }

    return val;
}
bool JobVolumeResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nfs"));
        if(!fieldValue.is_null())
        {
            NfsResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNfs(refVal);
        }
    }
    return ok;
}


NfsResp JobVolumeResp::getNfs() const
{
    return nfs_;
}

void JobVolumeResp::setNfs(const NfsResp& value)
{
    nfs_ = value;
    nfsIsSet_ = true;
}

bool JobVolumeResp::nfsIsSet() const
{
    return nfsIsSet_;
}

void JobVolumeResp::unsetnfs()
{
    nfsIsSet_ = false;
}

}
}
}
}
}


