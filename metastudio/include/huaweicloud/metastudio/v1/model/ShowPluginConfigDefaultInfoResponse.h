
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigDefaultInfoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigDefaultInfoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/DefaultPluginInfo.h>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowPluginConfigDefaultInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPluginConfigDefaultInfoResponse();
    virtual ~ShowPluginConfigDefaultInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPluginConfigDefaultInfoResponse members

    /// <summary>
    /// 默认插件支持列表
    /// </summary>

    std::vector<DefaultPluginInfo>& getDefaultPluginList();
    bool defaultPluginListIsSet() const;
    void unsetdefaultPluginList();
    void setDefaultPluginList(const std::vector<DefaultPluginInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<DefaultPluginInfo> defaultPluginList_;
    bool defaultPluginListIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowPluginConfigDefaultInfoResponse_H_
