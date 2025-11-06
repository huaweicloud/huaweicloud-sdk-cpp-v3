
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalApproverInfoDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalApproverInfoDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ApprovalApproverInfoDto
    : public ModelBase
{
public:
    ApprovalApproverInfoDto();
    virtual ~ApprovalApproverInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApprovalApproverInfoDto members

    /// <summary>
    /// **参数解释：** 需要更新的审核人ID列表 数字以英文逗号分隔 111,222 **取值范围：** 不涉及。
    /// </summary>

    std::string getApproverIds() const;
    bool approverIdsIsSet() const;
    void unsetapproverIds();
    void setApproverIds(const std::string& value);


protected:
    std::string approverIds_;
    bool approverIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalApproverInfoDto_H_
