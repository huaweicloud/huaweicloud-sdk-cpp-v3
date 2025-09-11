
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategy_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategy_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/VersionStrategyRules.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灰度策略信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  VersionStrategy
    : public ModelBase
{
public:
    VersionStrategy();
    virtual ~VersionStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionStrategy members

    /// <summary>
    /// 规则列表
    /// </summary>

    std::vector<VersionStrategyRules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<VersionStrategyRules>& value);

    /// <summary>
    /// 所有规则聚合方式。and：所有规则都满足，or：满足其中一个
    /// </summary>

    std::string getCombineType() const;
    bool combineTypeIsSet() const;
    void unsetcombineType();
    void setCombineType(const std::string& value);


protected:
    std::vector<VersionStrategyRules> rules_;
    bool rulesIsSet_;
    std::string combineType_;
    bool combineTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_VersionStrategy_H_
