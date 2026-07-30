
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceRequirement_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceRequirement_H_


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
/// 算法资源约束。可不设置。设置后，在算法使用于训练作业时，控制台会过滤可用的公共资源池。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceRequirement
    : public ModelBase
{
public:
    ResourceRequirement();
    virtual ~ResourceRequirement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceRequirement members

    /// <summary>
    /// 资源约束，可选键值如： - flavor_type（资源类型），对应值可选择CPU、GPU[或Ascend](tag:hc,hk,fcs_super)； - device_distributed_mode（是否支持多卡训练），对应值可选择multiple（支持）、singular（不支持）； - host_distributed_mode（是否支持分布式训练），对应值可选择multiple（支持）、singular（不支持）。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 资源约束键对应值。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);

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
    std::vector<std::string> values_;
    bool valuesIsSet_;
    std::string operator_;
    bool operatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceRequirement_H_
