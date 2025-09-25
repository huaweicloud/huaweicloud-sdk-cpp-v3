
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PasswordRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PasswordRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  PasswordRequest
    : public ModelBase
{
public:
    PasswordRequest();
    virtual ~PasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PasswordRequest members

    /// <summary>
    /// https密码
    /// </summary>

    std::string getPwd() const;
    bool pwdIsSet() const;
    void unsetpwd();
    void setPwd(const std::string& value);


protected:
    std::string pwd_;
    bool pwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PasswordRequest_H_
