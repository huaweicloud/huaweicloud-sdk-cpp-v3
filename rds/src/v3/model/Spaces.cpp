

#include "huaweicloud/rds/v3/model/Spaces.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Spaces::Spaces()
{
    obs_ = 0.0;
    obsIsSet_ = false;
    snapshot_ = 0.0;
    snapshotIsSet_ = false;
    obsFree_ = 0.0;
    obsFreeIsSet_ = false;
    snapshotFree_ = 0.0;
    snapshotFreeIsSet_ = false;
}

Spaces::~Spaces() = default;

void Spaces::validate()
{
}

web::json::value Spaces::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(obsFreeIsSet_) {
        val[utility::conversions::to_string_t("obs_free")] = ModelBase::toJson(obsFree_);
    }
    if(snapshotFreeIsSet_) {
        val[utility::conversions::to_string_t("snapshot_free")] = ModelBase::toJson(snapshotFree_);
    }

    return val;
}
bool Spaces::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_free"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_free"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsFree(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_free"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_free"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotFree(refVal);
        }
    }
    return ok;
}


double Spaces::getObs() const
{
    return obs_;
}

void Spaces::setObs(double value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool Spaces::obsIsSet() const
{
    return obsIsSet_;
}

void Spaces::unsetobs()
{
    obsIsSet_ = false;
}

double Spaces::getSnapshot() const
{
    return snapshot_;
}

void Spaces::setSnapshot(double value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool Spaces::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void Spaces::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

double Spaces::getObsFree() const
{
    return obsFree_;
}

void Spaces::setObsFree(double value)
{
    obsFree_ = value;
    obsFreeIsSet_ = true;
}

bool Spaces::obsFreeIsSet() const
{
    return obsFreeIsSet_;
}

void Spaces::unsetobsFree()
{
    obsFreeIsSet_ = false;
}

double Spaces::getSnapshotFree() const
{
    return snapshotFree_;
}

void Spaces::setSnapshotFree(double value)
{
    snapshotFree_ = value;
    snapshotFreeIsSet_ = true;
}

bool Spaces::snapshotFreeIsSet() const
{
    return snapshotFreeIsSet_;
}

void Spaces::unsetsnapshotFree()
{
    snapshotFreeIsSet_ = false;
}

}
}
}
}
}


