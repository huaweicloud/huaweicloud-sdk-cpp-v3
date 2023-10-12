
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowFlowLogRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowFlowLogRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowFlowLogRequest
    : public ModelBase
{
public:
    ShowFlowLogRequest();
    virtual ~ShowFlowLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFlowLogRequest members

    /// <summary>
    /// 流日志资源唯一标识
    /// </summary>

    std::string getFlowlogId() const;
    bool flowlogIdIsSet() const;
    void unsetflowlogId();
    void setFlowlogId(const std::string& value);


protected:
    std::string flowlogId_;
    bool flowlogIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFlowLogRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFlowLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowFlowLogRequest_H_
