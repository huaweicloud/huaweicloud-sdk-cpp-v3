
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalDetail_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalDetail_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/NameAndId.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AttributeChange.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试计划操作历史详情
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanJournalDetail
    : public ModelBase
{
public:
    TestPlanJournalDetail();
    virtual ~TestPlanJournalDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanJournalDetail members

    /// <summary>
    /// 测试计划基础信息变更，包括计划名称，测试类型，计划处理者、版本号、关联迭代、开始日期、截至日期、描述
    /// </summary>

    std::vector<AttributeChange>& getUpdated();
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::vector<AttributeChange>& value);

    /// <summary>
    /// 测试计划资源的添加记录（工作项或者测试用例）
    /// </summary>

    std::vector<NameAndId>& getAdded();
    bool addedIsSet() const;
    void unsetadded();
    void setAdded(const std::vector<NameAndId>& value);

    /// <summary>
    /// 测试计划资源的移除记录（工作项或者测试用例）
    /// </summary>

    std::vector<NameAndId>& getDeleted();
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(const std::vector<NameAndId>& value);

    /// <summary>
    /// 表明该条变更记录的具体变更类型，例如测试用例（testCase），需求（issue）
    /// </summary>

    std::string getJournalizedType() const;
    bool journalizedTypeIsSet() const;
    void unsetjournalizedType();
    void setJournalizedType(const std::string& value);

    /// <summary>
    /// 表明该条变更记录属于基础信息变更还是资源（需求添加移除、用例添加移除）变更
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<AttributeChange> updated_;
    bool updatedIsSet_;
    std::vector<NameAndId> added_;
    bool addedIsSet_;
    std::vector<NameAndId> deleted_;
    bool deletedIsSet_;
    std::string journalizedType_;
    bool journalizedTypeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanJournalDetail_H_
