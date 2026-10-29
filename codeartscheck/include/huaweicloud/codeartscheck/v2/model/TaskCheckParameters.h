
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckParameters_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckParameters_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/CheckConfigInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务规则集的检查参数。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskCheckParameters
    : public ModelBase
{
public:
    TaskCheckParameters();
    virtual ~TaskCheckParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskCheckParameters members

    /// <summary>
    /// **参数解释：** 检查工具ID。 **取值范围:** ≥0
    /// </summary>

    int32_t getCheckId() const;
    bool checkIdIsSet() const;
    void unsetcheckId();
    void setCheckId(int32_t value);

    /// <summary>
    /// **参数解释：** 编译参数名称。 **取值范围:** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查参数配置信息。
    /// </summary>

    std::vector<CheckConfigInfo>& getCheckerConfigs();
    bool checkerConfigsIsSet() const;
    void unsetcheckerConfigs();
    void setCheckerConfigs(const std::vector<CheckConfigInfo>& value);


protected:
    int32_t checkId_;
    bool checkIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<CheckConfigInfo> checkerConfigs_;
    bool checkerConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckParameters_H_
