
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesRequest
    : public ModelBase
{
public:
    ListProtectedInstancesRequest();
    virtual ~ListProtectedInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectedInstancesRequest members

    /// <summary>
    /// 保护组的ID，表示查询该保护组下的所有保护实例列表。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 保护组的ID列表，格式为server_group_ids&#x3D;[&#39;server_group_id1&#39;,&#39;server_group_id2&#39;,...,&#39;server_group_idx&#39;]，请使用URL编码进行转换。返回“server_group_ids”中有效server_group_id的所有保护实例列表，无效的server_group_id会被忽略。支持查询最多30个server_group_id对应的所有保护实例列表。如果“server_group_id”和“server_group_ids”查询参数同时存在，“server_group_id”会被忽略。
    /// </summary>

    std::string getServerGroupIds() const;
    bool serverGroupIdsIsSet() const;
    void unsetserverGroupIds();
    void setServerGroupIds(const std::string& value);

    /// <summary>
    /// 保护实例的ID列表，格式为protected_instance_ids&#x3D;[&#39;protected_instance_id1&#39;,&#39;protected_instance_id2&#39;,...,&#39;protected_instance_idx&#39;]，请使用URL编码进行转换。返回“protected_instance_ids”中有效protected_instance_id的所有保护实例列表，无效的protected_instance_id会被忽略。支持查询最多30个protected_instance_id对应的所有保护实例列表。如果“server_group_id”或者“server_group_ids”查询参数存在时，“protected_instance_ids”会被忽略。
    /// </summary>

    std::string getProtectedInstanceIds() const;
    bool protectedInstanceIdsIsSet() const;
    void unsetprotectedInstanceIds();
    void setProtectedInstanceIds(const std::string& value);

    /// <summary>
    /// 每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 保护实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 保护实例的名称。支持模糊查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 查询场景类型。status_abnormal：表示查询异常状态的保护实例列表。general或空时：该参数不生效。
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 保护实例所在的保护组的当前生产站点可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string serverGroupIds_;
    bool serverGroupIdsIsSet_;
    std::string protectedInstanceIds_;
    bool protectedInstanceIdsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProtectedInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListProtectedInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesRequest_H_
