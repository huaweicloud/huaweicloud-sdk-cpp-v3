
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusChangeResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusChangeResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkItemVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 状态变更结果对象，包含不可完成的AR工作项列表。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  StatusChangeResult
    : public ModelBase
{
public:
    StatusChangeResult();
    virtual ~StatusChangeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusChangeResult members

    /// <summary>
    /// **参数解释**： 不可完成的AR工作项列表，当完成发布/迭代时，未完成的AR工作项会列出在此。
    /// </summary>

    std::vector<WorkItemVO>& getCannotFinishAr();
    bool cannotFinishArIsSet() const;
    void unsetcannotFinishAr();
    void setCannotFinishAr(const std::vector<WorkItemVO>& value);


protected:
    std::vector<WorkItemVO> cannotFinishAr_;
    bool cannotFinishArIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusChangeResult_H_
