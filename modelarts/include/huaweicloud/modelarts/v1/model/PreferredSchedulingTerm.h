
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredSchedulingTerm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredSchedulingTerm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeSelectorTerm.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PreferredSchedulingTerm
    : public ModelBase
{
public:
    PreferredSchedulingTerm();
    virtual ~PreferredSchedulingTerm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreferredSchedulingTerm members

    /// <summary>
    /// **参数解释**：与匹配相应 nodeSelectorTerm 相关的权重 **约束限制**：不涉及。 **取值范围**：范围为 1-100。 **默认取值**：不涉及。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    NodeSelectorTerm getPreference() const;
    bool preferenceIsSet() const;
    void unsetpreference();
    void setPreference(const NodeSelectorTerm& value);


protected:
    int32_t weight_;
    bool weightIsSet_;
    NodeSelectorTerm preference_;
    bool preferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredSchedulingTerm_H_
