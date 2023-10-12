
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Encryption_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Encryption_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/HlsEncrypt.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  Encryption
    : public ModelBase
{
public:
    Encryption();
    virtual ~Encryption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Encryption members

    /// <summary>
    /// 
    /// </summary>

    HlsEncrypt getHlsEncrypt() const;
    bool hlsEncryptIsSet() const;
    void unsethlsEncrypt();
    void setHlsEncrypt(const HlsEncrypt& value);


protected:
    HlsEncrypt hlsEncrypt_;
    bool hlsEncryptIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Encryption_H_
