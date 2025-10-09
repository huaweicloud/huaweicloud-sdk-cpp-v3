
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/ResourceRequirements.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PersistentVolumeClaimSpec
    : public ModelBase
{
public:
    PersistentVolumeClaimSpec();
    virtual ~PersistentVolumeClaimSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PersistentVolumeClaimSpec members

    /// <summary>
    /// 资源需为已经存在的存储资源 - 如果存储资源类型是SFS、EVS、SFS-Turbo，本参数需要填入对应资源的ID - 如果资源类型为OBS，本参数填入OBS名称
    /// </summary>

    std::string getVolumeID() const;
    bool volumeIDIsSet() const;
    void unsetvolumeID();
    void setVolumeID(const std::string& value);

    /// <summary>
    /// 云存储的类型，和volumeID搭配使用。即volumeID和storageType必须同时被配置。  - bs：EVS云存储 - nfs：SFS1.0弹性文件存储 - obs：OBS对象存储 - efs：SFS Turbo极速文件存储
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 指定volume应该具有的访问模式，列表中仅第一个配置参数有效。 - ReadWriteOnce：该卷可以被单个节点以读/写模式挂载   &gt;集群版本为v1.13.10且storage-driver版本为1.0.19时，才支持此功能。 - ReadOnlyMany：该卷可以被多个节点以只读模式挂载（默认） - ReadWriteMany：该卷可以被多个节点以读/写模式挂载
    /// </summary>

    std::vector<std::string>& getAccessModes();
    bool accessModesIsSet() const;
    void unsetaccessModes();
    void setAccessModes(const std::vector<std::string>& value);

    /// <summary>
    /// PVC的StorageClass名称
    /// </summary>

    std::string getStorageClassName() const;
    bool storageClassNameIsSet() const;
    void unsetstorageClassName();
    void setStorageClassName(const std::string& value);

    /// <summary>
    /// PVC绑定的PV名称
    /// </summary>

    std::string getVolumeName() const;
    bool volumeNameIsSet() const;
    void unsetvolumeName();
    void setVolumeName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceRequirements getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const ResourceRequirements& value);

    /// <summary>
    /// PVC指定的PV类型
    /// </summary>

    std::string getVolumeMode() const;
    bool volumeModeIsSet() const;
    void unsetvolumeMode();
    void setVolumeMode(const std::string& value);


protected:
    std::string volumeID_;
    bool volumeIDIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    std::vector<std::string> accessModes_;
    bool accessModesIsSet_;
    std::string storageClassName_;
    bool storageClassNameIsSet_;
    std::string volumeName_;
    bool volumeNameIsSet_;
    ResourceRequirements resources_;
    bool resourcesIsSet_;
    std::string volumeMode_;
    bool volumeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimSpec_H_
