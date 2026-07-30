
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityType_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityType_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AffinityRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AffinityType
    : public ModelBase
{
public:
    AffinityType();
    virtual ~AffinityType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AffinityType members

    /// <summary>
    /// 参数描述： 专属池场景下设置强亲和特性 参数约束： key、values、operator必填
    /// </summary>

    std::vector<AffinityRule>& getRequiredDuringSchedulingIgnoredDuringExecution();
    bool requiredDuringSchedulingIgnoredDuringExecutionIsSet() const;
    void unsetrequiredDuringSchedulingIgnoredDuringExecution();
    void setRequiredDuringSchedulingIgnoredDuringExecution(const std::vector<AffinityRule>& value);

    /// <summary>
    /// 参数描述： 专属池场景下设置弱亲和特性 参数约束： key、values、operator必填，weight选填
    /// </summary>

    std::vector<AffinityRule>& getPreferredDuringSchedulingIgnoredDuringExecution();
    bool preferredDuringSchedulingIgnoredDuringExecutionIsSet() const;
    void unsetpreferredDuringSchedulingIgnoredDuringExecution();
    void setPreferredDuringSchedulingIgnoredDuringExecution(const std::vector<AffinityRule>& value);


protected:
    std::vector<AffinityRule> requiredDuringSchedulingIgnoredDuringExecution_;
    bool requiredDuringSchedulingIgnoredDuringExecutionIsSet_;
    std::vector<AffinityRule> preferredDuringSchedulingIgnoredDuringExecution_;
    bool preferredDuringSchedulingIgnoredDuringExecutionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityType_H_
