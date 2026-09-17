
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OperateSprintReqVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OperateSprintReqVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/BaseLineVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 批量基线/取消基线请求体，包含需要操作的计划ID列表和基线属性信息。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  OperateSprintReqVO
    : public ModelBase
{
public:
    OperateSprintReqVO();
    virtual ~OperateSprintReqVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateSprintReqVO members

    /// <summary>
    /// **参数解释**： 发布/迭代计划ID列表，通过[发布/迭代计划列表查询](ListPlan.xml)接口获取，响应消息体中的**id**字段的值就是发布/迭代ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    BaseLineVO getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const BaseLineVO& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    BaseLineVO attribute_;
    bool attributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OperateSprintReqVO_H_
