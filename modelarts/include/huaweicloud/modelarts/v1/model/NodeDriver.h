
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeDriver_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeDriver_H_


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
/// 节点驱动。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeDriver
    : public ModelBase
{
public:
    NodeDriver();
    virtual ~NodeDriver();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeDriver members

    /// <summary>
    /// **参数解释**：节点上驱动的版本号。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：节点驱动升级策略。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUpdateStrategy() const;
    bool updateStrategyIsSet() const;
    void unsetupdateStrategy();
    void setUpdateStrategy(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string updateStrategy_;
    bool updateStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeDriver_H_
