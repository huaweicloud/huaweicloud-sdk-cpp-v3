

#include "huaweicloud/evs/v2/model/QuotaList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaList::QuotaList()
{
    backupGigabytesIsSet_ = false;
    backupsIsSet_ = false;
    gigabytesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    snapshotsIsSet_ = false;
    volumesIsSet_ = false;
    gigabytesSATAIsSet_ = false;
    snapshotsSATAIsSet_ = false;
    volumesSATAIsSet_ = false;
    gigabytesSASIsSet_ = false;
    snapshotsSASIsSet_ = false;
    volumesSASIsSet_ = false;
    gigabytesSSDIsSet_ = false;
    snapshotsSSDIsSet_ = false;
    volumesSSDIsSet_ = false;
    perVolumeGigabytesIsSet_ = false;
}

QuotaList::~QuotaList() = default;

void QuotaList::validate()
{
}

web::json::value QuotaList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupGigabytesIsSet_) {
        val[utility::conversions::to_string_t("backup_gigabytes")] = ModelBase::toJson(backupGigabytes_);
    }
    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(gigabytesIsSet_) {
        val[utility::conversions::to_string_t("gigabytes")] = ModelBase::toJson(gigabytes_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(snapshotsIsSet_) {
        val[utility::conversions::to_string_t("snapshots")] = ModelBase::toJson(snapshots_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }
    if(gigabytesSATAIsSet_) {
        val[utility::conversions::to_string_t("gigabytes_SATA")] = ModelBase::toJson(gigabytesSATA_);
    }
    if(snapshotsSATAIsSet_) {
        val[utility::conversions::to_string_t("snapshots_SATA")] = ModelBase::toJson(snapshotsSATA_);
    }
    if(volumesSATAIsSet_) {
        val[utility::conversions::to_string_t("volumes_SATA")] = ModelBase::toJson(volumesSATA_);
    }
    if(gigabytesSASIsSet_) {
        val[utility::conversions::to_string_t("gigabytes_SAS")] = ModelBase::toJson(gigabytesSAS_);
    }
    if(snapshotsSASIsSet_) {
        val[utility::conversions::to_string_t("snapshots_SAS")] = ModelBase::toJson(snapshotsSAS_);
    }
    if(volumesSASIsSet_) {
        val[utility::conversions::to_string_t("volumes_SAS")] = ModelBase::toJson(volumesSAS_);
    }
    if(gigabytesSSDIsSet_) {
        val[utility::conversions::to_string_t("gigabytes_SSD")] = ModelBase::toJson(gigabytesSSD_);
    }
    if(snapshotsSSDIsSet_) {
        val[utility::conversions::to_string_t("snapshots_SSD")] = ModelBase::toJson(snapshotsSSD_);
    }
    if(volumesSSDIsSet_) {
        val[utility::conversions::to_string_t("volumes_SSD")] = ModelBase::toJson(volumesSSD_);
    }
    if(perVolumeGigabytesIsSet_) {
        val[utility::conversions::to_string_t("per_volume_gigabytes")] = ModelBase::toJson(perVolumeGigabytes_);
    }

    return val;
}
bool QuotaList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_gigabytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_gigabytes"));
        if(!fieldValue.is_null())
        {
            QuotaDetailBackupGigabytes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupGigabytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            QuotaDetailBackups refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gigabytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gigabytes"));
        if(!fieldValue.is_null())
        {
            QuotaDetailGigabytes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGigabytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots"));
        if(!fieldValue.is_null())
        {
            QuotaDetailSnapshots refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshots(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            QuotaDetailVolumes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gigabytes_SATA"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gigabytes_SATA"));
        if(!fieldValue.is_null())
        {
            QuotaDetailGigabytesSATA refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGigabytesSATA(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots_SATA"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots_SATA"));
        if(!fieldValue.is_null())
        {
            QuotaDetailSnapshotsSATA refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotsSATA(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes_SATA"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_SATA"));
        if(!fieldValue.is_null())
        {
            QuotaDetailVolumesSATA refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesSATA(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gigabytes_SAS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gigabytes_SAS"));
        if(!fieldValue.is_null())
        {
            QuotaDetailGigabytesSAS refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGigabytesSAS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots_SAS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots_SAS"));
        if(!fieldValue.is_null())
        {
            QuotaDetailSnapshotsSAS refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotsSAS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes_SAS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_SAS"));
        if(!fieldValue.is_null())
        {
            QuotaDetailVolumesSAS refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesSAS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gigabytes_SSD"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gigabytes_SSD"));
        if(!fieldValue.is_null())
        {
            QuotaDetailGigabytesSSD refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGigabytesSSD(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshots_SSD"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshots_SSD"));
        if(!fieldValue.is_null())
        {
            QuotaDetailSnapshotsSSD refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotsSSD(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes_SSD"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_SSD"));
        if(!fieldValue.is_null())
        {
            QuotaDetailVolumesSSD refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesSSD(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_volume_gigabytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_volume_gigabytes"));
        if(!fieldValue.is_null())
        {
            QuotaDetailPerVolumeGigabytes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerVolumeGigabytes(refVal);
        }
    }
    return ok;
}


QuotaDetailBackupGigabytes QuotaList::getBackupGigabytes() const
{
    return backupGigabytes_;
}

void QuotaList::setBackupGigabytes(const QuotaDetailBackupGigabytes& value)
{
    backupGigabytes_ = value;
    backupGigabytesIsSet_ = true;
}

bool QuotaList::backupGigabytesIsSet() const
{
    return backupGigabytesIsSet_;
}

void QuotaList::unsetbackupGigabytes()
{
    backupGigabytesIsSet_ = false;
}

QuotaDetailBackups QuotaList::getBackups() const
{
    return backups_;
}

void QuotaList::setBackups(const QuotaDetailBackups& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool QuotaList::backupsIsSet() const
{
    return backupsIsSet_;
}

void QuotaList::unsetbackups()
{
    backupsIsSet_ = false;
}

QuotaDetailGigabytes QuotaList::getGigabytes() const
{
    return gigabytes_;
}

void QuotaList::setGigabytes(const QuotaDetailGigabytes& value)
{
    gigabytes_ = value;
    gigabytesIsSet_ = true;
}

bool QuotaList::gigabytesIsSet() const
{
    return gigabytesIsSet_;
}

void QuotaList::unsetgigabytes()
{
    gigabytesIsSet_ = false;
}

std::string QuotaList::getId() const
{
    return id_;
}

void QuotaList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QuotaList::idIsSet() const
{
    return idIsSet_;
}

void QuotaList::unsetid()
{
    idIsSet_ = false;
}

QuotaDetailSnapshots QuotaList::getSnapshots() const
{
    return snapshots_;
}

void QuotaList::setSnapshots(const QuotaDetailSnapshots& value)
{
    snapshots_ = value;
    snapshotsIsSet_ = true;
}

bool QuotaList::snapshotsIsSet() const
{
    return snapshotsIsSet_;
}

void QuotaList::unsetsnapshots()
{
    snapshotsIsSet_ = false;
}

QuotaDetailVolumes QuotaList::getVolumes() const
{
    return volumes_;
}

void QuotaList::setVolumes(const QuotaDetailVolumes& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool QuotaList::volumesIsSet() const
{
    return volumesIsSet_;
}

void QuotaList::unsetvolumes()
{
    volumesIsSet_ = false;
}

QuotaDetailGigabytesSATA QuotaList::getGigabytesSATA() const
{
    return gigabytesSATA_;
}

void QuotaList::setGigabytesSATA(const QuotaDetailGigabytesSATA& value)
{
    gigabytesSATA_ = value;
    gigabytesSATAIsSet_ = true;
}

bool QuotaList::gigabytesSATAIsSet() const
{
    return gigabytesSATAIsSet_;
}

void QuotaList::unsetgigabytesSATA()
{
    gigabytesSATAIsSet_ = false;
}

QuotaDetailSnapshotsSATA QuotaList::getSnapshotsSATA() const
{
    return snapshotsSATA_;
}

void QuotaList::setSnapshotsSATA(const QuotaDetailSnapshotsSATA& value)
{
    snapshotsSATA_ = value;
    snapshotsSATAIsSet_ = true;
}

bool QuotaList::snapshotsSATAIsSet() const
{
    return snapshotsSATAIsSet_;
}

void QuotaList::unsetsnapshotsSATA()
{
    snapshotsSATAIsSet_ = false;
}

QuotaDetailVolumesSATA QuotaList::getVolumesSATA() const
{
    return volumesSATA_;
}

void QuotaList::setVolumesSATA(const QuotaDetailVolumesSATA& value)
{
    volumesSATA_ = value;
    volumesSATAIsSet_ = true;
}

bool QuotaList::volumesSATAIsSet() const
{
    return volumesSATAIsSet_;
}

void QuotaList::unsetvolumesSATA()
{
    volumesSATAIsSet_ = false;
}

QuotaDetailGigabytesSAS QuotaList::getGigabytesSAS() const
{
    return gigabytesSAS_;
}

void QuotaList::setGigabytesSAS(const QuotaDetailGigabytesSAS& value)
{
    gigabytesSAS_ = value;
    gigabytesSASIsSet_ = true;
}

bool QuotaList::gigabytesSASIsSet() const
{
    return gigabytesSASIsSet_;
}

void QuotaList::unsetgigabytesSAS()
{
    gigabytesSASIsSet_ = false;
}

QuotaDetailSnapshotsSAS QuotaList::getSnapshotsSAS() const
{
    return snapshotsSAS_;
}

void QuotaList::setSnapshotsSAS(const QuotaDetailSnapshotsSAS& value)
{
    snapshotsSAS_ = value;
    snapshotsSASIsSet_ = true;
}

bool QuotaList::snapshotsSASIsSet() const
{
    return snapshotsSASIsSet_;
}

void QuotaList::unsetsnapshotsSAS()
{
    snapshotsSASIsSet_ = false;
}

QuotaDetailVolumesSAS QuotaList::getVolumesSAS() const
{
    return volumesSAS_;
}

void QuotaList::setVolumesSAS(const QuotaDetailVolumesSAS& value)
{
    volumesSAS_ = value;
    volumesSASIsSet_ = true;
}

bool QuotaList::volumesSASIsSet() const
{
    return volumesSASIsSet_;
}

void QuotaList::unsetvolumesSAS()
{
    volumesSASIsSet_ = false;
}

QuotaDetailGigabytesSSD QuotaList::getGigabytesSSD() const
{
    return gigabytesSSD_;
}

void QuotaList::setGigabytesSSD(const QuotaDetailGigabytesSSD& value)
{
    gigabytesSSD_ = value;
    gigabytesSSDIsSet_ = true;
}

bool QuotaList::gigabytesSSDIsSet() const
{
    return gigabytesSSDIsSet_;
}

void QuotaList::unsetgigabytesSSD()
{
    gigabytesSSDIsSet_ = false;
}

QuotaDetailSnapshotsSSD QuotaList::getSnapshotsSSD() const
{
    return snapshotsSSD_;
}

void QuotaList::setSnapshotsSSD(const QuotaDetailSnapshotsSSD& value)
{
    snapshotsSSD_ = value;
    snapshotsSSDIsSet_ = true;
}

bool QuotaList::snapshotsSSDIsSet() const
{
    return snapshotsSSDIsSet_;
}

void QuotaList::unsetsnapshotsSSD()
{
    snapshotsSSDIsSet_ = false;
}

QuotaDetailVolumesSSD QuotaList::getVolumesSSD() const
{
    return volumesSSD_;
}

void QuotaList::setVolumesSSD(const QuotaDetailVolumesSSD& value)
{
    volumesSSD_ = value;
    volumesSSDIsSet_ = true;
}

bool QuotaList::volumesSSDIsSet() const
{
    return volumesSSDIsSet_;
}

void QuotaList::unsetvolumesSSD()
{
    volumesSSDIsSet_ = false;
}

QuotaDetailPerVolumeGigabytes QuotaList::getPerVolumeGigabytes() const
{
    return perVolumeGigabytes_;
}

void QuotaList::setPerVolumeGigabytes(const QuotaDetailPerVolumeGigabytes& value)
{
    perVolumeGigabytes_ = value;
    perVolumeGigabytesIsSet_ = true;
}

bool QuotaList::perVolumeGigabytesIsSet() const
{
    return perVolumeGigabytesIsSet_;
}

void QuotaList::unsetperVolumeGigabytes()
{
    perVolumeGigabytesIsSet_ = false;
}

}
}
}
}
}


