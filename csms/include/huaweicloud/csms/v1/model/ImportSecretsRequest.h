
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ImportSecretsRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ImportSecretsRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreateSecretRequestBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ImportSecretsRequest
    : public ModelBase
{
public:
    ImportSecretsRequest();
    virtual ~ImportSecretsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportSecretsRequest members

    /// <summary>
    /// 批量创建凭据参数
    /// </summary>

    std::vector<CreateSecretRequestBody>& getSecrets();
    bool secretsIsSet() const;
    void unsetsecrets();
    void setSecrets(const std::vector<CreateSecretRequestBody>& value);

    /// <summary>
    /// 导入数据条数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<CreateSecretRequestBody> secrets_;
    bool secretsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ImportSecretsRequest_H_
