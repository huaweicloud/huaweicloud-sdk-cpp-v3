
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowServerCertificateRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowServerCertificateRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowServerCertificateRequest
    : public ModelBase
{
public:
    ShowServerCertificateRequest();
    virtual ~ShowServerCertificateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerCertificateRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，建议携带该参数，在使用专业版时必须携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID，具体获取方式请参考[[查看实例详情](https://support.huaweicloud.com/usermanual-iothub/iot_01_0079.html#section1)](tag:hws) [[查看实例详情](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0079.html#section1)](tag:hws_hk)。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 服务器证书ID，由平台分配的唯一标识。
    /// </summary>

    std::string getServerCertificateId() const;
    bool serverCertificateIdIsSet() const;
    void unsetserverCertificateId();
    void setServerCertificateId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string serverCertificateId_;
    bool serverCertificateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerCertificateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerCertificateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowServerCertificateRequest_H_
