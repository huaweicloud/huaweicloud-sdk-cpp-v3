
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChangeInstanceChargeModeRequest_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChangeInstanceChargeModeRequest_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotdm/v5/model/ChangeInstanceChargeMode.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ChangeInstanceChargeModeRequest
    : public ModelBase
{
public:
    ChangeInstanceChargeModeRequest();
    virtual ~ChangeInstanceChargeModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeInstanceChargeModeRequest members

    /// <summary>
    /// **参数说明**：实例ID。 **取值范围**：长度不超过36，由小写字母[a-f]、数字、连接符（-）的组成。 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeInstanceChargeMode getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeInstanceChargeMode& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    ChangeInstanceChargeMode body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeInstanceChargeModeRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeInstanceChargeModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ChangeInstanceChargeModeRequest_H_
