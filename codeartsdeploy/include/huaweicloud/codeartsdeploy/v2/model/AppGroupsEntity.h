
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppGroupsEntity_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppGroupsEntity_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/AppGroupsEntity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分组信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppGroupsEntity
    : public ModelBase
{
public:
    AppGroupsEntity();
    virtual ~AppGroupsEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppGroupsEntity members

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 分组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分组路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 父分组id，首层为null
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 分组排序字段
    /// </summary>

    int32_t getOrdinal() const;
    bool ordinalIsSet() const;
    void unsetordinal();
    void setOrdinal(int32_t value);

    /// <summary>
    /// 分组创建者用户id
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 最近一次更新该分组用户id
    /// </summary>

    std::string getLastUpdateUserId() const;
    bool lastUpdateUserIdIsSet() const;
    void unsetlastUpdateUserId();
    void setLastUpdateUserId(const std::string& value);

    /// <summary>
    /// 该分组应用总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 子分组列表
    /// </summary>

    std::vector<AppGroupsEntity>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<AppGroupsEntity>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    int32_t ordinal_;
    bool ordinalIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string lastUpdateUserId_;
    bool lastUpdateUserIdIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<AppGroupsEntity>* children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppGroupsEntity_H_
