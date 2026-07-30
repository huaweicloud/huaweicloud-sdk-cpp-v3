
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponseAlgorithm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponseAlgorithm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmEngine.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmOutput.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/AlgorithmInput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法管理算法配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskResponseAlgorithm
    : public ModelBase
{
public:
    TaskResponseAlgorithm();
    virtual ~TaskResponseAlgorithm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskResponseAlgorithm members

    /// <summary>
    /// 算法启动文件所在目录绝对路径。
    /// </summary>

    std::string getCodeDir() const;
    bool codeDirIsSet() const;
    void unsetcodeDir();
    void setCodeDir(const std::string& value);

    /// <summary>
    /// 算法启动文件绝对路径。
    /// </summary>

    std::string getBootFile() const;
    bool bootFileIsSet() const;
    void unsetbootFile();
    void setBootFile(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmInput getInputs() const;
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const AlgorithmInput& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmOutput getOutputs() const;
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const AlgorithmOutput& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmEngine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const AlgorithmEngine& value);

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
    /// **参数解释**：训练作业相关的环境变量。 **取值范围**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getEnvironments();
    bool environmentsIsSet() const;
    void unsetenvironments();
    void setEnvironments(const std::map<std::string, std::string>& value);


protected:
    std::string codeDir_;
    bool codeDirIsSet_;
    std::string bootFile_;
    bool bootFileIsSet_;
    AlgorithmInput inputs_;
    bool inputsIsSet_;
    AlgorithmOutput outputs_;
    bool outputsIsSet_;
    AlgorithmEngine engine_;
    bool engineIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskResponseAlgorithm_H_
