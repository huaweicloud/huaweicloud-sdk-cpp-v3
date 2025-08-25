
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MasterEIPRequestSpec_spec.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MasterEIPRequestSpec
    : public ModelBase
{
public:
    MasterEIPRequestSpec();
    virtual ~MasterEIPRequestSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterEIPRequestSpec members

    /// <summary>
    /// 绑定或解绑动作，必选参数。 - 绑定：固定值为{\&quot;action\&quot;:\&quot;bind\&quot;} - 解绑：固定值为{\&quot;action\&quot;:\&quot;unbind\&quot;} 
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MasterEIPRequestSpec_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const MasterEIPRequestSpec_spec& value);

    /// <summary>
    /// 带宽(字段已失效，暂不推荐使用)
    /// </summary>

    std::string getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const std::string& value);

    /// <summary>
    /// 弹性网卡IP(字段已失效，暂不推荐使用)
    /// </summary>

    std::string getElasticIp() const;
    bool elasticIpIsSet() const;
    void unsetelasticIp();
    void setElasticIp(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    MasterEIPRequestSpec_spec spec_;
    bool specIsSet_;
    std::string bandwidth_;
    bool bandwidthIsSet_;
    std::string elasticIp_;
    bool elasticIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequestSpec_H_
