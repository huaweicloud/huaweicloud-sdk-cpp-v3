
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Project_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Project_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/User.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Project
    : public ModelBase
{
public:
    Project();
    virtual ~Project();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Project members

    /// <summary>
    /// devcloud项目的数字id
    /// </summary>

    int32_t getProjectNumId() const;
    bool projectNumIdIsSet() const;
    void unsetprojectNumId();
    void setProjectNumId(int32_t value);

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

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
    /// 项目代号
    /// </summary>

    std::string getProjectCode() const;
    bool projectCodeIsSet() const;
    void unsetprojectCode();
    void setProjectCode(const std::string& value);

    /// <summary>
    /// 区域region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 是否归档
    /// </summary>

    bool isIsArchived() const;
    bool isArchivedIsSet() const;
    void unsetisArchived();
    void setIsArchived(bool value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    User getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const User& value);


protected:
    int32_t projectNumId_;
    bool projectNumIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;
    std::string projectCode_;
    bool projectCodeIsSet_;
    std::string region_;
    bool regionIsSet_;
    bool isArchived_;
    bool isArchivedIsSet_;
    std::string type_;
    bool typeIsSet_;
    User creator_;
    bool creatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Project_H_
