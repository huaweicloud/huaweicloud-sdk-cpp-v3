
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Response_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectV4Response
    : public ModelBase, public HttpResponse
{
public:
    CreateProjectV4Response();
    virtual ~CreateProjectV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectV4Response members

    /// <summary>
    /// 项目数字id
    /// </summary>

    int32_t getProjectNumId() const;
    bool projectNumIdIsSet() const;
    void unsetprojectNumId();
    void setProjectNumId(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名
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
    /// 项目类型
    /// </summary>

    std::string getProjectType() const;
    bool projectTypeIsSet() const;
    void unsetprojectType();
    void setProjectType(const std::string& value);

    /// <summary>
    /// 创建者的数字id
    /// </summary>

    int32_t getUserNumId() const;
    bool userNumIdIsSet() const;
    void unsetuserNumId();
    void setUserNumId(int32_t value);


protected:
    int32_t projectNumId_;
    bool projectNumIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string projectType_;
    bool projectTypeIsSet_;
    int32_t userNumId_;
    bool userNumIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectV4Response_H_
