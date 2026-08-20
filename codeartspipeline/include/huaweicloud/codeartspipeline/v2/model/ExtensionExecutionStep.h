
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecutionStep_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecutionStep_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 执行步骤
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionExecutionStep
    : public ModelBase
{
public:
    ExtensionExecutionStep();
    virtual ~ExtensionExecutionStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionExecutionStep members

    /// <summary>
    /// DSL方法名，如 preOperationsNpm/sh/releasemanArtifactsUploader
    /// </summary>

    std::string getDslMethod() const;
    bool dslMethodIsSet() const;
    void unsetdslMethod();
    void setDslMethod(const std::string& value);

    /// <summary>
    /// 步骤显示名
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 执行模式，如 serial
    /// </summary>

    std::string getExecutionMode() const;
    bool executionModeIsSet() const;
    void unsetexecutionMode();
    void setExecutionMode(const std::string& value);

    /// <summary>
    /// 步骤参数，键值对，值多为 $${...} 变量引用语法。
    /// </summary>

    std::map<std::string, std::string>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::map<std::string, std::string>& value);


protected:
    std::string dslMethod_;
    bool dslMethodIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string executionMode_;
    bool executionModeIsSet_;
    std::map<std::string, std::string> parameters_;
    bool parametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExecutionStep_H_
