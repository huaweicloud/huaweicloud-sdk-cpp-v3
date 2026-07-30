
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Task_algorithm_inputs.h>
#include <huaweicloud/modelarts/v1/model/Task_algorithm_outputs.h>
#include <string>
#include <map>
#include <huaweicloud/modelarts/v1/model/Task_algorithm_engine.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/Task_algorithm_job_config.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：算法管理算法配置。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Task_algorithm
    : public ModelBase
{
public:
    Task_algorithm();
    virtual ~Task_algorithm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Task_algorithm members

    /// <summary>
    /// 
    /// </summary>

    Task_algorithm_job_config getJobConfig() const;
    bool jobConfigIsSet() const;
    void unsetjobConfig();
    void setJobConfig(const Task_algorithm_job_config& value);

    /// <summary>
    /// **参数解释**：算法的代码目录。如：“/usr/app/”。 **约束限制**：应与boot_file一同出现。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getCodeDir() const;
    bool codeDirIsSet() const;
    void unsetcodeDir();
    void setCodeDir(const std::string& value);

    /// <summary>
    /// **参数解释**：算法的代码启动文件，需要在代码目录下。如：“/usr/app/boot.py”。 **约束限制**：应与code_dir一同出现。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getBootFile() const;
    bool bootFileIsSet() const;
    void unsetbootFile();
    void setBootFile(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Task_algorithm_engine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const Task_algorithm_engine& value);

    /// <summary>
    /// **参数解释**：算法的数据输入。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Task_algorithm_inputs>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<Task_algorithm_inputs>& value);

    /// <summary>
    /// **参数解释**：算法的数据输出。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Task_algorithm_outputs>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<Task_algorithm_outputs>& value);

    /// <summary>
    /// **参数解释**：算法的代码目录下载到训练容器内的本地路径。 **约束限制**： - 必须为/home下的目录； - v1兼容模式下，当前字段不生效； - 当code_dir以file://为前缀时，当前字段不生效。  **取值范围**：不涉及。 **默认取值**：不涉及。
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
    /// **参数解释**：训练作业环境变量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getEnvironments();
    bool environmentsIsSet() const;
    void unsetenvironments();
    void setEnvironments(const std::map<std::string, std::string>& value);


protected:
    Task_algorithm_job_config jobConfig_;
    bool jobConfigIsSet_;
    std::string codeDir_;
    bool codeDirIsSet_;
    std::string bootFile_;
    bool bootFileIsSet_;
    Task_algorithm_engine engine_;
    bool engineIsSet_;
    std::vector<Task_algorithm_inputs> inputs_;
    bool inputsIsSet_;
    std::vector<Task_algorithm_outputs> outputs_;
    bool outputsIsSet_;
    std::string localCodeDir_;
    bool localCodeDirIsSet_;
    std::string workingDir_;
    bool workingDirIsSet_;
    std::map<std::string, std::string> environments_;
    bool environmentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Task_algorithm_H_
