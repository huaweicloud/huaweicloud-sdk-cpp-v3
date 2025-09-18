
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/GetProjectInfoV4Result_project_creator.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  GetProjectInfoV4Result_project
    : public ModelBase
{
public:
    GetProjectInfoV4Result_project();
    virtual ~GetProjectInfoV4Result_project();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetProjectInfoV4Result_project members

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

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目创建时间
    /// </summary>

    int64_t getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(int64_t value);

    /// <summary>
    /// 项目更新时间
    /// </summary>

    int64_t getUpdatedOn() const;
    bool updatedOnIsSet() const;
    void unsetupdatedOn();
    void setUpdatedOn(int64_t value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 是否归档
    /// </summary>

    int32_t getArchive() const;
    bool archiveIsSet() const;
    void unsetarchive();
    void setArchive(int32_t value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseId() const;
    bool enterpriseIdIsSet() const;
    void unsetenterpriseId();
    void setEnterpriseId(const std::string& value);

    /// <summary>
    /// 项目代号
    /// </summary>

    std::string getProjectCode() const;
    bool projectCodeIsSet() const;
    void unsetprojectCode();
    void setProjectCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetProjectInfoV4Result_project_creator getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const GetProjectInfoV4Result_project_creator& value);


protected:
    int32_t projectNumId_;
    bool projectNumIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t createdOn_;
    bool createdOnIsSet_;
    int64_t updatedOn_;
    bool updatedOnIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    int32_t archive_;
    bool archiveIsSet_;
    std::string enterpriseId_;
    bool enterpriseIdIsSet_;
    std::string projectCode_;
    bool projectCodeIsSet_;
    GetProjectInfoV4Result_project_creator creator_;
    bool creatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_H_
