
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApprovalActionTypeDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApprovalActionTypeDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ApprovalActionTypeDto
    : public ModelBase
{
public:
    ApprovalActionTypeDto();
    virtual ~ApprovalActionTypeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApprovalActionTypeDto members

    /// <summary>
    /// **参数解释：** 审核/检视操作动作 - approve，审核通过 - reject，审核拒绝 - complete，检视通过 - reset，重置审核/检视结果
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);

    /// <summary>
    /// **参数解释：** 审核备注 **取值范围：** 不涉及。
    /// </summary>

    std::string getApproverComment() const;
    bool approverCommentIsSet() const;
    void unsetapproverComment();
    void setApproverComment(const std::string& value);


protected:
    std::string actionType_;
    bool actionTypeIsSet_;
    std::string approverComment_;
    bool approverCommentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ApprovalActionTypeDto_H_
