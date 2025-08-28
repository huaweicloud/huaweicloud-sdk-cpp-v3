
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateLlmConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateLlmConfigReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改大语言模型配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateLlmConfigReq
    : public ModelBase
{
public:
    UpdateLlmConfigReq();
    virtual ~UpdateLlmConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLlmConfigReq members

    /// <summary>
    /// 大语言模型配置名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 大语言模型地址。
    /// </summary>

    std::string getLlmUrl() const;
    bool llmUrlIsSet() const;
    void unsetllmUrl();
    void setLlmUrl(const std::string& value);

    /// <summary>
    /// 密钥。
    /// </summary>

    std::string getApiKey() const;
    bool apiKeyIsSet() const;
    void unsetapiKey();
    void setApiKey(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string llmUrl_;
    bool llmUrlIsSet_;
    std::string apiKey_;
    bool apiKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateLlmConfigReq_H_
