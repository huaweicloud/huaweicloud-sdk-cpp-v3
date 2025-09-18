
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/DiskSetAutoExpansionPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SetAutoEnlargePoliciesRequestBody
    : public ModelBase
{
public:
    SetAutoEnlargePoliciesRequestBody();
    virtual ~SetAutoEnlargePoliciesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoEnlargePoliciesRequestBody members

    /// <summary>
    /// **参数解释：** 自动扩容开关。 **约束限制：** 不涉及。 **取值范围：** - on:开启磁盘自动扩容策略。 - off: 关闭磁盘自动扩容策略。 **默认取值：** on。
    /// </summary>

    std::string getSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(const std::string& value);

    /// <summary>
    /// **参数解释：** 磁盘自动扩容策略。 **约束限制：** 最大支持设置10个实例的策略。 **取值范围：** 不涉及。 **默认取值：** 不涉及。 **参数解释：** 不涉及。
    /// </summary>

    std::vector<DiskSetAutoExpansionPolicy>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<DiskSetAutoExpansionPolicy>& value);


protected:
    std::string switchOption_;
    bool switchOptionIsSet_;
    std::vector<DiskSetAutoExpansionPolicy> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_
