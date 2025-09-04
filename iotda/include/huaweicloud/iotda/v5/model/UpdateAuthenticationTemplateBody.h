
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateBody_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateBody_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/UpdateAuthenticationTemplateResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新鉴权模板详细内容。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateAuthenticationTemplateBody
    : public ModelBase
{
public:
    UpdateAuthenticationTemplateBody();
    virtual ~UpdateAuthenticationTemplateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuthenticationTemplateBody members

    /// <summary>
    /// **参数说明**：鉴权模板参数，目前平台预制了mqtt协议连接参数中的clientId，username与设备证书中的属性，参数名定义如下: - iotda::mqtt::client_id ：mqtt连接参数三元组中的Client Id - iotda::mqtt::username ：mqtt连接参数三元组中的User Name - iotda::certificate::country (国家/地区,C ) - iotda::certificate::organization (组织,O) - iotda::certificate::organizational_unit (组织单位,OU) - iotda::certificate::distinguished_name_qualifier (可辨别名称限定符,dnQualifier) - iotda::certificate::state_name (省市,ST) - iotda::certificate::common_name (公用名,CN) - iotda::certificate::serial_number (序列号,serialNumber) - iotda::device::secret ：表示设备原始秘钥
    /// </summary>

    Object getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateAuthenticationTemplateResource getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const UpdateAuthenticationTemplateResource& value);


protected:
    Object parameters_;
    bool parametersIsSet_;
    UpdateAuthenticationTemplateResource resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateBody_H_
