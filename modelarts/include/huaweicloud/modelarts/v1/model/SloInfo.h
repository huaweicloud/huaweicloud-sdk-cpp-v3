
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/SloObjectives.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SLO配置信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SloInfo
    : public ModelBase
{
public:
    SloInfo();
    virtual ~SloInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SloInfo members

    /// <summary>
    /// **参数解释：** 仿真期望指标。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<SloObjectives>& getSloObjectives();
    bool sloObjectivesIsSet() const;
    void unsetsloObjectives();
    void setSloObjectives(const std::vector<SloObjectives>& value);

    /// <summary>
    /// **参数解释：** 预测时间窗口。 **约束限制：** 60~600。 **取值范围：** 不涉及。 **默认取值：** 60。
    /// </summary>

    int32_t getPredictWindowSeconds() const;
    bool predictWindowSecondsIsSet() const;
    void unsetpredictWindowSeconds();
    void setPredictWindowSeconds(int32_t value);


protected:
    std::vector<SloObjectives> sloObjectives_;
    bool sloObjectivesIsSet_;
    int32_t predictWindowSeconds_;
    bool predictWindowSecondsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SloInfo_H_
