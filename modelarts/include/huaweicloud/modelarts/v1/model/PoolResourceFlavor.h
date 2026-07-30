
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Os.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolResourceFlavor_extendParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池规格数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolResourceFlavor
    : public ModelBase
{
public:
    PoolResourceFlavor();
    virtual ~PoolResourceFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolResourceFlavor members

    /// <summary>
    /// **参数解释**：资源规格，比如：modelarts.vm.gpu.tnt004。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格的保障资源量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源规格的弹性资源量。物理池中该值和count必须一致。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PoolResourceFlavor_extendParams getExtendParams() const;
    bool extendParamsIsSet() const;
    void unsetextendParams();
    void setExtendParams(const PoolResourceFlavor_extendParams& value);

    /// <summary>
    /// 
    /// </summary>

    Os getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const Os& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    PoolResourceFlavor_extendParams extendParams_;
    bool extendParamsIsSet_;
    Os os_;
    bool osIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_H_
