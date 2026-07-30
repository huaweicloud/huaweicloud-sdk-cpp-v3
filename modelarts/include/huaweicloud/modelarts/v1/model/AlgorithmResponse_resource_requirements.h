
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_resource_requirements_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_resource_requirements_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_resource_requirements
    : public ModelBase
{
public:
    AlgorithmResponse_resource_requirements();
    virtual ~AlgorithmResponse_resource_requirements();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_resource_requirements members

    /// <summary>
    /// 资源约束，可选值如下： - 资源类型（flavor_type），对应值可选择CPU、GPU[或Ascend](tag:hc,hk,fcs_super)； - 是否支持多卡训练（device_distributed_mode），对应值可选择支持（multiple）、不支持（singular）； - 是否支持分布式训练（host_distributed_mode），对应值可选择支持（multiple）、不支持（singular）。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 资源约束键对应值。
    /// </summary>

    std::vector<std::string>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<std::string>& value);

    /// <summary>
    /// 键与值关系，当前只支持in。例如flavor_type in [CPU,GPU]。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> value_;
    bool valueIsSet_;
    std::string operator_;
    bool operatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_resource_requirements_H_
