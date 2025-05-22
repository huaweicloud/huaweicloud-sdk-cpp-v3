
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FullStages_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FullStages_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/BuildStageRecord.h>
#include <map>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  FullStages_result
    : public ModelBase
{
public:
    FullStages_result();
    virtual ~FullStages_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullStages_result members

    /// <summary>
    /// 构建步骤
    /// </summary>

    std::map<std::string, BuildStageRecord>& getBuildStages();
    bool buildStagesIsSet() const;
    void unsetbuildStages();
    void setBuildStages(const std::map<std::string, BuildStageRecord>& value);


protected:
    std::map<std::string, BuildStageRecord> buildStages_;
    bool buildStagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FullStages_result_H_
