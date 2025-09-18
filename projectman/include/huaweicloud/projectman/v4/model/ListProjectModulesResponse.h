
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectModulesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectModulesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ProjectModule.h>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectModulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectModulesResponse();
    virtual ~ListProjectModulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectModulesResponse members

    /// <summary>
    /// 模块总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 模块列表
    /// </summary>

    std::vector<ProjectModule>& getModules();
    bool modulesIsSet() const;
    void unsetmodules();
    void setModules(const std::vector<ProjectModule>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ProjectModule> modules_;
    bool modulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectModulesResponse_H_
