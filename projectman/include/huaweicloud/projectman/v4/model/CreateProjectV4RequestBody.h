
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4RequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectV4RequestBody
    : public ModelBase
{
public:
    CreateProjectV4RequestBody();
    virtual ~CreateProjectV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectV4RequestBody members

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
    /// 项目来源
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 项目类型 scrum, xboard(看板项目), basic, phoenix(凤凰项目)
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 项目要绑定的企业项目ID
    /// </summary>

    std::string getEnterpriseId() const;
    bool enterpriseIdIsSet() const;
    void unsetenterpriseId();
    void setEnterpriseId(const std::string& value);

    /// <summary>
    /// 用户创建的项目模板id
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


protected:
    std::string projectName_;
    bool projectNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    std::string enterpriseId_;
    bool enterpriseIdIsSet_;
    int32_t templateId_;
    bool templateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4RequestBody_H_
