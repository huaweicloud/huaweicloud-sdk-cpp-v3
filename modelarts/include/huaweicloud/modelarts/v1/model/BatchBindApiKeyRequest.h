
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchBindApiKeyRequest_key_ids.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchBindApiKeyRequest
    : public ModelBase
{
public:
    BatchBindApiKeyRequest();
    virtual ~BatchBindApiKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBindApiKeyRequest members

    /// <summary>
    /// **参数解释：** 请求批量绑定的api-key的id数组。 **约束限制：** 请求批量绑定api-key的id个数不超过10个。
    /// </summary>

    std::vector<BatchBindApiKeyRequest_key_ids>& getKeyIds();
    bool keyIdsIsSet() const;
    void unsetkeyIds();
    void setKeyIds(const std::vector<BatchBindApiKeyRequest_key_ids>& value);


protected:
    std::vector<BatchBindApiKeyRequest_key_ids> keyIds_;
    bool keyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindApiKeyRequest_H_
