
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainingExperimentRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainingExperimentRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TrainingExperimentRequestMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练实验创建请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateTrainingExperimentRequestBody
    : public ModelBase
{
public:
    CreateTrainingExperimentRequestBody();
    virtual ~CreateTrainingExperimentRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrainingExperimentRequestBody members

    /// <summary>
    /// 
    /// </summary>

    TrainingExperimentRequestMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const TrainingExperimentRequestMetadata& value);


protected:
    TrainingExperimentRequestMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainingExperimentRequestBody_H_
