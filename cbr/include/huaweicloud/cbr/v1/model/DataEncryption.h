
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_DataEncryption_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_DataEncryption_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  DataEncryption
    : public ModelBase
{
public:
    DataEncryption();
    virtual ~DataEncryption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataEncryption members

    /// <summary>
    /// 存储库的密钥ID。如果为非加密存储库，默认值为None
    /// </summary>

    std::string getCmkid() const;
    bool cmkidIsSet() const;
    void unsetcmkid();
    void setCmkid(const std::string& value);

    /// <summary>
    /// 存储库的加密算法类型。如果为非加密存储库，默认值为None
    /// </summary>

    std::string getEncryptedAlgorithm() const;
    bool encryptedAlgorithmIsSet() const;
    void unsetencryptedAlgorithm();
    void setEncryptedAlgorithm(const std::string& value);


protected:
    std::string cmkid_;
    bool cmkidIsSet_;
    std::string encryptedAlgorithm_;
    bool encryptedAlgorithmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_DataEncryption_H_
