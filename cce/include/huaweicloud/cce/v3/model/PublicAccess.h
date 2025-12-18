
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PublicAccess_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PublicAccess_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  PublicAccess
    : public ModelBase
{
public:
    PublicAccess();
    virtual ~PublicAccess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicAccess members

    /// <summary>
    /// **参数解释：** 允许访问集群API的白名单网段列表，建议对VPC网段、容器网段放通。 **约束限制：** 该字段仅支持创建集群时传入，更新时指定无效 **取值范围：** 不涉及 **默认取值：** 默认无白名单配置，为[\&quot;0.0.0.0/0\&quot;]。 
    /// </summary>

    std::vector<std::string>& getCidrs();
    bool cidrsIsSet() const;
    void unsetcidrs();
    void setCidrs(const std::vector<std::string>& value);


protected:
    std::vector<std::string> cidrs_;
    bool cidrsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PublicAccess_H_
