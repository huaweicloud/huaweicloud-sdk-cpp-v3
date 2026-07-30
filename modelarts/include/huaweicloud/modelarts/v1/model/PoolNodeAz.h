
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolNodeAz_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolNodeAz_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池中节点的AZ信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolNodeAz
    : public ModelBase
{
public:
    PoolNodeAz();
    virtual ~PoolNodeAz();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolNodeAz members

    /// <summary>
    /// **参数解释**：可用区名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// **参数解释**：可用区资源实例的数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::string az_;
    bool azIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolNodeAz_H_
