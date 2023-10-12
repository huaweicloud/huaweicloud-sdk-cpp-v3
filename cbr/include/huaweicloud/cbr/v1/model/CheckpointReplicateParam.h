
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateParam_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateParam_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointReplicateParam
    : public ModelBase
{
public:
    CheckpointReplicateParam();
    virtual ~CheckpointReplicateParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointReplicateParam members

    /// <summary>
    /// 本次复制是否自动触发，默认为false，代表手动触发
    /// </summary>

    bool isAutoTrigger() const;
    bool autoTriggerIsSet() const;
    void unsetautoTrigger();
    void setAutoTrigger(bool value);

    /// <summary>
    /// 复制的目标项目ID
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 复制的目标区域id
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
    /// 跨区域复制时，是否启用加速从而缩短复制的时间，如果不指定，默认不启用加速，如果启用加速，会额外收取加速的费用。
    /// </summary>

    bool isEnableAcceleration() const;
    bool enableAccelerationIsSet() const;
    void unsetenableAcceleration();
    void setEnableAcceleration(bool value);

    /// <summary>
    /// 存储库ID: uuid
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    bool autoTrigger_;
    bool autoTriggerIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    bool enableAcceleration_;
    bool enableAccelerationIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateParam_H_
