
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheBuildingConfig_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheBuildingConfig_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像缓存构建配置信息。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ImageCacheBuildingConfig
    : public ModelBase
{
public:
    ImageCacheBuildingConfig();
    virtual ~ImageCacheBuildingConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageCacheBuildingConfig members

    /// <summary>
    /// **参数解释：** 构建镜像缓存所启动的临时Pod所在的Autopilot集群的UID。 **约束限制：** 要求使用的Autopilot集群版本为v1.28.8-r0或v1.31.4-r0以上版本。 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getCluster() const;
    bool clusterIsSet() const;
    void unsetcluster();
    void setCluster(const std::string& value);

    /// <summary>
    /// 下载所需缓存镜像的访问凭证列表，不填写或无有效凭证时仅支持下载公共镜像。
    /// </summary>

    std::vector<std::string>& getImagePullSecrets();
    bool imagePullSecretsIsSet() const;
    void unsetimagePullSecrets();
    void setImagePullSecrets(const std::vector<std::string>& value);


protected:
    std::string cluster_;
    bool clusterIsSet_;
    std::vector<std::string> imagePullSecrets_;
    bool imagePullSecretsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ImageCacheBuildingConfig_H_
