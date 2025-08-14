
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplateVo_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplateVo_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobSteps.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板中构建执行步骤列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  QueryTemplateVo
    : public ModelBase
{
public:
    QueryTemplateVo();
    virtual ~QueryTemplateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTemplateVo members

    /// <summary>
    /// 构建执行的步骤。
    /// </summary>

    std::vector<CreateBuildJobSteps>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<CreateBuildJobSteps>& value);

    /// <summary>
    /// 构建步骤中的action。
    /// </summary>

    Object getActions() const;
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const Object& value);

    /// <summary>
    /// 是否自动更新子模块。
    /// </summary>

    bool isAutoUpdateSubModule() const;
    bool autoUpdateSubModuleIsSet() const;
    void unsetautoUpdateSubModule();
    void setAutoUpdateSubModule(bool value);

    /// <summary>
    /// 配置镜像地址。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 配置镜像源的地址。
    /// </summary>

    std::string getImageSource() const;
    bool imageSourceIsSet() const;
    void unsetimageSource();
    void setImageSource(const std::string& value);


protected:
    std::vector<CreateBuildJobSteps> steps_;
    bool stepsIsSet_;
    Object actions_;
    bool actionsIsSet_;
    bool autoUpdateSubModule_;
    bool autoUpdateSubModuleIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string imageSource_;
    bool imageSourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplateVo_H_
