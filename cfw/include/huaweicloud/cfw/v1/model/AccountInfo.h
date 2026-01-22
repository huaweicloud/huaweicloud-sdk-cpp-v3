
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  AccountInfo
    : public ModelBase
{
public:
    AccountInfo();
    virtual ~AccountInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountInfo members

    /// <summary>
    /// **参数解释**： 账号ID，可以通过调用[查询组织账号列表接口]获得，通过返回值中的data.id获得 **约束限制**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccountInfo_H_
