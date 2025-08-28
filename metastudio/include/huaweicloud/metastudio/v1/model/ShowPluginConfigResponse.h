
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PluginProviderEnum.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowPluginConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPluginConfigResponse();
    virtual ~ShowPluginConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPluginConfigResponse members

    /// <summary>
    /// 插件配置ID。
    /// </summary>

    std::string getPluginConfigId() const;
    bool pluginConfigIdIsSet() const;
    void unsetpluginConfigId();
    void setPluginConfigId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PluginProviderEnum getPluginProvider() const;
    bool pluginProviderIsSet() const;
    void unsetpluginProvider();
    void setPluginProvider(const PluginProviderEnum& value);

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
    std::string pluginConfigId_;
    bool pluginConfigIdIsSet_;
    PluginProviderEnum pluginProvider_;
    bool pluginProviderIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigResponse_H_
