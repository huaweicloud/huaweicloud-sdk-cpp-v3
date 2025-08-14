
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteCertificateRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteCertificateRequest_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeleteCertificateRequest
    : public ModelBase
{
public:
    DeleteCertificateRequest();
    virtual ~DeleteCertificateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteCertificateRequest members

    /// <summary>
    /// Sp用户Token。通过调用IoBPS服务获取SP用户Token
    /// </summary>

    std::string getSpAuthToken() const;
    bool spAuthTokenIsSet() const;
    void unsetspAuthToken();
    void setSpAuthToken(const std::string& value);

    /// <summary>
    /// Stage用户的Token, 仅提供给IoStage服务使用
    /// </summary>

    std::string getStageAuthToken() const;
    bool stageAuthTokenIsSet() const;
    void unsetstageAuthToken();
    void setStageAuthToken(const std::string& value);

    /// <summary>
    /// 实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 设备CA证书ID，在上传设备CA证书时由平台分配的唯一标识。
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);


protected:
    std::string spAuthToken_;
    bool spAuthTokenIsSet_;
    std::string stageAuthToken_;
    bool stageAuthTokenIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string certificateId_;
    bool certificateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteCertificateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteCertificateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeleteCertificateRequest_H_
