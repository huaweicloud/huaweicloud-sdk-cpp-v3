
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParamsBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParamsBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/BuildParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildParamsBody_result
    : public ModelBase
{
public:
    BuildParamsBody_result();
    virtual ~BuildParamsBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildParamsBody_result members

    /// <summary>
    /// 构建参数约束列表
    /// </summary>

    std::vector<BuildParams>& getBuildParameters();
    bool buildParametersIsSet() const;
    void unsetbuildParameters();
    void setBuildParameters(const std::vector<BuildParams>& value);


protected:
    std::vector<BuildParams> buildParameters_;
    bool buildParametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParamsBody_result_H_
