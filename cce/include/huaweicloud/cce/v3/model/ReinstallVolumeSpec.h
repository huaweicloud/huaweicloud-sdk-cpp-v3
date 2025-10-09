
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务器重装云硬盘配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallVolumeSpec
    : public ModelBase
{
public:
    ReinstallVolumeSpec();
    virtual ~ReinstallVolumeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallVolumeSpec members

    /// <summary>
    /// **参数解释**: 用户自定义镜像ID，从IMS控制台获取。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及
    /// </summary>

    std::string getImageID() const;
    bool imageIDIsSet() const;
    void unsetimageID();
    void setImageID(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户主密钥ID，为空时，表示云硬盘不加密。 [&gt; 获取密钥ID的方法请参考：[查询密钥列表](https://support.huaweicloud.com/api-dew/ListKeys.html)。](tag:hws) [&gt; 获取密钥ID的方法请参考：[查询密钥列表](https://support.huaweicloud.com/intl/zh-cn/api-dew/ListKeys.html)。](tag:hws_hk)  **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及。
    /// </summary>

    std::string getCmkID() const;
    bool cmkIDIsSet() const;
    void unsetcmkID();
    void setCmkID(const std::string& value);


protected:
    std::string imageID_;
    bool imageIDIsSet_;
    std::string cmkID_;
    bool cmkIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_
