
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_AssociateAliasRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_AssociateAliasRequestBody_H_


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
/// 关联别名请求消息体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  AssociateAliasRequestBody
    : public ModelBase
{
public:
    AssociateAliasRequestBody();
    virtual ~AssociateAliasRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateAliasRequestBody members

    /// <summary>
    /// 待关联别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 待关联的密钥ID
    /// </summary>

    std::string getTargetKeyId() const;
    bool targetKeyIdIsSet() const;
    void unsettargetKeyId();
    void setTargetKeyId(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;
    std::string targetKeyId_;
    bool targetKeyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_AssociateAliasRequestBody_H_
