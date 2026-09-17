

#include "huaweicloud/rds/v3/model/Space.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Space::Space()
{
    obs_ = 0.0;
    obsIsSet_ = false;
    auditlog_ = 0.0;
    auditlogIsSet_ = false;
    snapshot_ = 0.0;
    snapshotIsSet_ = false;
    cbrSnapshot_ = 0.0;
    cbrSnapshotIsSet_ = false;
    obsFree_ = 0.0;
    obsFreeIsSet_ = false;
    snapshotFree_ = 0.0;
    snapshotFreeIsSet_ = false;
    db_ = 0.0;
    dbIsSet_ = false;
    log_ = 0.0;
    logIsSet_ = false;
}

Space::~Space() = default;

void Space::validate()
{
}

web::json::value Space::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }
    if(auditlogIsSet_) {
        val[utility::conversions::to_string_t("auditlog")] = ModelBase::toJson(auditlog_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(cbrSnapshotIsSet_) {
        val[utility::conversions::to_string_t("cbr_snapshot")] = ModelBase::toJson(cbrSnapshot_);
    }
    if(obsFreeIsSet_) {
        val[utility::conversions::to_string_t("obs_free")] = ModelBase::toJson(obsFree_);
    }
    if(snapshotFreeIsSet_) {
        val[utility::conversions::to_string_t("snapshot_free")] = ModelBase::toJson(snapshotFree_);
    }
    if(dbIsSet_) {
        val[utility::conversions::to_string_t("db")] = ModelBase::toJson(db_);
    }
    if(logIsSet_) {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(log_);
    }

    return val;
}
bool Space::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("auditlog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auditlog"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditlog(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cbr_snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cbr_snapshot"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCbrSnapshot(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLog(refVal);
        }
    }
    return ok;
}


double Space::getObs() const
{
    return obs_;
}

void Space::setObs(double value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool Space::obsIsSet() const
{
    return obsIsSet_;
}

void Space::unsetobs()
{
    obsIsSet_ = false;
}

double Space::getAuditlog() const
{
    return auditlog_;
}

void Space::setAuditlog(double value)
{
    auditlog_ = value;
    auditlogIsSet_ = true;
}

bool Space::auditlogIsSet() const
{
    return auditlogIsSet_;
}

void Space::unsetauditlog()
{
    auditlogIsSet_ = false;
}

double Space::getSnapshot() const
{
    return snapshot_;
}

void Space::setSnapshot(double value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool Space::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void Space::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

double Space::getCbrSnapshot() const
{
    return cbrSnapshot_;
}

void Space::setCbrSnapshot(double value)
{
    cbrSnapshot_ = value;
    cbrSnapshotIsSet_ = true;
}

bool Space::cbrSnapshotIsSet() const
{
    return cbrSnapshotIsSet_;
}

void Space::unsetcbrSnapshot()
{
    cbrSnapshotIsSet_ = false;
}

double Space::getObsFree() const
{
    return obsFree_;
}

void Space::setObsFree(double value)
{
    obsFree_ = value;
    obsFreeIsSet_ = true;
}

bool Space::obsFreeIsSet() const
{
    return obsFreeIsSet_;
}

void Space::unsetobsFree()
{
    obsFreeIsSet_ = false;
}

double Space::getSnapshotFree() const
{
    return snapshotFree_;
}

void Space::setSnapshotFree(double value)
{
    snapshotFree_ = value;
    snapshotFreeIsSet_ = true;
}

bool Space::snapshotFreeIsSet() const
{
    return snapshotFreeIsSet_;
}

void Space::unsetsnapshotFree()
{
    snapshotFreeIsSet_ = false;
}

double Space::getDb() const
{
    return db_;
}

void Space::setDb(double value)
{
    db_ = value;
    dbIsSet_ = true;
}

bool Space::dbIsSet() const
{
    return dbIsSet_;
}

void Space::unsetdb()
{
    dbIsSet_ = false;
}

double Space::getLog() const
{
    return log_;
}

void Space::setLog(double value)
{
    log_ = value;
    logIsSet_ = true;
}

bool Space::logIsSet() const
{
    return logIsSet_;
}

void Space::unsetlog()
{
    logIsSet_ = false;
}

}
}
}
}
}


