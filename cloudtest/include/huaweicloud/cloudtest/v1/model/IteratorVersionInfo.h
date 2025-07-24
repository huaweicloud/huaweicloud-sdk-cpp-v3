
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/WorkItemInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IteratorVersionInfo
    : public ModelBase
{
public:
    IteratorVersionInfo();
    virtual ~IteratorVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IteratorVersionInfo members

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 开发分支名称
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 处理者ID
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 待测版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 关联迭代
    /// </summary>

    std::vector<std::string>& getIterations();
    bool iterationsIsSet() const;
    void unsetiterations();
    void setIterations(const std::vector<std::string>& value);

    /// <summary>
    /// 是否为Master分支
    /// </summary>

    std::string getIsMaster() const;
    bool isMasterIsSet() const;
    void unsetisMaster();
    void setIsMaster(const std::string& value);

    /// <summary>
    /// PBI ID
    /// </summary>

    std::string getPbiId() const;
    bool pbiIdIsSet() const;
    void unsetpbiId();
    void setPbiId(const std::string& value);

    /// <summary>
    /// PBI信息
    /// </summary>

    std::string getPbiName() const;
    bool pbiNameIsSet() const;
    void unsetpbiName();
    void setPbiName(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 开始时间戳
    /// </summary>

    int64_t getPlanStartTimestamp() const;
    bool planStartTimestampIsSet() const;
    void unsetplanStartTimestamp();
    void setPlanStartTimestamp(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 结束时间戳
    /// </summary>

    int64_t getPlanEndTimestamp() const;
    bool planEndTimestampIsSet() const;
    void unsetplanEndTimestamp();
    void setPlanEndTimestamp(int64_t value);

    /// <summary>
    /// 是否同步git库
    /// </summary>

    std::string getAsynGit() const;
    bool asynGitIsSet() const;
    void unsetasynGit();
    void setAsynGit(const std::string& value);

    /// <summary>
    /// 项目ID（云龙场景，传入微服务ID）
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 项目名称（云龙场景，传入微服务名）
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 当前所处阶段
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

    /// <summary>
    /// 测试类型
    /// </summary>

    std::vector<std::string>& getServiceTypes();
    bool serviceTypesIsSet() const;
    void unsetserviceTypes();
    void setServiceTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 关联需求
    /// </summary>

    std::vector<WorkItemInfo>& getIssueList();
    bool issueListIsSet() const;
    void unsetissueList();
    void setIssueList(const std::vector<WorkItemInfo>& value);

    /// <summary>
    /// 风险等级
    /// </summary>

    int32_t getRiskRating() const;
    bool riskRatingIsSet() const;
    void unsetriskRating();
    void setRiskRating(int32_t value);

    /// <summary>
    /// 风险描述
    /// </summary>

    std::string getRiskDes() const;
    bool riskDesIsSet() const;
    void unsetriskDes();
    void setRiskDes(const std::string& value);

    /// <summary>
    /// 编辑风险信息标记
    /// </summary>

    std::string getIsUpdateRisk() const;
    bool isUpdateRiskIsSet() const;
    void unsetisUpdateRisk();
    void setIsUpdateRisk(const std::string& value);

    /// <summary>
    /// pi的id，层级关系：pi -&gt; 迭代 -&gt; 需求
    /// </summary>

    std::string getPiId() const;
    bool piIdIsSet() const;
    void unsetpiId();
    void setPiId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> iterations_;
    bool iterationsIsSet_;
    std::string isMaster_;
    bool isMasterIsSet_;
    std::string pbiId_;
    bool pbiIdIsSet_;
    std::string pbiName_;
    bool pbiNameIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    int64_t planStartTimestamp_;
    bool planStartTimestampIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    int64_t planEndTimestamp_;
    bool planEndTimestampIsSet_;
    std::string asynGit_;
    bool asynGitIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    std::vector<std::string> serviceTypes_;
    bool serviceTypesIsSet_;
    std::vector<WorkItemInfo> issueList_;
    bool issueListIsSet_;
    int32_t riskRating_;
    bool riskRatingIsSet_;
    std::string riskDes_;
    bool riskDesIsSet_;
    std::string isUpdateRisk_;
    bool isUpdateRiskIsSet_;
    std::string piId_;
    bool piIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionInfo_H_
