
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsJobInstanceVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsJobInstanceVo_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  TicsJobInstanceVo
    : public ModelBase
{
public:
    TicsJobInstanceVo();
    virtual ~TicsJobInstanceVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsJobInstanceVo members

    /// <summary>
    /// 结束时间
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 参数等额外信息
    /// </summary>

    std::string getExt() const;
    bool extIsSet() const;
    void unsetext();
    void setExt(const std::string& value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 单方还是双方预测
    /// </summary>

    bool isIsSinglePredict() const;
    bool isSinglePredictIsSet() const;
    void unsetisSinglePredict();
    void setIsSinglePredict(bool value);

    /// <summary>
    /// 作业类型，HFL.横向联邦，SQL.联邦分析，VFL_EVALUATE.联邦评估，VFL_FEATURE_SELECTION.特征选择，VFL_ID_TRUNCATION.Id截断，VFL_PREDICT.联邦预测，VFL_SAMPLE_ALIGNMENT.样本对齐，VFL_TRAIN.联邦训练
    /// </summary>

    std::string getJobInstanceType() const;
    bool jobInstanceTypeIsSet() const;
    void unsetjobInstanceType();
    void setJobInstanceType(const std::string& value);

    /// <summary>
    /// 作业名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 参与方信息
    /// </summary>

    std::string getJobPartner() const;
    bool jobPartnerIsSet() const;
    void unsetjobPartner();
    void setJobPartner(const std::string& value);

    /// <summary>
    /// 参数等额外信息
    /// </summary>

    std::string getResultExt() const;
    bool resultExtIsSet() const;
    void unsetresultExt();
    void setResultExt(const std::string& value);

    /// <summary>
    /// 作业执行总轮数
    /// </summary>

    int32_t getRoundId() const;
    bool roundIdIsSet() const;
    void unsetroundId();
    void setRoundId(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 作业、任务状态，作业任务状态，NEW.新建,SUBMITING.提交中,ACCEPTED.已接收,DEPLOYING.部署中,RUNNING.运行中,SUCCEEDED.成功,FAILED.失败,TERMINATED.中止,TERMINATING.中止中,PENDING.等待中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    utility::datetime endTime_;
    bool endTimeIsSet_;
    std::string ext_;
    bool extIsSet_;
    std::string id_;
    bool idIsSet_;
    bool isSinglePredict_;
    bool isSinglePredictIsSet_;
    std::string jobInstanceType_;
    bool jobInstanceTypeIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobPartner_;
    bool jobPartnerIsSet_;
    std::string resultExt_;
    bool resultExtIsSet_;
    int32_t roundId_;
    bool roundIdIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsJobInstanceVo_H_
