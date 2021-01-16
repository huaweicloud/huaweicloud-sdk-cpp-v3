
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreateServersResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateServersResponse();
    virtual ~CreateServersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServersResponse members

    /// <summary>
    /// 提交任务成功后返回的任务ID，用户可以使用该ID对任务执行情况进行查询。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 订单号，创建包年包月的弹性云服务器时返回该参数。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 云服务器ID列表。  通过云服务器ID查询云服务器详情 ，若返回404 可能云服务器还在创建或者已经创建失败。
    /// </summary>

    std::vector<std::string>& getServerIds();
    bool serverIdsIsSet() const;
    void unsetserverIds();
    void setServerIds(const std::vector<std::string>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::vector<std::string> serverIds_;
    bool serverIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServersResponse_H_
