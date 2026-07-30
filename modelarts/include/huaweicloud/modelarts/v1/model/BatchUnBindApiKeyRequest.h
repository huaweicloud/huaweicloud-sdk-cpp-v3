
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnBindApiKeyRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnBindApiKeyRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/modelarts/v1/model/BatchUnBindApiKeyRequest_key_ids.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchUnBindApiKeyRequest
    : public ModelBase
{
public:
    BatchUnBindApiKeyRequest();
    virtual ~BatchUnBindApiKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUnBindApiKeyRequest members

    /// <summary>
    /// **参数解释：** 请求批量解绑的api-key的id数组。 **约束限制：** 请求批量解绑api-key的id个数不超过10个。
    /// </summary>

    std::vector<BatchUnBindApiKeyRequest_key_ids>& getKeyIds();
    bool keyIdsIsSet() const;
    void unsetkeyIds();
    void setKeyIds(const std::vector<BatchUnBindApiKeyRequest_key_ids>& value);


protected:
    std::vector<BatchUnBindApiKeyRequest_key_ids> keyIds_;
    bool keyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUnBindApiKeyRequest_H_
