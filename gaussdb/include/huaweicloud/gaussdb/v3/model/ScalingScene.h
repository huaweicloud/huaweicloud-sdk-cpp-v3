
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingScene_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingScene_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScalingCondition.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**：  变配场景。  **约束限制**：  只支持扩容场景。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScalingScene
    : public ModelBase
{
public:
    ScalingScene();
    virtual ~ScalingScene();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScalingScene members

    /// <summary>
    /// **参数解释**:  变配条件。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<ScalingCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<ScalingCondition>& value);


protected:
    std::vector<ScalingCondition> conditions_;
    bool conditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingScene_H_
