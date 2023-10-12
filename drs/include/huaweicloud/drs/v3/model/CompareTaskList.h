
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskList_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskList_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CompareTaskList
    : public ModelBase
{
public:
    CompareTaskList();
    virtual ~CompareTaskList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareTaskList members

    /// <summary>
    /// 对比任务的id。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 对比任务的类型。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// 对比任务的状态。 - RUNNING-运行中 - WAITING_FOR_RUNNING-等待启动中 - SUCCESSFUL-完成 - FAILED-失败 - CANCELLED-已取消 - TIMEOUT_INTERRUPT-超时中断 - FULL_DOING-全量校验中 - INCRE_DOING-增量校验中
    /// </summary>

    std::string getCompareTaskStatus() const;
    bool compareTaskStatusIsSet() const;
    void unsetcompareTaskStatus();
    void setCompareTaskStatus(const std::string& value);

    /// <summary>
    /// 对比开始时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string compareTaskId_;
    bool compareTaskIdIsSet_;
    std::string compareType_;
    bool compareTypeIsSet_;
    std::string compareTaskStatus_;
    bool compareTaskStatusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareTaskList_H_
