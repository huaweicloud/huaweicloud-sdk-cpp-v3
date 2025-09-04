
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobGroupTreeResponseBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobGroupTreeResponseBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobGroupTreeResponseBody.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分组树
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobGroupTreeResponseBody
    : public ModelBase
{
public:
    JobGroupTreeResponseBody();
    virtual ~JobGroupTreeResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobGroupTreeResponseBody members

    /// <summary>
    /// 分组编号
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// CodeArts项目ID。构建任务所在项目的ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父分组编号
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 分组路径
    /// </summary>

    std::string getPathId() const;
    bool pathIdIsSet() const;
    void unsetpathId();
    void setPathId(const std::string& value);

    /// <summary>
    /// 序数
    /// </summary>

    int32_t getOrdinal() const;
    bool ordinalIsSet() const;
    void unsetordinal();
    void setOrdinal(int32_t value);

    /// <summary>
    /// 创建用户
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 更新用户
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 子分组
    /// </summary>

    std::vector<JobGroupTreeResponseBody>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<JobGroupTreeResponseBody>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string pathId_;
    bool pathIdIsSet_;
    int32_t ordinal_;
    bool ordinalIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::vector<JobGroupTreeResponseBody>* children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobGroupTreeResponseBody_H_
