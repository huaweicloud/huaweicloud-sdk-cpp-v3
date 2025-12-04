
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLlmConfigResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLlmConfigResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowLlmConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLlmConfigResponse();
    virtual ~ShowLlmConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLlmConfigResponse members

    /// <summary>
    /// 大语言模型配置ID。
    /// </summary>

    std::string getLlmConfigId() const;
    bool llmConfigIdIsSet() const;
    void unsetllmConfigId();
    void setLlmConfigId(const std::string& value);

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
    /// model参数
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string llmConfigId_;
    bool llmConfigIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string llmUrl_;
    bool llmUrlIsSet_;
    std::string model_;
    bool modelIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowLlmConfigResponse_H_
