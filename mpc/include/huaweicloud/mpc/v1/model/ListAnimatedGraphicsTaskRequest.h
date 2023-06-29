
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAnimatedGraphicsTaskRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAnimatedGraphicsTaskRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListAnimatedGraphicsTaskRequest
    : public ModelBase
{
public:
    ListAnimatedGraphicsTaskRequest();
    virtual ~ListAnimatedGraphicsTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAnimatedGraphicsTaskRequest members

    /// <summary>
    /// 客户端语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。一次最多10个 
    /// </summary>

    std::vector<std::string>& getTaskId();
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::vector<std::string>& value);

    /// <summary>
    /// 任务执行状态。  取值如下： - INIT：初始状态 - WAITING：待启动 - PREPROCESSING：处理中 - SUCCEED：处理成功 - FAILED：处理失败 - CANCELED：已取消 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 起始时间。格式为yyyymmddhhmmss。必须是与时区无关的UTC时间，指定task_id时该参数无效。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。格式为yyyymmddhhmmss。必须是与时区无关的UTC时间，指定task_id时该参数无效。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 分页编号。查询指定“task_id”时，该参数无效。  默认值：0。 
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数。查询指定“task_id”时，该参数无效。  取值范围：[1,100]。  默认值：10。 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::vector<std::string> taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAnimatedGraphicsTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ListAnimatedGraphicsTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAnimatedGraphicsTaskRequest_H_
