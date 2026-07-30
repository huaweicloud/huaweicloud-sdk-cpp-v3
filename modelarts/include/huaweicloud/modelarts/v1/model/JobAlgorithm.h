
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobEngine.h>
#include <huaweicloud/modelarts/v1/model/Output.h>
#include <huaweicloud/modelarts/v1/model/Summary.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/JobPolicies.h>
#include <huaweicloud/modelarts/v1/model/Parameters.h>
#include <huaweicloud/modelarts/v1/model/Input.h>
#include <map>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobAlgorithm
    : public ModelBase
{
public:
    JobAlgorithm();
    virtual ~JobAlgorithm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobAlgorithm members

    /// <summary>
    /// **参数解释**：算法管理的算法id。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：算法名称。无需填写。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：订阅算法的订阅ID。 **约束限制**：应与item_version_id一同出现。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// **参数解释**：订阅算法的版本。 **约束限制**：应与subscription_id一同出现。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getItemVersionId() const;
    bool itemVersionIdIsSet() const;
    void unsetitemVersionId();
    void setItemVersionId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的代码目录。如：“/usr/app/”。 **约束限制**：应与boot_file一同出现，如果boot_file填入id或subscription_id+item_version_id，则此参数无需填写。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getCodeDir() const;
    bool codeDirIsSet() const;
    void unsetcodeDir();
    void setCodeDir(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的代码启动文件，需要在代码目录下。如：“/usr/app/boot.py”。 **约束限制**：应与code_dir一同出现，如果code_dir填入id或subscription_id+item_version_id，则此参数无需填写。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getBootFile() const;
    bool bootFileIsSet() const;
    void unsetbootFile();
    void setBootFile(const std::string& value);

    /// <summary>
    /// **参数解释**：自动化搜索作业的yaml配置路径，需要提供一个OBS路径。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAutosearchConfigPath() const;
    bool autosearchConfigPathIsSet() const;
    void unsetautosearchConfigPath();
    void setAutosearchConfigPath(const std::string& value);

    /// <summary>
    /// **参数解释**：自动化搜索作业的框架代码目录，需要提供一个OBS路径。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAutosearchFrameworkPath() const;
    bool autosearchFrameworkPathIsSet() const;
    void unsetautosearchFrameworkPath();
    void setAutosearchFrameworkPath(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义镜像场景下，训练作业的自定义镜像的容器的启动命令。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的运行参数。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Parameters>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<Parameters>& value);

    /// <summary>
    /// 
    /// </summary>

    JobPolicies getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const JobPolicies& value);

    /// <summary>
    /// **参数解释**：训练作业的数据输入。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Input>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<Input>& value);

    /// <summary>
    /// **参数解释**：训练作业的结果输出。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Output>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<Output>& value);

    /// <summary>
    /// 
    /// </summary>

    JobEngine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const JobEngine& value);

    /// <summary>
    /// **参数解释**：算法的代码目录下载到训练容器内的本地路径。 **约束限制**： - 必须为/home下的目录。 - v1兼容模式下，当前字段不生效。 - 当code_dir以file://为前缀时，当前字段不生效。 - 不支持配置成/home/ma-user/modelarts，/home/ma-user/modelarts-dev，/home/ma-user/infer以及它们底下的目录，也不支持配置成/home/ma-user  **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getLocalCodeDir() const;
    bool localCodeDirIsSet() const;
    void unsetlocalCodeDir();
    void setLocalCodeDir(const std::string& value);

    /// <summary>
    /// **参数解释**：运行算法时所在的工作目录。 **约束限制**：v1兼容模式下，当前字段不生效。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getWorkingDir() const;
    bool workingDirIsSet() const;
    void unsetworkingDir();
    void setWorkingDir(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的环境变量。格式：\&quot;key\&quot;:\&quot;value\&quot;。 **约束限制**：其中key最大允许填写8192字符，value最大允许填写4096字符，最多允许100对环境变量。变量名应该仅包含字母、数字、下划线，且以字母或下划线开头。 注：不支持使用符号 $ 引用变量。
    /// </summary>

    std::map<std::string, std::string>& getEnvironments();
    bool environmentsIsSet() const;
    void unsetenvironments();
    void setEnvironments(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Summary getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const Summary& value);


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
    std::vector<Parameters> parameters_;
    bool parametersIsSet_;
    JobPolicies policies_;
    bool policiesIsSet_;
    std::vector<Input> inputs_;
    bool inputsIsSet_;
    std::vector<Output> outputs_;
    bool outputsIsSet_;
    JobEngine engine_;
    bool engineIsSet_;
    std::string localCodeDir_;
    bool localCodeDirIsSet_;
    std::string workingDir_;
    bool workingDirIsSet_;
    std::map<std::string, std::string> environments_;
    bool environmentsIsSet_;
    Summary summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithm_H_
