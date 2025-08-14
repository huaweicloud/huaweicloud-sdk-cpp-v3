
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateApplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateApplicationResponse();
    virtual ~UpdateApplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationResponse members

    /// <summary>
    /// 资源空间ID，唯一标识一个资源空间，由物联网平台在创建资源空间时分配。资源空间对应的是物联网平台原有的应用，在物联网平台的含义与应用一致，只是变更了名称。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 资源空间名称。
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 资源空间创建时间，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 是否为默认资源空间
    /// </summary>

    bool isDefaultApp() const;
    bool defaultAppIsSet() const;
    void unsetdefaultApp();
    void setDefaultApp(bool value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    bool defaultApp_;
    bool defaultAppIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationResponse_H_
