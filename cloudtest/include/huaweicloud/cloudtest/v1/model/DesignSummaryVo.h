
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DesignSummaryVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DesignSummaryVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设计阶段信息汇总
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DesignSummaryVo
    : public ModelBase
{
public:
    DesignSummaryVo();
    virtual ~DesignSummaryVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DesignSummaryVo members

    /// <summary>
    /// 需求总数
    /// </summary>

    int32_t getIssueNum() const;
    bool issueNumIsSet() const;
    void unsetissueNum();
    void setIssueNum(int32_t value);

    /// <summary>
    /// 已覆盖需求数
    /// </summary>

    int32_t getIssueCoverNum() const;
    bool issueCoverNumIsSet() const;
    void unsetissueCoverNum();
    void setIssueCoverNum(int32_t value);

    /// <summary>
    /// 用例数
    /// </summary>

    int32_t getCaseNum() const;
    bool caseNumIsSet() const;
    void unsetcaseNum();
    void setCaseNum(int32_t value);


protected:
    int32_t issueNum_;
    bool issueNumIsSet_;
    int32_t issueCoverNum_;
    bool issueCoverNumIsSet_;
    int32_t caseNum_;
    bool caseNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DesignSummaryVo_H_
