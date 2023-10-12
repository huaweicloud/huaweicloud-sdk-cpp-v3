
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowConnectionStatisticsRequest
    : public ModelBase
{
public:
    ShowConnectionStatisticsRequest();
    virtual ~ShowConnectionStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConnectionStatisticsRequest members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 节点ID。 - 如取空值，则默认查询实例下所有允许连接的节点的连接数信息。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowConnectionStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowConnectionStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConnectionStatisticsRequest_H_
