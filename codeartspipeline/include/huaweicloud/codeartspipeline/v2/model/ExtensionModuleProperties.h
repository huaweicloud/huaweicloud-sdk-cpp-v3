
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModuleProperties_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModuleProperties_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionExecution.h>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionParameter.h>
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
/// 扩展模块属性信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionModuleProperties
    : public ModelBase
{
public:
    ExtensionModuleProperties();
    virtual ~ExtensionModuleProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionModuleProperties members

    /// <summary>
    /// 构建清单版本
    /// </summary>

    std::string getBuildManifestVersion() const;
    bool buildManifestVersionIsSet() const;
    void unsetbuildManifestVersion();
    void setBuildManifestVersion(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 任务uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 操作系统
    /// </summary>

    std::string getOperationSystem() const;
    bool operationSystemIsSet() const;
    void unsetoperationSystem();
    void setOperationSystem(const std::string& value);

    /// <summary>
    /// 镜像来源
    /// </summary>

    std::string getImageSource() const;
    bool imageSourceIsSet() const;
    void unsetimageSource();
    void setImageSource(const std::string& value);

    /// <summary>
    /// 镜像名
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 图标路径
    /// </summary>

    std::string getIcon() const;
    bool iconIsSet() const;
    void unseticon();
    void setIcon(const std::string& value);

    /// <summary>
    /// 环境变量，按region映射。键为变量类别(如registry/mirror)，值为region到配置命令的映射。
    /// </summary>

    std::map<std::string, std::map<std::string, std::string>>& getEnvironmentVariables();
    bool environmentVariablesIsSet() const;
    void unsetenvironmentVariables();
    void setEnvironmentVariables(const std::map<std::string, std::map<std::string, std::string>>& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionExecution getExecution() const;
    bool executionIsSet() const;
    void unsetexecution();
    void setExecution(const ExtensionExecution& value);

    /// <summary>
    /// 用户可配置参数列表。
    /// </summary>

    std::vector<ExtensionParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<ExtensionParameter>& value);

    /// <summary>
    /// 内部标签。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    std::string buildManifestVersion_;
    bool buildManifestVersionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string operationSystem_;
    bool operationSystemIsSet_;
    std::string imageSource_;
    bool imageSourceIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string icon_;
    bool iconIsSet_;
    std::map<std::string, std::map<std::string, std::string>> environmentVariables_;
    bool environmentVariablesIsSet_;
    ExtensionExecution execution_;
    bool executionIsSet_;
    std::vector<ExtensionParameter> parameters_;
    bool parametersIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModuleProperties_H_
