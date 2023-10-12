
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ModifyVolumeQoSRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ModifyVolumeQoSRequest
    : public ModelBase
{
public:
    ModifyVolumeQoSRequest();
    virtual ~ModifyVolumeQoSRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyVolumeQoSRequest members

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyVolumeQoSRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyVolumeQoSRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    ModifyVolumeQoSRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyVolumeQoSRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyVolumeQoSRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSRequest_H_
