
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmJobConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmJobConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmCreateEngine.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmCreateOutput.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/Parameters.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/AlgorithmCreateInput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法配置信息，如启动文件等。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmJobConfig
    : public ModelBase
{
public:
    AlgorithmJobConfig();
    virtual ~AlgorithmJobConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmJobConfig members

    /// <summary>
    /// 算法的代码目录。如：“/usr/app/”。应与boot_file一同出现。
    /// </summary>

    std::string getCodeDir() const;
    bool codeDirIsSet() const;
    void unsetcodeDir();
    void setCodeDir(const std::string& value);

    /// <summary>
    /// 算法的代码启动文件，需要在代码目录下。如：“/usr/app/boot.py”。应与code_dir一同出现。
    /// </summary>

    std::string getBootFile() const;
    bool bootFileIsSet() const;
    void unsetbootFile();
    void setBootFile(const std::string& value);

    /// <summary>
    /// 自定义镜像算法的容器启动命令。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 算法的运行参数。
    /// </summary>

    std::vector<Parameters>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<Parameters>& value);

    /// <summary>
    /// 算法的数据输入。
    /// </summary>

    std::vector<AlgorithmCreateInput>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<AlgorithmCreateInput>& value);

    /// <summary>
    /// 算法的数据输出。
    /// </summary>

    std::vector<AlgorithmCreateOutput>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<AlgorithmCreateOutput>& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmCreateEngine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const AlgorithmCreateEngine& value);

    /// <summary>
    /// 算法是否允许创建训练作业时自定义超参。
    /// </summary>

    bool isParametersCustomization() const;
    bool parametersCustomizationIsSet() const;
    void unsetparametersCustomization();
    void setParametersCustomization(bool value);


protected:
    std::string codeDir_;
    bool codeDirIsSet_;
    std::string bootFile_;
    bool bootFileIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::vector<Parameters> parameters_;
    bool parametersIsSet_;
    std::vector<AlgorithmCreateInput> inputs_;
    bool inputsIsSet_;
    std::vector<AlgorithmCreateOutput> outputs_;
    bool outputsIsSet_;
    AlgorithmCreateEngine engine_;
    bool engineIsSet_;
    bool parametersCustomization_;
    bool parametersCustomizationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmJobConfig_H_
