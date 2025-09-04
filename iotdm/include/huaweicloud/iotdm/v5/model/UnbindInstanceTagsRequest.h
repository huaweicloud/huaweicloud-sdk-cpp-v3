
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UnbindInstanceTagsRequest_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UnbindInstanceTagsRequest_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/UnbindInstanceTags.h>
#include <string>

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
class HUAWEICLOUD_IOTDM_V5_EXPORT  UnbindInstanceTagsRequest
    : public ModelBase
{
public:
    UnbindInstanceTagsRequest();
    virtual ~UnbindInstanceTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnbindInstanceTagsRequest members

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

    UnbindInstanceTags getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UnbindInstanceTags& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    UnbindInstanceTags body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UnbindInstanceTagsRequest& dereference_from_shared_ptr(std::shared_ptr<UnbindInstanceTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UnbindInstanceTagsRequest_H_
