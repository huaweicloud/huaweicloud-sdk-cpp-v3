
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4ResponseBody_projects_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4ResponseBody_projects_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/ListProjectsV4ResponseBody_creator.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectsV4ResponseBody_projects
    : public ModelBase
{
public:
    ListProjectsV4ResponseBody_projects();
    virtual ~ListProjectsV4ResponseBody_projects();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectsV4ResponseBody_projects members

    /// <summary>
    /// 项目numId
    /// </summary>

    int32_t getProjectNumId() const;
    bool projectNumIdIsSet() const;
    void unsetprojectNumId();
    void setProjectNumId(int32_t value);

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 项目描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 项目创建时间
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 项目更新时间
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListProjectsV4ResponseBody_creator getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const ListProjectsV4ResponseBody_creator& value);


protected:
    int32_t projectNumId_;
    bool projectNumIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    ListProjectsV4ResponseBody_creator creator_;
    bool creatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectsV4ResponseBody_projects_H_
