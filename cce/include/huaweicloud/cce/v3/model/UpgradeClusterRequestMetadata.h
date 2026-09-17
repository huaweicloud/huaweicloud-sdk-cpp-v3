
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestMetadata_H_


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
/// **参数解释：** 集群升级请求元数据。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeClusterRequestMetadata
    : public ModelBase
{
public:
    UpgradeClusterRequestMetadata();
    virtual ~UpgradeClusterRequestMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeClusterRequestMetadata members

    /// <summary>
    /// **参数解释：** API版本，固定值\&quot;v3\&quot;，该值不可修改。 **约束限制：** 该值不可修改 **取值范围：** - v3  **默认取值：** v3
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** API类型，固定值\&quot;UpgradeTask\&quot;，该值不可修改。 **约束限制：** 该值不可修改 **取值范围：** - UpgradeTask  **默认取值：** UpgradeTask
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestMetadata_H_
