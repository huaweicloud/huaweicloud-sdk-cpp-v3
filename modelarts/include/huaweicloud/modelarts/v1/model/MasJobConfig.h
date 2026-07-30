
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MasJobConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MasJobConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TaskEnv.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/CheckpointConf.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 精调训练作业参数
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MasJobConfig
    : public ModelBase
{
public:
    MasJobConfig();
    virtual ~MasJobConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasJobConfig members

    /// <summary>
    /// 模型ID
    /// </summary>

    std::string getFtJobUuid() const;
    bool ftJobUuidIsSet() const;
    void unsetftJobUuid();
    void setFtJobUuid(const std::string& value);

    /// <summary>
    /// 模型训练类型
    /// </summary>

    std::string getFtTrainType() const;
    bool ftTrainTypeIsSet() const;
    void unsetftTrainType();
    void setFtTrainType(const std::string& value);

    /// <summary>
    /// 模型类型
    /// </summary>

    std::string getModelType() const;
    bool modelTypeIsSet() const;
    void unsetmodelType();
    void setModelType(const std::string& value);

    /// <summary>
    /// 训练作业输出路径
    /// </summary>

    std::string getTrainOutputPath() const;
    bool trainOutputPathIsSet() const;
    void unsettrainOutputPath();
    void setTrainOutputPath(const std::string& value);

    /// <summary>
    /// 训练作业进度
    /// </summary>

    double getTrainProcess() const;
    bool trainProcessIsSet() const;
    void unsettrainProcess();
    void setTrainProcess(double value);

    /// <summary>
    /// 断点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskEnv getTaskEnv() const;
    bool taskEnvIsSet() const;
    void unsettaskEnv();
    void setTaskEnv(const TaskEnv& value);

    /// <summary>
    /// 
    /// </summary>

    CheckpointConf getCheckpointConfig() const;
    bool checkpointConfigIsSet() const;
    void unsetcheckpointConfig();
    void setCheckpointConfig(const CheckpointConf& value);


protected:
    std::string ftJobUuid_;
    bool ftJobUuidIsSet_;
    std::string ftTrainType_;
    bool ftTrainTypeIsSet_;
    std::string modelType_;
    bool modelTypeIsSet_;
    std::string trainOutputPath_;
    bool trainOutputPathIsSet_;
    double trainProcess_;
    bool trainProcessIsSet_;
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    TaskEnv taskEnv_;
    bool taskEnvIsSet_;
    CheckpointConf checkpointConfig_;
    bool checkpointConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MasJobConfig_H_
