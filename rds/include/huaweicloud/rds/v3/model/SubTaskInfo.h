
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SubTaskInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SubTaskInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子任务进度信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SubTaskInfo
    : public ModelBase
{
public:
    SubTaskInfo();
    virtual ~SubTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskInfo members

    /// <summary>
    /// 子任务名
    /// </summary>

    std::string getSubTaskName() const;
    bool subTaskNameIsSet() const;
    void unsetsubTaskName();
    void setSubTaskName(const std::string& value);

    /// <summary>
    /// 子任务进度
    /// </summary>

    std::string getPercent() const;
    bool percentIsSet() const;
    void unsetpercent();
    void setPercent(const std::string& value);

    /// <summary>
    /// 子任务执行时间
    /// </summary>

    std::string getExecutedTime() const;
    bool executedTimeIsSet() const;
    void unsetexecutedTime();
    void setExecutedTime(const std::string& value);

    /// <summary>
    /// 子任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 子任务剩余预估时长
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);

    /// <summary>
    /// 是否展示已恢复库表
    /// </summary>

    bool isShowDetail() const;
    bool showDetailIsSet() const;
    void unsetshowDetail();
    void setShowDetail(bool value);


protected:
    std::string subTaskName_;
    bool subTaskNameIsSet_;
    std::string percent_;
    bool percentIsSet_;
    std::string executedTime_;
    bool executedTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;
    bool showDetail_;
    bool showDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SubTaskInfo_H_
