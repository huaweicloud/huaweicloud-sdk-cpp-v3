
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectModule_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectModule_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ModuleOwner.h>
#include <string>
#include <huaweicloud/projectman/v4/model/ProjectChildModule.h>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProjectModule
    : public ModelBase
{
public:
    ProjectModule();
    virtual ~ProjectModule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectModule members

    /// <summary>
    /// 模块id
    /// </summary>

    int32_t getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(int32_t value);

    /// <summary>
    /// 模块名称
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModuleOwner getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const ModuleOwner& value);

    /// <summary>
    /// 模块层级
    /// </summary>

    int32_t getDeepth() const;
    bool deepthIsSet() const;
    void unsetdeepth();
    void setDeepth(int32_t value);

    /// <summary>
    /// 是否是父级，true 父模块， false 非父模块
    /// </summary>

    bool isIsParent() const;
    bool isParentIsSet() const;
    void unsetisParent();
    void setIsParent(bool value);

    /// <summary>
    /// 子模块信息
    /// </summary>

    std::vector<ProjectChildModule>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<ProjectChildModule>& value);


protected:
    int32_t moduleId_;
    bool moduleIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    ModuleOwner owner_;
    bool ownerIsSet_;
    int32_t deepth_;
    bool deepthIsSet_;
    bool isParent_;
    bool isParentIsSet_;
    std::vector<ProjectChildModule> children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProjectModule_H_
