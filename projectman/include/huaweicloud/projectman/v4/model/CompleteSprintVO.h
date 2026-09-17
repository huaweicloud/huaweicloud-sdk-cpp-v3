
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CompleteSprintVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CompleteSprintVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 更新发布/迭代状态的请求体。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CompleteSprintVO
    : public ModelBase
{
public:
    CompleteSprintVO();
    virtual ~CompleteSprintVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompleteSprintVO members

    /// <summary>
    /// **参数解释**： 操作类型。 **约束限制**： 不涉及。 **取值范围**： - start：开始发布/迭代计划 - complete：完成发布/迭代计划 - reset：将计划状态设置为\&quot;未开始\&quot; - restart：重新开始发布/迭代计划 - move：将工作项移动到其他迭代 **默认取值**： 不涉及。
    /// </summary>

    std::string getOperate() const;
    bool operateIsSet() const;
    void unsetoperate();
    void setOperate(const std::string& value);

    /// <summary>
    /// **参数解释**： 将工作项移动到指定迭代ID。operate参数值为complete时，需要将未完成的工作项移动到其他迭代。 **约束限制**： operate参数值为complete时需填写。空字符串表示将工作项移动到\&quot;待规划\&quot;。 **取值范围**： 长度为18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getMoveToSprintId() const;
    bool moveToSprintIdIsSet() const;
    void unsetmoveToSprintId();
    void setMoveToSprintId(const std::string& value);


protected:
    std::string operate_;
    bool operateIsSet_;
    std::string moveToSprintId_;
    bool moveToSprintIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CompleteSprintVO_H_
