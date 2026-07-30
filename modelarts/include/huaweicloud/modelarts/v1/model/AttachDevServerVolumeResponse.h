
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerVolumeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerVolumeResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachDevServerVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachDevServerVolumeResponse();
    virtual ~AttachDevServerVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachDevServerVolumeResponse members

    /// <summary>
    /// **参数解释**：操作ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// **参数解释**：操作状态。 **取值范围**： - pending 等待处理 - running 运行中 - success 成功 - failed 失败
    /// </summary>

    std::string getOperationStatus() const;
    bool operationStatusIsSet() const;
    void unsetoperationStatus();
    void setOperationStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：操作类型。 **取值范围**：node_attach_volume
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string operationId_;
    bool operationIdIsSet_;
    std::string operationStatus_;
    bool operationStatusIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachDevServerVolumeResponse_H_
