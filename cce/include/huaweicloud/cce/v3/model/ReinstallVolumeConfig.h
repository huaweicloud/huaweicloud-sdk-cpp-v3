
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/Storage.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点重装场景服务器相关配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallVolumeConfig
    : public ModelBase
{
public:
    ReinstallVolumeConfig();
    virtual ~ReinstallVolumeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallVolumeConfig members

    /// <summary>
    /// Docker数据盘配置项。  默认配置示例如下： &#x60;&#x60;&#x60; \&quot;lvmConfig\&quot;:\&quot;dockerThinpool&#x3D;vgpaas/90%VG;kubernetesLV&#x3D;vgpaas/10%VG;diskType&#x3D;evs;lvType&#x3D;linear\&quot; &#x60;&#x60;&#x60;  包含如下字段：   - userLV：用户空间的大小，示例格式：vgpaas/20%VG   - userPath：用户空间挂载路径，示例格式：/home/wqt-test   - diskType：磁盘类型，目前只有evs、hdd和ssd三种格式   - lvType：逻辑卷的类型，目前支持linear和striped两种，示例格式：striped   - dockerThinpool：Docker盘的空间大小，示例格式：vgpaas/60%VG   - kubernetesLV：Kubelet空间大小，示例格式：vgpaas/20%VG 
    /// </summary>

    std::string getLvmConfig() const;
    bool lvmConfigIsSet() const;
    void unsetlvmConfig();
    void setLvmConfig(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Storage getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(const Storage& value);


protected:
    std::string lvmConfig_;
    bool lvmConfigIsSet_;
    Storage storage_;
    bool storageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeConfig_H_
