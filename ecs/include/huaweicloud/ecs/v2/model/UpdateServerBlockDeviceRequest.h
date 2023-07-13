
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateServerBlockDeviceReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerBlockDeviceRequest
    : public ModelBase
{
public:
    UpdateServerBlockDeviceRequest();
    virtual ~UpdateServerBlockDeviceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerBlockDeviceRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 磁盘id，uuid格式
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateServerBlockDeviceReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateServerBlockDeviceReq& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    UpdateServerBlockDeviceReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServerBlockDeviceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServerBlockDeviceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceRequest_H_
