
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineLatestRun_artifact_params_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineLatestRun_artifact_params_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 制品源参数。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineLatestRun_artifact_params
    : public ModelBase
{
public:
    PipelineLatestRun_artifact_params();
    virtual ~PipelineLatestRun_artifact_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineLatestRun_artifact_params members

    /// <summary>
    /// **参数解释**： 包版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 过滤分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBranchFilter() const;
    bool branchFilterIsSet() const;
    void unsetbranchFilter();
    void setBranchFilter(const std::string& value);

    /// <summary>
    /// **参数解释**： 包名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// **参数解释**： docker组织。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOrganization() const;
    bool organizationIsSet() const;
    void unsetorganization();
    void setOrganization(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string branchFilter_;
    bool branchFilterIsSet_;
    std::string packageName_;
    bool packageNameIsSet_;
    std::string organization_;
    bool organizationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineLatestRun_artifact_params_H_
