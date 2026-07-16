
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 带宽信息 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  EipSpec_bandwidth
    : public ModelBase
{
public:
    EipSpec_bandwidth();
    virtual ~EipSpec_bandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipSpec_bandwidth members

    /// <summary>
    /// **参数解释**： 带宽大小 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**： 带宽类型 **约束限制**： 不涉及 **取值范围**： - PER：独享带宽，支持对单个EIP进行限速，且该EIP仅能被一个云资源（弹性云服务器、NAT网关、弹性负载均衡等）使用 - WHOLE：共享带宽，支持对多个EIP集中限速，支持添加多个按需计费的EIP  **默认取值**： 不涉及 
    /// </summary>

    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_
