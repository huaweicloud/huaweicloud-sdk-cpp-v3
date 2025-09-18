
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskListByProjectIdResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskListByProjectIdResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/SimpleTaskInfoV2.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskListByProjectIdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskListByProjectIdResponse();
    virtual ~ShowTaskListByProjectIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskListByProjectIdResponse members

    /// <summary>
    /// 任务信息
    /// </summary>

    std::vector<SimpleTaskInfoV2>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<SimpleTaskInfoV2>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SimpleTaskInfoV2> tasks_;
    bool tasksIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskListByProjectIdResponse_H_
