
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferServicesRequest
    : public ModelBase
{
public:
    ListInferServicesRequest();
    virtual ~ListInferServicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferServicesRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID，查询指定资源池下的服务，默认不过滤。可通过[查询资源池列表](ShowPool.xml)获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池name，查询指定资源池下的服务，默认不过滤。可通过[查询资源池列表](ShowPool.xml)获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序字段，多个字段以\&quot;,\&quot;分隔，支持create_at, update_at，默认值update_at。 **约束限制：** 不涉及。 **取值范围：** - create_at：按创建时间排序。 - update_at：按更新时间排序。 **默认取值：** update_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务当前状态，查询指定状态的过滤。默认不过滤。 **约束限制：** 不涉及。 **取值范围：** - DEPLOYING：部署中。 - FAILED：失败。 - STOPPED：停止。 - RUNNING：运行中。 - DELETING：删除中。 - STOPPING：停止中。 - CONCERNING：告警。 - UPGRADING：升级中。 - ERROR：异常。 - INTERRUPTING：中断中。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名，用户在[创建服务](CreateInferService.xml)时自定义。 **约束限制：** 服务在删除之前名字不能重复。 **取值范围：** 支持1-128个字符，可以包含字母、汉字、数字、连字符和下划线。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 认证类型，默认不过滤。 **约束限制：** 不涉及。 **取值范围：** - TOKEN：IAM Token认证。 - API_KEY：API Key认证。 - NONE：无认证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理服务类型。 **约束限制：** 不涉及。 **取值范围：** - REAL_TIME：在线服务。 - ASYNC_REAL_TIME：异步服务。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务描述，模糊查询，默认不过滤。由用户[创建服务](CreateInferService.xml)时自行填写。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** - 0：默认空间ID - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml) **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建者，即创建服务的用户名。 **约束限制：** 不涉及。 **取值范围：** 创建服务的用户名。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签，查询指定标签的服务，默认不过滤。根据标签过滤service参数，格式：每组tag之间使用英文逗号分隔，每个标签内的key和value使用英文竖划线分隔，例：tag_key1|tag_value1,tag_key2|tag_value2 **约束限制：** 不以逗号，竖划线开头，不以逗号结尾，不出现连续的竖划线和逗号，允许中文、西文、葡文等语言以及空格_.:/&#x3D;+-@特殊字符，且字符间以逗号或者竖划线分隔。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// **参数解释：** 资产ID，查询使用了指定资产的服务，默认不过滤。可通过[资产管理][模型列表]获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式 **约束限制：** 不涉及。 **取值范围：** - ASC: 递增排序。 - DESC: 递减排序。 **默认取值：** DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 分页列表查询的偏移量。 **约束限制：** offset必须是limit的整数倍。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 消息体的类型（格式）。 **约束限制：** 不涉及。 **取值范围：** - application/json。 - application/json;charset&#x3D;utf-8。 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferServicesRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferServicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesRequest_H_
