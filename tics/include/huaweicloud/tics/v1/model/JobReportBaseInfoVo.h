
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportBaseInfoVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportBaseInfoVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  JobReportBaseInfoVo
    : public ModelBase
{
public:
    JobReportBaseInfoVo();
    virtual ~JobReportBaseInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobReportBaseInfoVo members

    /// <summary>
    /// 执行时间
    /// </summary>

    utility::datetime getExeTime() const;
    bool exeTimeIsSet() const;
    void unsetexeTime();
    void setExeTime(const utility::datetime& value);

    /// <summary>
    /// 执行人
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// hfl作业类型枚举，TRAIN.训练,EVALUATE.评估
    /// </summary>

    std::string getHflType() const;
    bool hflTypeIsSet() const;
    void unsethflType();
    void setHflType(const std::string& value);

    /// <summary>
    /// 作业名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 作业类型，HFL.横向联邦，SQL.联邦分析，VFL_EVALUATE.联邦评估，VFL_FEATURE_SELECTION.特征选择，VFL_ID_TRUNCATION.Id截断，VFL_PREDICT.联邦预测，VFL_SAMPLE_ALIGNMENT.样本对齐，VFL_TRAIN.联邦训练
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 作业任务状态，NEW.新建,SUBMITING.提交中,ACCEPTED.已接收,DEPLOYING.部署中,RUNNING.运行中,SUCCEEDED.成功,FAILED.失败,TERMINATED.中止,TERMINATING.中止中,PENDING.等待中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    utility::datetime exeTime_;
    bool exeTimeIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string hflType_;
    bool hflTypeIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportBaseInfoVo_H_
