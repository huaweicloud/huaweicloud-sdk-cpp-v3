
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/KillOpRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowKillOpRuleRuleListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKillOpRuleRuleListResponse();
    virtual ~ShowKillOpRuleRuleListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKillOpRuleRuleListResponse members

    /// <summary>
    /// 规则列表。
    /// </summary>

    std::vector<KillOpRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<KillOpRule>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<KillOpRule> rules_;
    bool rulesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowKillOpRuleRuleListResponse_H_
