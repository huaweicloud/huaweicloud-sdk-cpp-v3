
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ModuleOwner.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectModuleResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateProjectModuleResponse();
    virtual ~CreateProjectModuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectModuleResponse members

    /// <summary>
    /// 模块描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模块名称
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    int32_t getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ModuleOwner getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const ModuleOwner& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    int32_t moduleId_;
    bool moduleIdIsSet_;
    ModuleOwner owner_;
    bool ownerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleResponse_H_
