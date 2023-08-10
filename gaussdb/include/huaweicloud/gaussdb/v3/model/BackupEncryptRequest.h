
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupEncryptRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupEncryptRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// taurus支持备份加密的请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupEncryptRequest
    : public ModelBase
{
public:
    BackupEncryptRequest();
    virtual ~BackupEncryptRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupEncryptRequest members

    /// <summary>
    /// 加密类型。当前只支持kms。 开启加密时必传，关闭加密时不传。 不区分大小写。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// kms加密ID。加密时必传，关闭加密时候不传。
    /// </summary>

    std::string getKmsKeyId() const;
    bool kmsKeyIdIsSet() const;
    void unsetkmsKeyId();
    void setKmsKeyId(const std::string& value);

    /// <summary>
    /// 开启或关闭加密。不区分大小写。
    /// </summary>

    std::string getEncryptionStatus() const;
    bool encryptionStatusIsSet() const;
    void unsetencryptionStatus();
    void setEncryptionStatus(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string kmsKeyId_;
    bool kmsKeyIdIsSet_;
    std::string encryptionStatus_;
    bool encryptionStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupEncryptRequest_H_
