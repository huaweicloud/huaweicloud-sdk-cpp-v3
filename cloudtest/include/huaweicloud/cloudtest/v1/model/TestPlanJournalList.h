
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalList_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalList_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestPlanJournalDetail.h>
#include <huaweicloud/cloudtest/v1/model/NameAndId.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目下某个测试计划操作历史列表
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanJournalList
    : public ModelBase
{
public:
    TestPlanJournalList();
    virtual ~TestPlanJournalList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanJournalList members

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
    /// 变更时间
    /// </summary>

    utility::datetime getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndId getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const NameAndId& value);

    /// <summary>
    /// 历史记录详情
    /// </summary>

    std::vector<TestPlanJournalDetail>& getDetail();
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::vector<TestPlanJournalDetail>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    utility::datetime operateTime_;
    bool operateTimeIsSet_;
    NameAndId operator_;
    bool operatorIsSet_;
    std::vector<TestPlanJournalDetail> detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalList_H_
