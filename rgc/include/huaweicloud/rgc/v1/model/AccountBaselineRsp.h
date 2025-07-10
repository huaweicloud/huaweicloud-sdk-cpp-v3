
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_AccountBaselineRsp_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_AccountBaselineRsp_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 纳管账号基本信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  AccountBaselineRsp
    : public ModelBase
{
public:
    AccountBaselineRsp();
    virtual ~AccountBaselineRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccountBaselineRsp members

    /// <summary>
    /// 纳管账号名称。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 纳管账号的唯一标识符（ID）。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号类型。类型包括LOGGING，SECURITY。
    /// </summary>

    std::string getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(const std::string& value);


protected:
    std::string accountName_;
    bool accountNameIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountType_;
    bool accountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_AccountBaselineRsp_H_
