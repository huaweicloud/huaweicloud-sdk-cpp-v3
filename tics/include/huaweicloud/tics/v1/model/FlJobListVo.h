
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_FlJobListVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_FlJobListVo_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  FlJobListVo
    : public ModelBase
{
public:
    FlJobListVo();
    virtual ~FlJobListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlJobListVo members

    /// <summary>
    /// 纵向联邦算法类型枚举，XG_BOOST.XGBoost,LIGHT_BGM.LightGBM,LOGISTIC_REGRESSION.逻辑回归,NEURAL_NETWORK.神经网络，FIBINET.FIBINET
    /// </summary>

    std::string getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(const std::string& value);

    /// <summary>
    /// fl作业审批状态，APPROVED.审批通过，APPROVING.审批中，NEW.新建，REJECTED.驳回，REVOKED.撤销
    /// </summary>

    std::string getApprovalStatus() const;
    bool approvalStatusIsSet() const;
    void unsetapprovalStatus();
    void setApprovalStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 作业描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数等额外信息
    /// </summary>

    std::string getExt() const;
    bool extIsSet() const;
    void unsetext();
    void setExt(const std::string& value);

    /// <summary>
    /// 联邦学习运行平台枚举值，LOCAL.本地
    /// </summary>

    std::string getHflPlatformType() const;
    bool hflPlatformTypeIsSet() const;
    void unsethflPlatformType();
    void setHflPlatformType(const std::string& value);

    /// <summary>
    /// fl作业类型枚举,TRAIN.训练,EVALUATE.评估
    /// </summary>

    std::string getHflType() const;
    bool hflTypeIsSet() const;
    void unsethflType();
    void setHflType(const std::string& value);

    /// <summary>
    /// 单方还是双方预测
    /// </summary>

    bool isIsSinglePredict() const;
    bool isSinglePredictIsSet() const;
    void unsetisSinglePredict();
    void setIsSinglePredict(bool value);

    /// <summary>
    /// 作业id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 作业名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 作业类型,SQL.联合SQL分析,HFL.横向联邦学习,VFL.纵向联邦学习,PREDICT.预测，DATA_EXCHANGE.数据交换
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 纵向联邦任务类型,CLASSIFICATION.分类，REGRESSION.拟合
    /// </summary>

    std::string getLearningTaskType() const;
    bool learningTaskTypeIsSet() const;
    void unsetlearningTaskType();
    void setLearningTaskType(const std::string& value);


protected:
    std::string algorithmType_;
    bool algorithmTypeIsSet_;
    std::string approvalStatus_;
    bool approvalStatusIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string ext_;
    bool extIsSet_;
    std::string hflPlatformType_;
    bool hflPlatformTypeIsSet_;
    std::string hflType_;
    bool hflTypeIsSet_;
    bool isSinglePredict_;
    bool isSinglePredictIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string learningTaskType_;
    bool learningTaskTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_FlJobListVo_H_
