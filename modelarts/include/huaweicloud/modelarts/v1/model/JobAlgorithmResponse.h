
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/OutputResp.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/InputResp.h>
#include <huaweicloud/modelarts/v1/model/SummaryResp.h>
#include <huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies.h>
#include <huaweicloud/modelarts/v1/model/JobEngineResp.h>
#include <map>
#include <huaweicloud/modelarts/v1/model/Parameter.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业算法。目前支持三种形式： - id：只取算法的id； - subscription_id+item_version_id：取算法的订阅id和版本id； - code_dir+boot_file：取训练作业的代码目录和启动文件。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobAlgorithmResponse
    : public ModelBase
{
public:
    JobAlgorithmResponse();
    virtual ~JobAlgorithmResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobAlgorithmResponse members

    /// <summary>
    /// 训练作业算法。目前支持三种形式：   - id：只取算法的id；   - subscription_id+item_version_id：取算法的订阅id和版本id；   - code_dir+boot_file：取训练作业的代码目录和启动文件。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 算法名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 订阅算法的订阅ID。应与item_version_id一同出现。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// 订阅算法的版本。应与subscription_id一同出现。
    /// </summary>

    std::string getItemVersionId() const;
    bool itemVersionIdIsSet() const;
    void unsetitemVersionId();
    void setItemVersionId(const std::string& value);

    /// <summary>
    /// 训练作业的代码目录。如：“/usr/app/”。应与boot_file一同出现，如果boot_file已经填入id或subscription_id+item_version_id，则无需填写此参数。
    /// </summary>

    std::string getCodeDir() const;
    bool codeDirIsSet() const;
    void unsetcodeDir();
    void setCodeDir(const std::string& value);

    /// <summary>
    /// 训练作业的代码启动文件，需要在代码目录下。如：“/usr/app/boot.py”。应与code_dir一同出现，如果code_dir已经填入id或subscription_id+item_version_id，则无需填写此参数。
    /// </summary>

    std::string getBootFile() const;
    bool bootFileIsSet() const;
    void unsetbootFile();
    void setBootFile(const std::string& value);

    /// <summary>
    /// 自动化搜索作业的yaml配置路径，需要提供一个OBS路径。如：“obs://bucket/file.yaml”。
    /// </summary>

    std::string getAutosearchConfigPath() const;
    bool autosearchConfigPathIsSet() const;
    void unsetautosearchConfigPath();
    void setAutosearchConfigPath(const std::string& value);

    /// <summary>
    /// 自动化搜索作业的框架代码目录，需要提供一个OBS路径。如：“obs://bucket/files/”。
    /// </summary>

    std::string getAutosearchFrameworkPath() const;
    bool autosearchFrameworkPathIsSet() const;
    void unsetautosearchFrameworkPath();
    void setAutosearchFrameworkPath(const std::string& value);

    /// <summary>
    /// 自定义镜像训练作业的自定义镜像的容器的启动命令。例如python train.py。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 训练作业的运行参数。
    /// </summary>

    std::vector<Parameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<Parameter>& value);

    /// <summary>
    /// 
    /// </summary>

    JobAlgorithmResponse_policies getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const JobAlgorithmResponse_policies& value);

    /// <summary>
    /// **参数解释**：训练作业的数据输入。
    /// </summary>

    std::vector<InputResp>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<InputResp>& value);

    /// <summary>
    /// **参数解释**：训练作业的结果输出。
    /// </summary>

    std::vector<OutputResp>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<OutputResp>& value);

    /// <summary>
    /// 
    /// </summary>

    JobEngineResp getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const JobEngineResp& value);

    /// <summary>
    /// 算法的代码目录下载到训练容器内的本地路径。规则如下： - 必须为/home下的目录； - v1兼容模式下，当前字段不生效； - 当code_dir以file://为前缀时，当前字段不生效。
    /// </summary>

    std::string getLocalCodeDir() const;
    bool localCodeDirIsSet() const;
    void unsetlocalCodeDir();
    void setLocalCodeDir(const std::string& value);

    /// <summary>
    /// 运行算法时所在的工作目录。规则：v1兼容模式下，当前字段不生效。
    /// </summary>

    std::string getWorkingDir() const;
    bool workingDirIsSet() const;
    void unsetworkingDir();
    void setWorkingDir(const std::string& value);

    /// <summary>
    /// 训练作业的环境变量。格式：\&quot;key\&quot;:\&quot;value\&quot;，无需填写。
    /// </summary>

    std::vector<std::map<std::string, std::string>>& getEnvironments();
    bool environmentsIsSet() const;
    void unsetenvironments();
    void setEnvironments(const std::vector<std::map<std::string, std::string>>& value);

    /// <summary>
    /// 
    /// </summary>

    SummaryResp getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const SummaryResp& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    std::string itemVersionId_;
    bool itemVersionIdIsSet_;
    std::string codeDir_;
    bool codeDirIsSet_;
    std::string bootFile_;
    bool bootFileIsSet_;
    std::string autosearchConfigPath_;
    bool autosearchConfigPathIsSet_;
    std::string autosearchFrameworkPath_;
    bool autosearchFrameworkPathIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::vector<Parameter> parameters_;
    bool parametersIsSet_;
    JobAlgorithmResponse_policies policies_;
    bool policiesIsSet_;
    std::vector<InputResp> inputs_;
    bool inputsIsSet_;
    std::vector<OutputResp> outputs_;
    bool outputsIsSet_;
    JobEngineResp engine_;
    bool engineIsSet_;
    std::string localCodeDir_;
    bool localCodeDirIsSet_;
    std::string workingDir_;
    bool workingDirIsSet_;
    std::vector<std::map<std::string, std::string>> environments_;
    bool environmentsIsSet_;
    SummaryResp summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_H_
