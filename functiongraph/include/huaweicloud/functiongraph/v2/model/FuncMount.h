
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncMount_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncMount_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数挂载结构体。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FuncMount
    : public ModelBase
{
public:
    FuncMount();
    virtual ~FuncMount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuncMount members

    /// <summary>
    /// 挂载类型(sfs/sfsTurbo/ecs)，func_mounts非空时必选。
    /// </summary>

    std::string getMountType() const;
    bool mountTypeIsSet() const;
    void unsetmountType();
    void setMountType(const std::string& value);

    /// <summary>
    /// 挂载资源ID（对应云服务ID），func_mounts非空时必选。
    /// </summary>

    std::string getMountResource() const;
    bool mountResourceIsSet() const;
    void unsetmountResource();
    void setMountResource(const std::string& value);

    /// <summary>
    /// 远端挂载路径（例如192.168.0.12:/data），如果mount_type为ecs，必选。
    /// </summary>

    std::string getMountSharePath() const;
    bool mountSharePathIsSet() const;
    void unsetmountSharePath();
    void setMountSharePath(const std::string& value);

    /// <summary>
    /// 函数访问路径，func_mounts非空时必选。
    /// </summary>

    std::string getLocalMountPath() const;
    bool localMountPathIsSet() const;
    void unsetlocalMountPath();
    void setLocalMountPath(const std::string& value);


protected:
    std::string mountType_;
    bool mountTypeIsSet_;
    std::string mountResource_;
    bool mountResourceIsSet_;
    std::string mountSharePath_;
    bool mountSharePathIsSet_;
    std::string localMountPath_;
    bool localMountPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncMount_H_
