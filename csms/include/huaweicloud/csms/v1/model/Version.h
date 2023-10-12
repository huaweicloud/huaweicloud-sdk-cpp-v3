
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Version_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Version_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/csms/v1/model/VersionMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 凭据版本。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Version
    : public ModelBase
{
public:
    Version();
    virtual ~Version();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Version members

    /// <summary>
    /// 
    /// </summary>

    VersionMetadata getVersionMetadata() const;
    bool versionMetadataIsSet() const;
    void unsetversionMetadata();
    void setVersionMetadata(const VersionMetadata& value);

    /// <summary>
    /// 二进制类型凭据在base64编码后的明文，凭据管理服务将其加密后，存入凭据的初始版本中。  类型：base64编码的二进制数据对象。 
    /// </summary>

    std::string getSecretBinary() const;
    bool secretBinaryIsSet() const;
    void unsetsecretBinary();
    void setSecretBinary(const std::string& value);

    /// <summary>
    /// 文本类型凭据的明文，凭据管理服务将其加密后，存入凭据的初始版本中。
    /// </summary>

    std::string getSecretString() const;
    bool secretStringIsSet() const;
    void unsetsecretString();
    void setSecretString(const std::string& value);


protected:
    VersionMetadata versionMetadata_;
    bool versionMetadataIsSet_;
    std::string secretBinary_;
    bool secretBinaryIsSet_;
    std::string secretString_;
    bool secretStringIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Version_H_
