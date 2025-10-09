
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CustomScalingConfig_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CustomScalingConfig_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScalingScene.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**:  自定义扩容策略。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CustomScalingConfig
    : public ModelBase
{
public:
    CustomScalingConfig();
    virtual ~CustomScalingConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomScalingConfig members

    /// <summary>
    /// 
    /// </summary>

    ScalingScene getEnlargeScene() const;
    bool enlargeSceneIsSet() const;
    void unsetenlargeScene();
    void setEnlargeScene(const ScalingScene& value);


protected:
    ScalingScene enlargeScene_;
    bool enlargeSceneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CustomScalingConfig_H_
