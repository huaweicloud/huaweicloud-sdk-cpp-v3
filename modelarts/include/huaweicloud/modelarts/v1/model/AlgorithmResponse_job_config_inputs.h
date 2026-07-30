
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_inputs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_inputs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config_remote_constraints.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_job_config_inputs
    : public ModelBase
{
public:
    AlgorithmResponse_job_config_inputs();
    virtual ~AlgorithmResponse_job_config_inputs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_job_config_inputs members

    /// <summary>
    /// 数据输入通道名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据输入通道描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据输入约束。
    /// </summary>

    std::vector<AlgorithmResponse_job_config_remote_constraints>& getRemoteConstraints();
    bool remoteConstraintsIsSet() const;
    void unsetremoteConstraints();
    void setRemoteConstraints(const std::vector<AlgorithmResponse_job_config_remote_constraints>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<AlgorithmResponse_job_config_remote_constraints> remoteConstraints_;
    bool remoteConstraintsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_inputs_H_
