
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowOperationRequest
    : public ModelBase
{
public:
    ShowOperationRequest();
    virtual ~ShowOperationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOperationRequest members

    /// <summary>
    /// 操作ID。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);


protected:
    std::string operationId_;
    bool operationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOperationRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOperationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationRequest_H_
