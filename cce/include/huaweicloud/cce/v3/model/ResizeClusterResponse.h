
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResizeClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    ResizeClusterResponse();
    virtual ~ResizeClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeClusterResponse members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobID() const;
    bool jobIDIsSet() const;
    void unsetjobID();
    void setJobID(const std::string& value);

    /// <summary>
    /// 包周期集群变更规格订单ID
    /// </summary>

    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);


protected:
    std::string jobID_;
    bool jobIDIsSet_;
    std::string orderID_;
    bool orderIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterResponse_H_
