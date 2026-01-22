
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleIdList_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleIdList_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleId.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 规则ID列表
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleIdList
    : public ModelBase
{
public:
    RuleIdList();
    virtual ~RuleIdList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleIdList members

    /// <summary>
    /// 规则id列表
    /// </summary>

    std::vector<RuleId>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<RuleId>& value);


protected:
    std::vector<RuleId> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleIdList_H_
