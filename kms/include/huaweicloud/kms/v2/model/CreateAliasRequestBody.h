
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateAliasRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateAliasRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateAliasRequestBody
    : public ModelBase
{
public:
    CreateAliasRequestBody();
    virtual ~CreateAliasRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAliasRequestBody members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 别名。一个账号在同一个区域别名不能重复
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateAliasRequestBody_H_
