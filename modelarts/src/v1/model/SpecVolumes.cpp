

#include "huaweicloud/modelarts/v1/model/SpecVolumes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SpecVolumes::SpecVolumes()
{
    nfsIsSet_ = false;
    pfsIsSet_ = false;
    obsIsSet_ = false;
}

SpecVolumes::~SpecVolumes() = default;

void SpecVolumes::validate()
{
}

web::json::value SpecVolumes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nfsIsSet_) {
        val[utility::conversions::to_string_t("nfs")] = ModelBase::toJson(nfs_);
    }
    if(pfsIsSet_) {
        val[utility::conversions::to_string_t("pfs")] = ModelBase::toJson(pfs_);
    }
    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool SpecVolumes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nfs"));
        if(!fieldValue.is_null())
        {
            Nfs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pfs"));
        if(!fieldValue.is_null())
        {
            Pfs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            Obs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


Nfs SpecVolumes::getNfs() const
{
    return nfs_;
}

void SpecVolumes::setNfs(const Nfs& value)
{
    nfs_ = value;
    nfsIsSet_ = true;
}

bool SpecVolumes::nfsIsSet() const
{
    return nfsIsSet_;
}

void SpecVolumes::unsetnfs()
{
    nfsIsSet_ = false;
}

Pfs SpecVolumes::getPfs() const
{
    return pfs_;
}

void SpecVolumes::setPfs(const Pfs& value)
{
    pfs_ = value;
    pfsIsSet_ = true;
}

bool SpecVolumes::pfsIsSet() const
{
    return pfsIsSet_;
}

void SpecVolumes::unsetpfs()
{
    pfsIsSet_ = false;
}

Obs SpecVolumes::getObs() const
{
    return obs_;
}

void SpecVolumes::setObs(const Obs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool SpecVolumes::obsIsSet() const
{
    return obsIsSet_;
}

void SpecVolumes::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


