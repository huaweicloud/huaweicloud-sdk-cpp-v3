
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespBody_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/CheckpointReplicateRespbackups.h>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointReplicateRespBody
    : public ModelBase
{
public:
    CheckpointReplicateRespBody();
    virtual ~CheckpointReplicateRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CheckpointReplicateRespBody members

    /// <summary>
    /// 待复制的备份列表
    /// </summary>

    std::vector<CheckpointReplicateRespbackups>& getBackups();
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::vector<CheckpointReplicateRespbackups>& value);

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
    /// 目标区域存储库ID
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
    /// 备份提供商ID
    /// </summary>

    std::string getProviderId() const;
    bool providerIdIsSet() const;
    void unsetproviderId();
    void setProviderId(const std::string& value);

    /// <summary>
    /// 复制的源区域
    /// </summary>

    std::string getSourceRegion() const;
    bool sourceRegionIsSet() const;
    void unsetsourceRegion();
    void setSourceRegion(const std::string& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::vector<CheckpointReplicateRespbackups> backups_;
    bool backupsIsSet_;
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
    std::string sourceRegion_;
    bool sourceRegionIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespBody_H_
