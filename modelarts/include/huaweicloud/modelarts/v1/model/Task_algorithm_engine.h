
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_engine_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_engine_H_


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
/// **参数解释**：异构作业算法的引擎。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task_algorithm_engine
    : public ModelBase
{
public:
    Task_algorithm_engine();
    virtual ~Task_algorithm_engine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task_algorithm_engine members

    /// <summary>
    /// **参数解释**：异构作业引擎规格的ID。如“caffe-1.0.0-python2.7”。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);

    /// <summary>
    /// **参数解释**：异构作业引擎规格的名称。如“Caffe”。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// **参数解释**：异构作业引擎规格的版本。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：算法选择的自定义镜像地址。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：容器镜像启动用户，默认为1000，仅自定义镜像场景下支持配置。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getRunUser() const;
    bool runUserIsSet() const;
    void unsetrunUser();
    void setRunUser(const std::string& value);


protected:
    std::string engineId_;
    bool engineIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    std::string runUser_;
    bool runUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_engine_H_
