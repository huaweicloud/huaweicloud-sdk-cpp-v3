
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallServerConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallServerConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReinstallVolumeSpec.h>
#include <vector>
#include <huaweicloud/cce/v3/model/UserTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点重装场景服务器配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallServerConfig
    : public ModelBase
{
public:
    ReinstallServerConfig();
    virtual ~ReinstallServerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallServerConfig members

    /// <summary>
    /// **参数解释**： 云服务器标签（资源标签）。 **约束限制**： 键必须唯一，CCE支持的最大用户自定义标签数量依region而定，自定义标签数上限为8个。
    /// </summary>

    std::vector<UserTag>& getUserTags();
    bool userTagsIsSet() const;
    void unsetuserTags();
    void setUserTags(const std::vector<UserTag>& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallVolumeSpec getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const ReinstallVolumeSpec& value);


protected:
    std::vector<UserTag> userTags_;
    bool userTagsIsSet_;
    ReinstallVolumeSpec rootVolume_;
    bool rootVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallServerConfig_H_
