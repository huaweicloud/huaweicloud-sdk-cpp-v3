
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateRespBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateRespBody_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupReplicateRespBody
    : public ModelBase
{
public:
    BackupReplicateRespBody();
    virtual ~BackupReplicateRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupReplicateRespBody members

    /// <summary>
    /// 待复制的备份ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

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
    /// 复制的目标区域存储库ID
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 执行复制的项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资源类型id
    /// </summary>

    std::string getProviderId() const;
    bool providerIdIsSet() const;
    void unsetproviderId();
    void setProviderId(const std::string& value);

    /// <summary>
    /// 复制记录ID
    /// </summary>

    std::string getReplicationRecordId() const;
    bool replicationRecordIdIsSet() const;
    void unsetreplicationRecordId();
    void setReplicationRecordId(const std::string& value);

    /// <summary>
    /// 复制的源区域
    /// </summary>

    std::string getSourceRegion() const;
    bool sourceRegionIsSet() const;
    void unsetsourceRegion();
    void setSourceRegion(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string providerId_;
    bool providerIdIsSet_;
    std::string replicationRecordId_;
    bool replicationRecordIdIsSet_;
    std::string sourceRegion_;
    bool sourceRegionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateRespBody_H_
