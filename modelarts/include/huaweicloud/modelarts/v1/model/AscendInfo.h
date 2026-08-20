
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
    /// **参数解释：** NPU数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getNpu() const;
    bool npuIsSet() const;
    void unsetnpu();
    void setNpu(int32_t value);

    /// <summary>
    /// **参数解释：** NPU内存。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNpuMemory() const;
    bool npuMemoryIsSet() const;
    void unsetnpuMemory();
    void setNpuMemory(const std::string& value);

    /// <summary>
    /// **参数解释：** NPU类型。 **取值范围：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 切分规格中的ai_core。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAiCore() const;
    bool aiCoreIsSet() const;
    void unsetaiCore();
    void setAiCore(const std::string& value);

    /// <summary>
    /// **参数解释：** 切分规格中的ai_cpu。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAiCpu() const;
    bool aiCpuIsSet() const;
    void unsetaiCpu();
    void setAiCpu(const std::string& value);

    /// <summary>
    /// **参数解释：** 区分卡类型，如Snt9b3、Snt9b2 **取值范围：** 不涉及。
    /// </summary>

    std::string getTypeAlias() const;
    bool typeAliasIsSet() const;
    void unsettypeAlias();
    void setTypeAlias(const std::string& value);


protected:
    int32_t npu_;
    bool npuIsSet_;
    std::string npuMemory_;
    bool npuMemoryIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string aiCore_;
    bool aiCoreIsSet_;
    std::string aiCpu_;
    bool aiCpuIsSet_;
    std::string typeAlias_;
    bool typeAliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AscendInfo_H_
