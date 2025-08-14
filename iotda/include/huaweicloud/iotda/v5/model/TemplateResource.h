
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TemplateResource_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TemplateResource_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/PolicyResource.h>
#include <huaweicloud/iotda/v5/model/DeviceResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预调配模板设备资源结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  TemplateResource
    : public ModelBase
{
public:
    TemplateResource();
    virtual ~TemplateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateResource members

    /// <summary>
    /// 
    /// </summary>

    DeviceResource getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const DeviceResource& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyResource getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const PolicyResource& value);


protected:
    DeviceResource device_;
    bool deviceIsSet_;
    PolicyResource policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_TemplateResource_H_
