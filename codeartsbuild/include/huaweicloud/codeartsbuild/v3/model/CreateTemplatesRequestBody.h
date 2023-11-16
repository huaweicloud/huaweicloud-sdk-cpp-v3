
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameter.h>
#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建作业模板接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateTemplatesRequestBody
    : public ModelBase
{
public:
    CreateTemplatesRequestBody();
    virtual ~CreateTemplatesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplatesRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateTemplate getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const CreateTemplate& value);

    /// <summary>
    /// 模板命名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板说明
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工具类型
    /// </summary>

    std::string getToolType() const;
    bool toolTypeIsSet() const;
    void unsettoolType();
    void setToolType(const std::string& value);

    /// <summary>
    /// 构建执行参数列表
    /// </summary>

    std::vector<CreateBuildJobParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<CreateBuildJobParameter>& value);


protected:
    CreateTemplate template_;
    bool templateIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string toolType_;
    bool toolTypeIsSet_;
    std::vector<CreateBuildJobParameter> parameters_;
    bool parametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequestBody_H_
