
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestPlanDetail_report_stage.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanDetail_execute_stage.h>
#include <huaweicloud/cloudtest/v1/model/NameAndId.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanDetail_design_stage.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanDetail_creator.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanDetail_owner.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试计划详情
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanDetail
    : public ModelBase
{
public:
    TestPlanDetail();
    virtual ~TestPlanDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanDetail members

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 测试计划名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试计划开始时间
    /// </summary>

    utility::datetime getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const utility::datetime& value);

    /// <summary>
    /// 测试计划截止时间
    /// </summary>

    utility::datetime getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const utility::datetime& value);

    /// <summary>
    /// 测试计划实际完成时间（测试计划实际完成指测试计划下所有测试用例处于完成状态）
    /// </summary>

    utility::datetime getFinishDate() const;
    bool finishDateIsSet() const;
    void unsetfinishDate();
    void setFinishDate(const utility::datetime& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 当前测试计划所处的阶段
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

    /// <summary>
    /// 获取超期时间,正值表示已超期
    /// </summary>

    int32_t getExpireDay() const;
    bool expireDayIsSet() const;
    void unsetexpireDay();
    void setExpireDay(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TestPlanDetail_creator getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const TestPlanDetail_creator& value);

    /// <summary>
    /// 
    /// </summary>

    TestPlanDetail_owner getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const TestPlanDetail_owner& value);

    /// <summary>
    /// 
    /// </summary>

    TestPlanDetail_design_stage getDesignStage() const;
    bool designStageIsSet() const;
    void unsetdesignStage();
    void setDesignStage(const TestPlanDetail_design_stage& value);

    /// <summary>
    /// 
    /// </summary>

    TestPlanDetail_execute_stage getExecuteStage() const;
    bool executeStageIsSet() const;
    void unsetexecuteStage();
    void setExecuteStage(const TestPlanDetail_execute_stage& value);

    /// <summary>
    /// 
    /// </summary>

    TestPlanDetail_report_stage getReportStage() const;
    bool reportStageIsSet() const;
    void unsetreportStage();
    void setReportStage(const TestPlanDetail_report_stage& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const NameAndId& value);


protected:
    std::string planId_;
    bool planIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    utility::datetime startDate_;
    bool startDateIsSet_;
    utility::datetime endDate_;
    bool endDateIsSet_;
    utility::datetime finishDate_;
    bool finishDateIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    int32_t expireDay_;
    bool expireDayIsSet_;
    TestPlanDetail_creator creator_;
    bool creatorIsSet_;
    TestPlanDetail_owner owner_;
    bool ownerIsSet_;
    TestPlanDetail_design_stage designStage_;
    bool designStageIsSet_;
    TestPlanDetail_execute_stage executeStage_;
    bool executeStageIsSet_;
    TestPlanDetail_report_stage reportStage_;
    bool reportStageIsSet_;
    NameAndId iteration_;
    bool iterationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_H_
