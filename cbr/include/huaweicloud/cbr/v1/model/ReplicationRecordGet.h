
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordGet_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordGet_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ReplicationRecordsExtraInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ReplicationRecordGet
    : public ModelBase
{
public:
    ReplicationRecordGet();
    virtual ~ReplicationRecordGet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReplicationRecordGet members

    /// <summary>
    /// 复制的开始时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 复制的目的备份ID
    /// </summary>

    std::string getDestinationBackupId() const;
    bool destinationBackupIdIsSet() const;
    void unsetdestinationBackupId();
    void setDestinationBackupId(const std::string& value);

    /// <summary>
    /// 复制的目的备份记录ID
    /// </summary>

    std::string getDestinationCheckpointId() const;
    bool destinationCheckpointIdIsSet() const;
    void unsetdestinationCheckpointId();
    void setDestinationCheckpointId(const std::string& value);

    /// <summary>
    /// 复制的目标项目ID
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 复制的目标区域
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 目标存储库ID
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationRecordsExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const ReplicationRecordsExtraInfo& value);

    /// <summary>
    /// 复制记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 复制的源备份ID
    /// </summary>

    std::string getSourceBackupId() const;
    bool sourceBackupIdIsSet() const;
    void unsetsourceBackupId();
    void setSourceBackupId(const std::string& value);

    /// <summary>
    /// 复制的源备份记录ID
    /// </summary>

    std::string getSourceCheckpointId() const;
    bool sourceCheckpointIdIsSet() const;
    void unsetsourceCheckpointId();
    void setSourceCheckpointId(const std::string& value);

    /// <summary>
    /// 复制的源项目ID
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);

    /// <summary>
    /// 复制的源区域
    /// </summary>

    std::string getSourceRegion() const;
    bool sourceRegionIsSet() const;
    void unsetsourceRegion();
    void setSourceRegion(const std::string& value);

    /// <summary>
    /// 复制的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份所在的存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string destinationBackupId_;
    bool destinationBackupIdIsSet_;
    std::string destinationCheckpointId_;
    bool destinationCheckpointIdIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    ReplicationRecordsExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string sourceBackupId_;
    bool sourceBackupIdIsSet_;
    std::string sourceCheckpointId_;
    bool sourceCheckpointIdIsSet_;
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;
    std::string sourceRegion_;
    bool sourceRegionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordGet_H_
