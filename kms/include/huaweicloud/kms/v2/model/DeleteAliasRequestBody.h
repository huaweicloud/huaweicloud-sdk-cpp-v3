
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteAliasRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteAliasRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除别名请求消息体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  DeleteAliasRequestBody
    : public ModelBase
{
public:
    DeleteAliasRequestBody();
    virtual ~DeleteAliasRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAliasRequestBody members

    /// <summary>
    /// 待删除的别名
    /// </summary>

    std::vector<std::string>& getAliases();
    bool aliasesIsSet() const;
    void unsetaliases();
    void setAliases(const std::vector<std::string>& value);

    /// <summary>
    /// 别名关联的密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::vector<std::string> aliases_;
    bool aliasesIsSet_;
    std::string keyId_;
    bool keyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteAliasRequestBody_H_
