
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaList_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaList_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/QuotaDetailBackupGigabytes.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshotsESSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytesGPSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailPerVolumeGigabytes.h>
#include <string>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytes.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumesSAS.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumes.h>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytesSATA.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumesSATA.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumesSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailBackups.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshotsSATA.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshotsSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytesSAS.h>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytesSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshotsSAS.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshots.h>
#include <huaweicloud/evs/v2/model/QuotaDetailSnapshotsGPSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumesGPSSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailGigabytesESSD.h>
#include <huaweicloud/evs/v2/model/QuotaDetailVolumesESSD.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  QuotaList
    : public ModelBase
{
public:
    QuotaList();
    virtual ~QuotaList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaList members

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailBackupGigabytes getBackupGigabytes() const;
    bool backupGigabytesIsSet() const;
    void unsetbackupGigabytes();
    void setBackupGigabytes(const QuotaDetailBackupGigabytes& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailBackups getBackups() const;
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const QuotaDetailBackups& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytes getGigabytes() const;
    bool gigabytesIsSet() const;
    void unsetgigabytes();
    void setGigabytes(const QuotaDetailGigabytes& value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshots getSnapshots() const;
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const QuotaDetailSnapshots& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumes getVolumes() const;
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const QuotaDetailVolumes& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytesSATA getGigabytesSATA() const;
    bool gigabytesSATAIsSet() const;
    void unsetgigabytesSATA();
    void setGigabytesSATA(const QuotaDetailGigabytesSATA& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshotsSATA getSnapshotsSATA() const;
    bool snapshotsSATAIsSet() const;
    void unsetsnapshotsSATA();
    void setSnapshotsSATA(const QuotaDetailSnapshotsSATA& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumesSATA getVolumesSATA() const;
    bool volumesSATAIsSet() const;
    void unsetvolumesSATA();
    void setVolumesSATA(const QuotaDetailVolumesSATA& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytesSAS getGigabytesSAS() const;
    bool gigabytesSASIsSet() const;
    void unsetgigabytesSAS();
    void setGigabytesSAS(const QuotaDetailGigabytesSAS& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshotsSAS getSnapshotsSAS() const;
    bool snapshotsSASIsSet() const;
    void unsetsnapshotsSAS();
    void setSnapshotsSAS(const QuotaDetailSnapshotsSAS& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumesSAS getVolumesSAS() const;
    bool volumesSASIsSet() const;
    void unsetvolumesSAS();
    void setVolumesSAS(const QuotaDetailVolumesSAS& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytesSSD getGigabytesSSD() const;
    bool gigabytesSSDIsSet() const;
    void unsetgigabytesSSD();
    void setGigabytesSSD(const QuotaDetailGigabytesSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshotsSSD getSnapshotsSSD() const;
    bool snapshotsSSDIsSet() const;
    void unsetsnapshotsSSD();
    void setSnapshotsSSD(const QuotaDetailSnapshotsSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumesSSD getVolumesSSD() const;
    bool volumesSSDIsSet() const;
    void unsetvolumesSSD();
    void setVolumesSSD(const QuotaDetailVolumesSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytesESSD getGigabytesESSD() const;
    bool gigabytesESSDIsSet() const;
    void unsetgigabytesESSD();
    void setGigabytesESSD(const QuotaDetailGigabytesESSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshotsESSD getSnapshotsESSD() const;
    bool snapshotsESSDIsSet() const;
    void unsetsnapshotsESSD();
    void setSnapshotsESSD(const QuotaDetailSnapshotsESSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumesESSD getVolumesESSD() const;
    bool volumesESSDIsSet() const;
    void unsetvolumesESSD();
    void setVolumesESSD(const QuotaDetailVolumesESSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailGigabytesGPSSD getGigabytesGPSSD() const;
    bool gigabytesGPSSDIsSet() const;
    void unsetgigabytesGPSSD();
    void setGigabytesGPSSD(const QuotaDetailGigabytesGPSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailSnapshotsGPSSD getSnapshotsGPSSD() const;
    bool snapshotsGPSSDIsSet() const;
    void unsetsnapshotsGPSSD();
    void setSnapshotsGPSSD(const QuotaDetailSnapshotsGPSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailVolumesGPSSD getVolumesGPSSD() const;
    bool volumesGPSSDIsSet() const;
    void unsetvolumesGPSSD();
    void setVolumesGPSSD(const QuotaDetailVolumesGPSSD& value);

    /// <summary>
    /// 
    /// </summary>

    QuotaDetailPerVolumeGigabytes getPerVolumeGigabytes() const;
    bool perVolumeGigabytesIsSet() const;
    void unsetperVolumeGigabytes();
    void setPerVolumeGigabytes(const QuotaDetailPerVolumeGigabytes& value);


protected:
    QuotaDetailBackupGigabytes backupGigabytes_;
    bool backupGigabytesIsSet_;
    QuotaDetailBackups backups_;
    bool backupsIsSet_;
    QuotaDetailGigabytes gigabytes_;
    bool gigabytesIsSet_;
    std::string id_;
    bool idIsSet_;
    QuotaDetailSnapshots snapshots_;
    bool snapshotsIsSet_;
    QuotaDetailVolumes volumes_;
    bool volumesIsSet_;
    QuotaDetailGigabytesSATA gigabytesSATA_;
    bool gigabytesSATAIsSet_;
    QuotaDetailSnapshotsSATA snapshotsSATA_;
    bool snapshotsSATAIsSet_;
    QuotaDetailVolumesSATA volumesSATA_;
    bool volumesSATAIsSet_;
    QuotaDetailGigabytesSAS gigabytesSAS_;
    bool gigabytesSASIsSet_;
    QuotaDetailSnapshotsSAS snapshotsSAS_;
    bool snapshotsSASIsSet_;
    QuotaDetailVolumesSAS volumesSAS_;
    bool volumesSASIsSet_;
    QuotaDetailGigabytesSSD gigabytesSSD_;
    bool gigabytesSSDIsSet_;
    QuotaDetailSnapshotsSSD snapshotsSSD_;
    bool snapshotsSSDIsSet_;
    QuotaDetailVolumesSSD volumesSSD_;
    bool volumesSSDIsSet_;
    QuotaDetailGigabytesESSD gigabytesESSD_;
    bool gigabytesESSDIsSet_;
    QuotaDetailSnapshotsESSD snapshotsESSD_;
    bool snapshotsESSDIsSet_;
    QuotaDetailVolumesESSD volumesESSD_;
    bool volumesESSDIsSet_;
    QuotaDetailGigabytesGPSSD gigabytesGPSSD_;
    bool gigabytesGPSSDIsSet_;
    QuotaDetailSnapshotsGPSSD snapshotsGPSSD_;
    bool snapshotsGPSSDIsSet_;
    QuotaDetailVolumesGPSSD volumesGPSSD_;
    bool volumesGPSSDIsSet_;
    QuotaDetailPerVolumeGigabytes perVolumeGigabytes_;
    bool perVolumeGigabytesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaList_H_
