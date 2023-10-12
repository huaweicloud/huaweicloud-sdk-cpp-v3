
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsRequest_H_


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
class HUAWEICLOUD_VPC_V2_EXPORT  ListFlowLogsRequest
    : public ModelBase
{
public:
    ListFlowLogsRequest();
    virtual ~ListFlowLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlowLogsRequest members

    /// <summary>
    /// 流日志资源唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：流日志名称 取值范围：0-64个字符，支持数字、字母、中文、_（下划线）、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：流日志描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：流日志所属资源类型 取值范围：支持port、network、vpc 3种类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// resource_type对应资源的唯一ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 功能说明：流日志采集类型 取值范围：     1）all：采集指定资源的全部流量。     2）accept：采集指定资源允许传入、传出的流量。     3）reject：采集指定资源拒绝传入、传出的流量。
    /// </summary>

    std::string getTrafficType() const;
    bool trafficTypeIsSet() const;
    void unsettrafficType();
    void setTrafficType(const std::string& value);

    /// <summary>
    /// 日志组ID 请在云日志服务中获取，详情请参见《云日志服务用户指南》。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志主题ID 请在云日志服务中获取，详情请参见《云日志服务用户指南》。
    /// </summary>

    std::string getLogTopicId() const;
    bool logTopicIdIsSet() const;
    void unsetlogTopicId();
    void setLogTopicId(const std::string& value);

    /// <summary>
    /// 功能说明：流日志存储类型 取值范围：     lts：存储类型为云日志服务（LTS）。
    /// </summary>

    std::string getLogStoreType() const;
    bool logStoreTypeIsSet() const;
    void unsetlogStoreType();
    void setLogStoreType(const std::string& value);

    /// <summary>
    /// 功能说明：流日志状态 取值范围：     ACTIVE：开启     DOWN：关闭     ERROR：异常故障
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 功能说明：每页返回的个数 取值范围：0 ~ intmax
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 分页查询起始的资源ID，为空时为查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string trafficType_;
    bool trafficTypeIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logTopicId_;
    bool logTopicIdIsSet_;
    std::string logStoreType_;
    bool logStoreTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFlowLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFlowLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListFlowLogsRequest_H_
