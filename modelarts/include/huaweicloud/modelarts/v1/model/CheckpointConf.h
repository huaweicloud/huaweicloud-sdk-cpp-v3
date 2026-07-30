
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckpointConf_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckpointConf_H_


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
/// 断点配置信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CheckpointConf
    : public ModelBase
{
public:
    CheckpointConf();
    virtual ~CheckpointConf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointConf members

    /// <summary>
    /// 断点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 保存续训任务的步数。 0：关闭不保，-1：自动无限制。
    /// </summary>

    int32_t getSaveCheckpointsMax() const;
    bool saveCheckpointsMaxIsSet() const;
    void unsetsaveCheckpointsMax();
    void setSaveCheckpointsMax(int32_t value);

    /// <summary>
    /// 跳过步数，0表示不跳过。
    /// </summary>

    int32_t getSkippedSteps() const;
    bool skippedStepsIsSet() const;
    void unsetskippedSteps();
    void setSkippedSteps(int32_t value);

    /// <summary>
    /// 是否续训任务。  0：非续训,，1:续训。
    /// </summary>

    int32_t getRestoreTraining() const;
    bool restoreTrainingIsSet() const;
    void unsetrestoreTraining();
    void setRestoreTraining(int32_t value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    int32_t saveCheckpointsMax_;
    bool saveCheckpointsMaxIsSet_;
    int32_t skippedSteps_;
    bool skippedStepsIsSet_;
    int32_t restoreTraining_;
    bool restoreTrainingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckpointConf_H_
