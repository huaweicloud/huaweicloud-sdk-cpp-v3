
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AccountInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AccountDto
    : public ModelBase
{
public:
    AccountDto();
    virtual ~AccountDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountDto members

    /// <summary>
    /// **参数解释**： 账号列表 **约束限制**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<AccountInfo>& getAccounts();
    bool accountsIsSet() const;
    void unsetaccounts();
    void setAccounts(const std::vector<AccountInfo>& value);


protected:
    std::vector<AccountInfo> accounts_;
    bool accountsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountDto_H_
