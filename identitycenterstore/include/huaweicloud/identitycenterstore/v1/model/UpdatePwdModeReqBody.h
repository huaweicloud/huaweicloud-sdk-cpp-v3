
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePwdModeReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePwdModeReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of UpdatePassword.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UpdatePwdModeReqBody
    : public ModelBase
{
public:
    UpdatePwdModeReqBody();
    virtual ~UpdatePwdModeReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePwdModeReqBody members

    /// <summary>
    /// 重置密码方式：一次性密码/邮箱
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UpdatePwdModeReqBody_H_
