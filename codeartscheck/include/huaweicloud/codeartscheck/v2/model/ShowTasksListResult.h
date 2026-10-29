
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListResult_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListResult_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskBasicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务列表响应。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTasksListResult
    : public ModelBase
{
public:
    ShowTasksListResult();
    virtual ~ShowTasksListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTasksListResult members

    /// <summary>
    /// **参数解释：** 任务列表。
    /// </summary>

    std::vector<TaskBasicInfo>& getInfo();
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::vector<TaskBasicInfo>& value);

    /// <summary>
    /// **参数解释：** 代码检查任务总数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TaskBasicInfo> info_;
    bool infoIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListResult_H_
