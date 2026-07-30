
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AscendInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AscendInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AscendInfo
    : public ModelBase
{
public:
    AscendInfo();
    virtual ~AscendInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AscendInfo members

    /// <summary>
    /// **参数解释**：NPU数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getNpu() const;
    bool npuIsSet() const;
    void unsetnpu();
    void setNpu(int32_t value);

    /// <summary>
    /// **参数解释**：NPU内存。 **取值范围**：不涉及。
    /// </summary>

    std::string getNpuMemory() const;
    bool npuMemoryIsSet() const;
    void unsetnpuMemory();
    void setNpuMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：NPU类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：NPU设备数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getChip() const;
    bool chipIsSet() const;
    void unsetchip();
    void setChip(int32_t value);


protected:
    int32_t npu_;
    bool npuIsSet_;
    std::string npuMemory_;
    bool npuMemoryIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t chip_;
    bool chipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AscendInfo_H_
