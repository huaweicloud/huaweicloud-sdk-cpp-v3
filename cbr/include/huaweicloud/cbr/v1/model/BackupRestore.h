
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestore_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestore_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cbr/v1/model/BackupRestoreServerMapping.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupRestore
    : public ModelBase
{
public:
    BackupRestore();
    virtual ~BackupRestore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupRestore members

    /// <summary>
    /// 恢复的映射关系(整机恢复时必填，卷恢复时可选但是不会用到填写的值）
    /// </summary>

    std::vector<BackupRestoreServerMapping>& getMappings();
    bool mappingsIsSet() const;
    void unsetmappings();
    void setMappings(const std::vector<BackupRestoreServerMapping>& value);

    /// <summary>
    /// 恢复后是否开始，默认开机。
    /// </summary>

    bool isPowerOn() const;
    bool powerOnIsSet() const;
    void unsetpowerOn();
    void setPowerOn(bool value);

    /// <summary>
    /// 恢复的目标虚拟机ID（整机恢复时必填）
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 恢复的目标卷ID（卷恢复时必填）
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 待恢复的目标资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::vector<BackupRestoreServerMapping> mappings_;
    bool mappingsIsSet_;
    bool powerOn_;
    bool powerOnIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestore_H_
