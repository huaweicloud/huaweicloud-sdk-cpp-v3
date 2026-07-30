
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubStage_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubStage_H_


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
/// 作业流程阶段信息列表的子阶段元信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SubStage
    : public ModelBase
{
public:
    SubStage();
    virtual ~SubStage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubStage members

    /// <summary>
    /// **参数解释**：子阶段名称。  **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：子阶段英文描述信息。  **取值范围**：不涉及。
    /// </summary>

    std::string getEnMessage() const;
    bool enMessageIsSet() const;
    void unsetenMessage();
    void setEnMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：子阶段中文描述信息。  **取值范围**：不涉及。
    /// </summary>

    std::string getZhMessage() const;
    bool zhMessageIsSet() const;
    void unsetzhMessage();
    void setZhMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：子阶段开始时间。  **取值范围**：不涉及。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string enMessage_;
    bool enMessageIsSet_;
    std::string zhMessage_;
    bool zhMessageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubStage_H_
