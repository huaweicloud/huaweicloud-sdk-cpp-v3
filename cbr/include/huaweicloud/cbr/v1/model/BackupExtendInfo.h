
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupExtendInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupExtendInfo_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cbr/v1/model/ImageData.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupExtendInfo
    : public ModelBase
{
public:
    BackupExtendInfo();
    virtual ~BackupExtendInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupExtendInfo members

    /// <summary>
    /// 是否是自动生成的备份副本
    /// </summary>

    bool isAutoTrigger() const;
    bool autoTriggerIsSet() const;
    void unsetautoTrigger();
    void setAutoTrigger(bool value);

    /// <summary>
    /// 是否系统盘备份
    /// </summary>

    bool isBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(bool value);

    /// <summary>
    /// 是否是增备
    /// </summary>

    bool isIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(bool value);

    /// <summary>
    /// 卷备份副本的快照id
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 是否支持lazyloading快速恢复
    /// </summary>

    bool isSupportLld() const;
    bool supportLldIsSet() const;
    void unsetsupportLld();
    void setSupportLld(bool value);

    /// <summary>
    /// 备份支持恢复的方式，当前取值包含na,snapshot和backup。如果该字段取值为snapshot，代表备份此时已经支持创建整机镜像；如果该字段取值为backup，备份支持通过云服务器上硬盘的备份进行恢复；如果该字段取值为na，备份不支持恢复。
    /// </summary>

    std::string getSupportedRestoreMode() const;
    bool supportedRestoreModeIsSet() const;
    void unsetsupportedRestoreMode();
    void setSupportedRestoreMode(const std::string& value);

    /// <summary>
    /// 备份注册镜像ID列表
    /// </summary>

    std::vector<ImageData>& getOsImagesData();
    bool osImagesDataIsSet() const;
    void unsetosImagesData();
    void setOsImagesData(const std::vector<ImageData>& value);

    /// <summary>
    /// 整机备份是否包含系统盘
    /// </summary>

    bool isContainSystemDisk() const;
    bool containSystemDiskIsSet() const;
    void unsetcontainSystemDisk();
    void setContainSystemDisk(bool value);

    /// <summary>
    /// 是否加密
    /// </summary>

    bool isEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(bool value);

    /// <summary>
    /// 是否是系统盘
    /// </summary>

    bool isSystemDisk() const;
    bool systemDiskIsSet() const;
    void unsetsystemDisk();
    void setSystemDisk(bool value);

    /// <summary>
    /// 备份类型是否为多AZ
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);


protected:
    bool autoTrigger_;
    bool autoTriggerIsSet_;
    bool bootable_;
    bool bootableIsSet_;
    bool incremental_;
    bool incrementalIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    bool supportLld_;
    bool supportLldIsSet_;
    std::string supportedRestoreMode_;
    bool supportedRestoreModeIsSet_;
    std::vector<ImageData> osImagesData_;
    bool osImagesDataIsSet_;
    bool containSystemDisk_;
    bool containSystemDiskIsSet_;
    bool encrypted_;
    bool encryptedIsSet_;
    bool systemDisk_;
    bool systemDiskIsSet_;
    bool isMultiAz_;
    bool isMultiAzIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupExtendInfo_H_
