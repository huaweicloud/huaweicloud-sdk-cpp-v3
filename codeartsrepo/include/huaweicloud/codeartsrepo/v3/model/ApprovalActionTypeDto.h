
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ApprovalActionTypeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ApprovalActionTypeDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ApprovalActionTypeDto
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
    /// 操作类型,取值,通过:approve; 拒绝:reject; 撤销:reset
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);


protected:
    std::string actionType_;
    bool actionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ApprovalActionTypeDto_H_
