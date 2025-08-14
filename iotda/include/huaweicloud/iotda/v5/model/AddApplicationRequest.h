
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddApplicationRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddApplicationRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/AddApplication.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddApplicationRequest
    : public ModelBase
{
public:
    AddApplicationRequest();
    virtual ~AddApplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddApplicationRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddApplication getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddApplication& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    AddApplication body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddApplicationRequest& dereference_from_shared_ptr(std::shared_ptr<AddApplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddApplicationRequest_H_
