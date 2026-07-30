
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Algorithm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Algorithm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmMetadata.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmJobConfig.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmAdvancedConfig.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ResourceRequirement.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法管理算法配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Algorithm
    : public ModelBase
{
public:
    Algorithm();
    virtual ~Algorithm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Algorithm members

    /// <summary>
    /// 
    /// </summary>

    AlgorithmMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const AlgorithmMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmJobConfig getJobConfig() const;
    bool jobConfigIsSet() const;
    void unsetjobConfig();
    void setJobConfig(const AlgorithmJobConfig& value);

    /// <summary>
    /// 算法资源约束。可不设置。设置后，在算法使用于训练作业时，控制台会过滤可用的公共资源池。
    /// </summary>

    std::vector<ResourceRequirement>& getResourceRequirements();
    bool resourceRequirementsIsSet() const;
    void unsetresourceRequirements();
    void setResourceRequirements(const std::vector<ResourceRequirement>& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmAdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AlgorithmAdvancedConfig& value);


protected:
    AlgorithmMetadata metadata_;
    bool metadataIsSet_;
    AlgorithmJobConfig jobConfig_;
    bool jobConfigIsSet_;
    std::vector<ResourceRequirement> resourceRequirements_;
    bool resourceRequirementsIsSet_;
    AlgorithmAdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Algorithm_H_
