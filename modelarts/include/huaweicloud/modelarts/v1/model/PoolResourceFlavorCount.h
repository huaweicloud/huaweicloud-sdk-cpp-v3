
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavorCount_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavorCount_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolNodeAz.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池资源规格资源量数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolResourceFlavorCount
    : public ModelBase
{
public:
    PoolResourceFlavorCount();
    virtual ~PoolResourceFlavorCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolResourceFlavorCount members

    /// <summary>
    /// **参数解释**：资源规格ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池中资源规格实例数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源池中资源规格实例弹性数量。物理池中该值和count相同。 **取值范围**：不涉及。
    /// </summary>

    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源池中期望创建的资源规格实例的az分布。
    /// </summary>

    std::vector<PoolNodeAz>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<PoolNodeAz>& value);

    /// <summary>
    /// **参数解释**：节点池ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getNodePool() const;
    bool nodePoolIsSet() const;
    void unsetnodePool();
    void setNodePool(const std::string& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    std::vector<PoolNodeAz> azs_;
    bool azsIsSet_;
    std::string nodePool_;
    bool nodePoolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavorCount_H_
