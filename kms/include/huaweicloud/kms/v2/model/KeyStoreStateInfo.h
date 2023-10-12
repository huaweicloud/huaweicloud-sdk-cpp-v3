
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyStoreStateInfo_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyStoreStateInfo_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 密钥库状态详情
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeyStoreStateInfo
    : public ModelBase
{
public:
    KeyStoreStateInfo();
    virtual ~KeyStoreStateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeyStoreStateInfo members

    /// <summary>
    /// 密钥库ID
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 密钥库状态
    /// </summary>

    std::string getKeystoreState() const;
    bool keystoreStateIsSet() const;
    void unsetkeystoreState();
    void setKeystoreState(const std::string& value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    std::string keystoreState_;
    bool keystoreStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeyStoreStateInfo_H_
