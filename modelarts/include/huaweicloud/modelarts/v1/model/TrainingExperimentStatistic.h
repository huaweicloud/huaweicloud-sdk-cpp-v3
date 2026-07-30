
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentStatistic_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentStatistic_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练实验的统计数据。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TrainingExperimentStatistic
    : public ModelBase
{
public:
    TrainingExperimentStatistic();
    virtual ~TrainingExperimentStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingExperimentStatistic members

    /// <summary>
    /// **参数解释**：当前实验下的训练作业总个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getJobCount() const;
    bool jobCountIsSet() const;
    void unsetjobCount();
    void setJobCount(int32_t value);


protected:
    int32_t jobCount_;
    bool jobCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentStatistic_H_
