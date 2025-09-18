
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteProjectModuleRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteProjectModuleRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteProjectModuleRequest
    : public ModelBase
{
public:
    DeleteProjectModuleRequest();
    virtual ~DeleteProjectModuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteProjectModuleRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    int32_t getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t moduleId_;
    bool moduleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteProjectModuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteProjectModuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteProjectModuleRequest_H_
