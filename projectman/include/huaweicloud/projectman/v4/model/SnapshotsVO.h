
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotsVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotsVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 快照视图对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SnapshotsVO
    : public ModelBase
{
public:
    SnapshotsVO();
    virtual ~SnapshotsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotsVO members

    /// <summary>
    /// 快照标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 快照记录工作项。键为工作项类型编码（如 Bug、IR），值为 IssueVO 对象或工作项ID字符串。
    /// </summary>

    Object getSnapshot2workitem() const;
    bool snapshot2workitemIsSet() const;
    void unsetsnapshot2workitem();
    void setSnapshot2workitem(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserVO& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserVO& value);

    /// <summary>
    /// 工作项类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工作项父子挂载路径。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 快照ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 快照创建时间，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 快照最后修改时间，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 项目空间ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 快照类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 快照基础信息ID。
    /// </summary>

    std::string getSnapBaseInfoId() const;
    bool snapBaseInfoIdIsSet() const;
    void unsetsnapBaseInfoId();
    void setSnapBaseInfoId(const std::string& value);

    /// <summary>
    /// 工作项类型编码。
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 父工作项ID。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 根工作项ID。
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 父工作项完整路径。
    /// </summary>

    std::string getParentFullPath() const;
    bool parentFullPathIsSet() const;
    void unsetparentFullPath();
    void setParentFullPath(const std::string& value);

    /// <summary>
    /// 父工作项路径。
    /// </summary>

    std::string getParentPath() const;
    bool parentPathIsSet() const;
    void unsetparentPath();
    void setParentPath(const std::string& value);

    /// <summary>
    /// 工作项完整路径。
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// 快照版本号。
    /// </summary>

    int32_t getVersionNumber() const;
    bool versionNumberIsSet() const;
    void unsetversionNumber();
    void setVersionNumber(int32_t value);

    /// <summary>
    /// 是否可删除。
    /// </summary>

    bool isDeletable() const;
    bool deletableIsSet() const;
    void unsetdeletable();
    void setDeletable(bool value);

    /// <summary>
    /// 工作项类型名称。
    /// </summary>

    std::string getCategoryName() const;
    bool categoryNameIsSet() const;
    void unsetcategoryName();
    void setCategoryName(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    Object snapshot2workitem_;
    bool snapshot2workitemIsSet_;
    UserVO createdBy_;
    bool createdByIsSet_;
    UserVO modifiedBy_;
    bool modifiedByIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string snapBaseInfoId_;
    bool snapBaseInfoIdIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    std::string parentFullPath_;
    bool parentFullPathIsSet_;
    std::string parentPath_;
    bool parentPathIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    int32_t versionNumber_;
    bool versionNumberIsSet_;
    bool deletable_;
    bool deletableIsSet_;
    std::string categoryName_;
    bool categoryNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotsVO_H_
