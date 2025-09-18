
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_status_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_status_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项不同状态下的数量
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCompletionRateV4_issue_status
    : public ModelBase
{
public:
    IssueCompletionRateV4_issue_status();
    virtual ~IssueCompletionRateV4_issue_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCompletionRateV4_issue_status members

    /// <summary>
    /// 已关闭的工作项
    /// </summary>

    int32_t getClosedNum() const;
    bool closedNumIsSet() const;
    void unsetclosedNum();
    void setClosedNum(int32_t value);

    /// <summary>
    /// 新建的工作项
    /// </summary>

    int32_t getNewNum() const;
    bool newNumIsSet() const;
    void unsetnewNum();
    void setNewNum(int32_t value);

    /// <summary>
    /// 进行中的工作项数目
    /// </summary>

    int32_t getProcessNum() const;
    bool processNumIsSet() const;
    void unsetprocessNum();
    void setProcessNum(int32_t value);

    /// <summary>
    /// 已经拒绝的工作项
    /// </summary>

    int32_t getRejectedNum() const;
    bool rejectedNumIsSet() const;
    void unsetrejectedNum();
    void setRejectedNum(int32_t value);

    /// <summary>
    /// 已经解决的工作项
    /// </summary>

    int32_t getSolvedNum() const;
    bool solvedNumIsSet() const;
    void unsetsolvedNum();
    void setSolvedNum(int32_t value);

    /// <summary>
    /// 测试中的工作项
    /// </summary>

    int32_t getTestNum() const;
    bool testNumIsSet() const;
    void unsettestNum();
    void setTestNum(int32_t value);


protected:
    int32_t closedNum_;
    bool closedNumIsSet_;
    int32_t newNum_;
    bool newNumIsSet_;
    int32_t processNum_;
    bool processNumIsSet_;
    int32_t rejectedNum_;
    bool rejectedNumIsSet_;
    int32_t solvedNum_;
    bool solvedNumIsSet_;
    int32_t testNum_;
    bool testNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_status_H_
