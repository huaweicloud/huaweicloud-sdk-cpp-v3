
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_key_ids_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_key_ids_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchBindApiKeyRequest_key_ids
    : public ModelBase
{
public:
    BatchBindApiKeyRequest_key_ids();
    virtual ~BatchBindApiKeyRequest_key_ids();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBindApiKeyRequest_key_ids members

    /// <summary>
    /// **参数解释：** apikey_id，在创建API_KEY时即可在返回体中获取，也可通过查询api-keys列表获取当前用户拥有的apikey，其中key_id字段即为apikey_id。 **约束限制：** 不涉及 **取值范围：** apikey_id只能由英文小写字母、数字组成，且长度为32个字符。 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_key_ids_H_
