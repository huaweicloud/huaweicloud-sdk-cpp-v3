
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqUpdateAssociatedResourceRules_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqUpdateAssociatedResourceRules_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ReqAssociatedResourceRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新规则入参
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqUpdateAssociatedResourceRules
    : public ModelBase
{
public:
    ReqUpdateAssociatedResourceRules();
    virtual ~ReqUpdateAssociatedResourceRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqUpdateAssociatedResourceRules members

    /// <summary>
    /// 批量更新的规则信息
    /// </summary>

    std::vector<ReqAssociatedResourceRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<ReqAssociatedResourceRule>& value);


protected:
    std::vector<ReqAssociatedResourceRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqUpdateAssociatedResourceRules_H_
