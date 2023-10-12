
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReq_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateFlowLogReq
    : public ModelBase
{
public:
    CreateFlowLogReq();
    virtual ~CreateFlowLogReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowLogReq members

    /// <summary>
    /// 功能说明：流日志名称 取值范围：0-64个字符，支持数字、字母、中文、_（下划线）、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：流日志描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：流日志所属资源类型 取值范围：支持port、network、vpc 类型。
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
    /// 功能说明：是否开启日志索引 取值范围：true，false
    /// </summary>

    bool isIndexEnabled() const;
    bool indexEnabledIsSet() const;
    void unsetindexEnabled();
    void setIndexEnabled(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
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
    bool indexEnabled_;
    bool indexEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateFlowLogReq_H_
