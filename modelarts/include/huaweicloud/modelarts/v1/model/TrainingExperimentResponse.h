
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TrainingExperimentResponseMetadata.h>
#include <huaweicloud/modelarts/v1/model/TrainingExperimentStatistic.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练实验。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TrainingExperimentResponse
    : public ModelBase
{
public:
    TrainingExperimentResponse();
    virtual ~TrainingExperimentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingExperimentResponse members

    /// <summary>
    /// 
    /// </summary>

    TrainingExperimentResponseMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const TrainingExperimentResponseMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    TrainingExperimentStatistic getStatistic() const;
    bool statisticIsSet() const;
    void unsetstatistic();
    void setStatistic(const TrainingExperimentStatistic& value);


protected:
    TrainingExperimentResponseMetadata metadata_;
    bool metadataIsSet_;
    TrainingExperimentStatistic statistic_;
    bool statisticIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingExperimentResponse_H_
