
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/MountUser.h>
#include <huaweicloud/functiongraph/v2/model/FuncMount.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数挂载配置。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  MountConfig
    : public ModelBase
{
public:
    MountConfig();
    virtual ~MountConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MountConfig members

    /// <summary>
    /// 
    /// </summary>

    MountUser getMountUser() const;
    bool mountUserIsSet() const;
    void unsetmountUser();
    void setMountUser(const MountUser& value);

    /// <summary>
    /// 函数挂载列表。
    /// </summary>

    std::vector<FuncMount>& getFuncMounts();
    bool funcMountsIsSet() const;
    void unsetfuncMounts();
    void setFuncMounts(const std::vector<FuncMount>& value);


protected:
    MountUser mountUser_;
    bool mountUserIsSet_;
    std::vector<FuncMount> funcMounts_;
    bool funcMountsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountConfig_H_
