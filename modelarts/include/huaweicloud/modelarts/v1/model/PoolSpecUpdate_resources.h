
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_resources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_resources_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecUpdate_resources
    : public ModelBase
{
public:
    PoolSpecUpdate_resources();
    virtual ~PoolSpecUpdate_resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecUpdate_resources members

    /// <summary>
    /// **参数解释**：资源规格。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：相应规格的资源数量。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：更新的AZ列表。
    /// </summary>

    std::vector<PoolNodeAz>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<PoolNodeAz>& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<PoolNodeAz> azs_;
    bool azsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecUpdate_resources_H_
