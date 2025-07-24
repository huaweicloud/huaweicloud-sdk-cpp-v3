
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanIssueDetail_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanIssueDetail_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/NameAndId.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试计划需求列表详情
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanIssueDetail
    : public ModelBase
{
public:
    TestPlanIssueDetail();
    virtual ~TestPlanIssueDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanIssueDetail members

    /// <summary>
    /// 项目id，项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getWorkitemId() const;
    bool workitemIdIsSet() const;
    void unsetworkitemId();
    void setWorkitemId(const std::string& value);

    /// <summary>
    /// 父工作项
    /// </summary>

    std::string getParentIssue() const;
    bool parentIssueIsSet() const;
    void unsetparentIssue();
    void setParentIssue(const std::string& value);

    /// <summary>
    /// 预计开始日期
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 预计结束日期
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);

    /// <summary>
    /// 工作项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// region信息
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const NameAndId& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const NameAndId& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NameAndId& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const NameAndId& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const NameAndId& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const NameAndId& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::string workitemId_;
    bool workitemIdIsSet_;
    std::string parentIssue_;
    bool parentIssueIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    NameAndId owner_;
    bool ownerIsSet_;
    NameAndId severity_;
    bool severityIsSet_;
    NameAndId status_;
    bool statusIsSet_;
    NameAndId tracker_;
    bool trackerIsSet_;
    NameAndId iteration_;
    bool iterationIsSet_;
    NameAndId module_;
    bool moduleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanIssueDetail_H_
