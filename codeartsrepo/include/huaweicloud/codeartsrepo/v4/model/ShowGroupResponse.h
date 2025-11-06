
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/GroupSumDto.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupResponse();
    virtual ~ShowGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupResponse members

    /// <summary>
    /// 创建者id
    /// </summary>

    int32_t getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 代码组全名
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// 代码组层级路径id
    /// </summary>

    std::vector<int32_t>& getAncestorIds();
    bool ancestorIdsIsSet() const;
    void unsetancestorIds();
    void setAncestorIds(std::vector<int32_t> value);

    /// <summary>
    /// 代码组层级路径名称
    /// </summary>

    std::vector<std::string>& getAncestorNames();
    bool ancestorNamesIsSet() const;
    void unsetancestorNames();
    void setAncestorNames(const std::vector<std::string>& value);

    /// <summary>
    /// 代码组id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 代码组成员计数
    /// </summary>

    int32_t getMembersCount() const;
    bool membersCountIsSet() const;
    void unsetmembersCount();
    void setMembersCount(int32_t value);

    /// <summary>
    /// 代码组名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 仓库计数
    /// </summary>

    int32_t getRepositoryCount() const;
    bool repositoryCountIsSet() const;
    void unsetrepositoryCount();
    void setRepositoryCount(int32_t value);

    /// <summary>
    /// 关注计数
    /// </summary>

    int32_t getStarCount() const;
    bool starCountIsSet() const;
    void unsetstarCount();
    void setStarCount(int32_t value);

    /// <summary>
    /// 是否关注
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

    /// <summary>
    /// 子组计数
    /// </summary>

    int32_t getSubgroupCount() const;
    bool subgroupCountIsSet() const;
    void unsetsubgroupCount();
    void setSubgroupCount(int32_t value);

    /// <summary>
    /// 可见性, private public
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GroupSumDto getSum() const;
    bool sumIsSet() const;
    void unsetsum();
    void setSum(const GroupSumDto& value);


protected:
    int32_t creatorId_;
    bool creatorIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    std::vector<int32_t> ancestorIds_;
    bool ancestorIdsIsSet_;
    std::vector<std::string> ancestorNames_;
    bool ancestorNamesIsSet_;
    int32_t id_;
    bool idIsSet_;
    int32_t membersCount_;
    bool membersCountIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t repositoryCount_;
    bool repositoryCountIsSet_;
    int32_t starCount_;
    bool starCountIsSet_;
    bool starred_;
    bool starredIsSet_;
    int32_t subgroupCount_;
    bool subgroupCountIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    GroupSumDto sum_;
    bool sumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupResponse_H_
