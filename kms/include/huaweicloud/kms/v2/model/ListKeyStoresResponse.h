
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyStoresResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyStoresResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeystoreDetails.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKeyStoresResponse
    : public ModelBase, public HttpResponse
{
public:
    ListKeyStoresResponse();
    virtual ~ListKeyStoresResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeyStoresResponse members

    /// <summary>
    /// 密钥库总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 密钥详情列表。详情参见KeystoreDetails
    /// </summary>

    std::vector<KeystoreDetails>& getKeystores();
    bool keystoresIsSet() const;
    void unsetkeystores();
    void setKeystores(const std::vector<KeystoreDetails>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<KeystoreDetails> keystores_;
    bool keystoresIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeyStoresResponse_H_
