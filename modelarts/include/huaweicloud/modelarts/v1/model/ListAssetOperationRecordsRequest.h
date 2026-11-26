
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetOperationRecordsRequest
    : public ModelBase
{
public:
    ListAssetOperationRecordsRequest();
    virtual ~ListAssetOperationRecordsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetOperationRecordsRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：限制量，单次查询总量，必须由数字组成。 **约束限制**：不涉及。 **取值范围**：1-1000。 **默认取值**：100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：偏移量，查询起始偏移，必须由数字组成。 **约束限制**：不涉及。 **取值范围**0-100000000。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：排序方向。 **约束限制**：不涉及。 **取值范围**： 枚举值： - ASC: 升序 - DESC: 降序。 **默认取值**：DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**：排序字段。 **约束限制**：不涉及。 **取值范围**：枚举值： - created_at: 创建时间 - updated_at: 更新时间。 **默认取值**：created_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**：操作记录ID。 **约束限制**：1-64位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// **参数解释**：作业类型。 **约束限制**：1-40位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务ID。 **约束限制**：1-64位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务名称。 **约束限制**：1-128位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务状态。 **约束限制**：1-40位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getJobStatus() const;
    bool jobStatusIsSet() const;
    void unsetjobStatus();
    void setJobStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：操作用户ID。 **约束限制**：1-36位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：操作用户的用户名。 **约束限制**：1-128位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：资产ID。 **约束限制**：1-64位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产code。 **约束限制**：1-64位字符串。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// **参数解释**：任务是否删除。 **约束限制**：不涉及。 **取值范围**：true,false。 **默认取值**：不涉及。
    /// </summary>

    bool isIsDeleted() const;
    bool isDeletedIsSet() const;
    void unsetisDeleted();
    void setIsDeleted(bool value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobStatus_;
    bool jobStatusIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    bool isDeleted_;
    bool isDeletedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetOperationRecordsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetOperationRecordsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetOperationRecordsRequest_H_
