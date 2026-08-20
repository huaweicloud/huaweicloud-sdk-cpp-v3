
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_review_config_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_review_config_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 评审配置
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result_review_config
    : public ModelBase
{
public:
    ProcessInstanceResponse_result_review_config();
    virtual ~ProcessInstanceResponse_result_review_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result_review_config members

    /// <summary>
    /// 审批类型
    /// </summary>

    int32_t getApprovalType() const;
    bool approvalTypeIsSet() const;
    void unsetapprovalType();
    void setApprovalType(int32_t value);

    /// <summary>
    /// 审批进度
    /// </summary>

    std::string getRatioValue() const;
    bool ratioValueIsSet() const;
    void unsetratioValue();
    void setRatioValue(const std::string& value);

    /// <summary>
    /// 是否跳过决策
    /// </summary>

    bool isSkipDecisioning() const;
    bool skipDecisioningIsSet() const;
    void unsetskipDecisioning();
    void setSkipDecisioning(bool value);

    /// <summary>
    /// 决策角色
    /// </summary>

    std::string getApprovalRoles() const;
    bool approvalRolesIsSet() const;
    void unsetapprovalRoles();
    void setApprovalRoles(const std::string& value);

    /// <summary>
    /// 审批角色
    /// </summary>

    std::string getReviewRoles() const;
    bool reviewRolesIsSet() const;
    void unsetreviewRoles();
    void setReviewRoles(const std::string& value);


protected:
    int32_t approvalType_;
    bool approvalTypeIsSet_;
    std::string ratioValue_;
    bool ratioValueIsSet_;
    bool skipDecisioning_;
    bool skipDecisioningIsSet_;
    std::string approvalRoles_;
    bool approvalRolesIsSet_;
    std::string reviewRoles_;
    bool reviewRolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_review_config_H_
