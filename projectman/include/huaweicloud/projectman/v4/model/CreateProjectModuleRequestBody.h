
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserRequest.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateProjectModuleRequestBody
    : public ModelBase
{
public:
    CreateProjectModuleRequestBody();
    virtual ~CreateProjectModuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateProjectModuleRequestBody members

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
    /// 父模块id
    /// </summary>

    int32_t getParentModuleId() const;
    bool parentModuleIdIsSet() const;
    void unsetparentModuleId();
    void setParentModuleId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UserRequest getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const UserRequest& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    int32_t parentModuleId_;
    bool parentModuleIdIsSet_;
    UserRequest owner_;
    bool ownerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateProjectModuleRequestBody_H_
