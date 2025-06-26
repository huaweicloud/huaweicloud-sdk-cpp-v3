
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlOperateRequest
    : public ModelBase
{
public:
    ShowControlOperateRequest();
    virtual ~ShowControlOperateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlOperateRequest members

    /// <summary>
    /// 操作控制策略的请求ID。
    /// </summary>

    std::string getOperationControlStatusId() const;
    bool operationControlStatusIdIsSet() const;
    void unsetoperationControlStatusId();
    void setOperationControlStatusId(const std::string& value);


protected:
    std::string operationControlStatusId_;
    bool operationControlStatusIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowControlOperateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowControlOperateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateRequest_H_
