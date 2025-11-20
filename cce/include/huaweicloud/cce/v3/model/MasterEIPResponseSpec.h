
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MasterEIPResponseSpec_spec.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  MasterEIPResponseSpec
    : public ModelBase
{
public:
    MasterEIPResponseSpec();
    virtual ~MasterEIPResponseSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterEIPResponseSpec members

    /// <summary>
    /// **参数解释**： 绑定动作 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MasterEIPResponseSpec_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const MasterEIPResponseSpec_spec& value);

    /// <summary>
    /// **参数解释**： 弹性公网IP **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getElasticIp() const;
    bool elasticIpIsSet() const;
    void unsetelasticIp();
    void setElasticIp(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    MasterEIPResponseSpec_spec spec_;
    bool specIsSet_;
    std::string elasticIp_;
    bool elasticIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_H_
