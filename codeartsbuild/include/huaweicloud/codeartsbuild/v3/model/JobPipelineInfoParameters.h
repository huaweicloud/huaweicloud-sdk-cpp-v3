
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoParameters_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoParameters_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobPipelineInfoParamsItems.h>
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
/// 任务流水线参数
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobPipelineInfoParameters
    : public ModelBase
{
public:
    JobPipelineInfoParameters();
    virtual ~JobPipelineInfoParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobPipelineInfoParameters members

    /// <summary>
    /// 地域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数值
    /// </summary>

    std::vector<JobPipelineInfoParamsItems>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<JobPipelineInfoParamsItems>& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<JobPipelineInfoParamsItems> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobPipelineInfoParameters_H_
