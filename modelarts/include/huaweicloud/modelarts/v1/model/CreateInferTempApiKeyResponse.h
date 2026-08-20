
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferTempApiKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferTempApiKeyResponse();
    virtual ~CreateInferTempApiKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferTempApiKeyResponse members

    /// <summary>
    /// **参数解释：** 临时apikey。 **取值范围：**不涉及。
    /// </summary>

    std::string getApiKey() const;
    bool apiKeyIsSet() const;
    void unsetapiKey();
    void setApiKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 临时apikey超时时间。 **取值范围：**不涉及。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// **参数解释：** 临时apikey创建时间。 **取值范围：**不涉及。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string apiKey_;
    bool apiKeyIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferTempApiKeyResponse_H_
