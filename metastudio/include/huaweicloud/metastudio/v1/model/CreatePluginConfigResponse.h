
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigResponse_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePluginConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePluginConfigResponse();
    virtual ~CreatePluginConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePluginConfigResponse members

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

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string pluginConfigId_;
    bool pluginConfigIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePluginConfigResponse_H_
