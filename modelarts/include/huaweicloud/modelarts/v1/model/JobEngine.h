
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEngine_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEngine_H_


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
/// 训练作业的引擎。使用算法管理的算法id或订阅算法subscription_id+item_version_id创建作业时，无需填写。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobEngine
    : public ModelBase
{
public:
    JobEngine();
    virtual ~JobEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobEngine members

    /// <summary>
    /// 训练作业选择的引擎规格ID。engine_id，engine_name+engine_version和image_url方式三选一。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);

    /// <summary>
    /// 训练作业选择的引擎名称。如果已填写engine_id，则此参数无需填写。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 训练作业选择的引擎版本名称。如果已填写engine_id，则此参数无需填写。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 训练作业选择的自定义镜像地址，地址从swr服务获取。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 是否需要安装训练平台指定的 moxing 版本。true为需要。只有填写了engine_name，engine_version，image_url参数时支持该设置。
    /// </summary>

    bool isInstallSysPackages() const;
    bool installSysPackagesIsSet() const;
    void unsetinstallSysPackages();
    void setInstallSysPackages(bool value);

    /// <summary>
    /// **参数解释**：SWR企业仓实例ID，使用企业仓镜像时需传入。 **取值范围**：不涉及。
    /// </summary>

    std::string getImageRepoId() const;
    bool imageRepoIdIsSet() const;
    void unsetimageRepoId();
    void setImageRepoId(const std::string& value);


protected:
    std::string engineId_;
    bool engineIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    bool installSysPackages_;
    bool installSysPackagesIsSet_;
    std::string imageRepoId_;
    bool imageRepoIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEngine_H_
