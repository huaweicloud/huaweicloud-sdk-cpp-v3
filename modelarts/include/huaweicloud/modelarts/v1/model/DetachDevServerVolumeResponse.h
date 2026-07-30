
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerVolumeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerVolumeResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ServerOperationError.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DetachDevServerVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    DetachDevServerVolumeResponse();
    virtual ~DetachDevServerVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachDevServerVolumeResponse members

    /// <summary>
    /// **参数解释**：操作ID。 **取值范围**：长度为[8,36]个字符。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// **参数解释**：操作状态。 **取值范围**：长度为[8,36]个字符。
    /// </summary>

    std::string getOperationStatus() const;
    bool operationStatusIsSet() const;
    void unsetoperationStatus();
    void setOperationStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：操作类型。 **取值范围**：长度为[8,36]个字符。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerOperationError getOperationError() const;
    bool operationErrorIsSet() const;
    void unsetoperationError();
    void setOperationError(const ServerOperationError& value);


protected:
    std::string operationId_;
    bool operationIdIsSet_;
    std::string operationStatus_;
    bool operationStatusIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    ServerOperationError operationError_;
    bool operationErrorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DetachDevServerVolumeResponse_H_
