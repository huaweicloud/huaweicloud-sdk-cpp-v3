
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBackupEncryptStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBackupEncryptStatusResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyBackupEncryptStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyBackupEncryptStatusResponse();
    virtual ~ModifyBackupEncryptStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyBackupEncryptStatusResponse members

    /// <summary>
    /// 备份加密状态。
    /// </summary>

    std::string getEncryptionStatus() const;
    bool encryptionStatusIsSet() const;
    void unsetencryptionStatus();
    void setEncryptionStatus(const std::string& value);


protected:
    std::string encryptionStatus_;
    bool encryptionStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyBackupEncryptStatusResponse_H_
