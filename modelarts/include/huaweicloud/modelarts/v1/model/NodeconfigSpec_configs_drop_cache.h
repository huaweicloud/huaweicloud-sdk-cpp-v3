
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_drop_cache_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_drop_cache_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：节点缓存清理配置。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigSpec_configs_drop_cache
    : public ModelBase
{
public:
    NodeconfigSpec_configs_drop_cache();
    virtual ~NodeconfigSpec_configs_drop_cache();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigSpec_configs_drop_cache members

    /// <summary>
    /// **参数解释**：缓存清理开关。 **约束限制**：不涉及。 **取值范围**：enable、disable。 **默认取值**：不涉及。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_drop_cache_H_
