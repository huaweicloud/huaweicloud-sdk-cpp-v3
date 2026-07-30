
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_resource_requirements.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_metadata.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_advanced_config.h>
#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ChangeAlgorithmResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeAlgorithmResponse();
    virtual ~ChangeAlgorithmResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeAlgorithmResponse members

    /// <summary>
    /// 
    /// </summary>

    AlgorithmResponse_metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const AlgorithmResponse_metadata& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmResponse_job_config getJobConfig() const;
    bool jobConfigIsSet() const;
    void unsetjobConfig();
    void setJobConfig(const AlgorithmResponse_job_config& value);

    /// <summary>
    /// 算法资源约束，可不设置。设置后，在算法使用于训练作业时，控制台会过滤可用的公共资源池。
    /// </summary>

    std::vector<AlgorithmResponse_resource_requirements>& getResourceRequirements();
    bool resourceRequirementsIsSet() const;
    void unsetresourceRequirements();
    void setResourceRequirements(const std::vector<AlgorithmResponse_resource_requirements>& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmResponse_advanced_config getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AlgorithmResponse_advanced_config& value);


protected:
    AlgorithmResponse_metadata metadata_;
    bool metadataIsSet_;
    AlgorithmResponse_job_config jobConfig_;
    bool jobConfigIsSet_;
    std::vector<AlgorithmResponse_resource_requirements> resourceRequirements_;
    bool resourceRequirementsIsSet_;
    AlgorithmResponse_advanced_config advancedConfig_;
    bool advancedConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmResponse_H_
