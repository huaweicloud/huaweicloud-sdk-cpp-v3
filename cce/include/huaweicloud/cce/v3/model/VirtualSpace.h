
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_VirtualSpace_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_VirtualSpace_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/RuntimeConfig.h>
#include <string>
#include <huaweicloud/cce/v3/model/LVMConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  VirtualSpace
    : public ModelBase
{
public:
    VirtualSpace();
    virtual ~VirtualSpace();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VirtualSpace members

    /// <summary>
    /// virtualSpace的名称，当前仅支持四种类型：share、kubernetes、runtime、user。 - share：共享磁盘空间配置(取消runtime和kubernetes分区)，需配置lvmConfig； - kubernetes：k8s空间配置，需配置lvmConfig； - runtime：运行时空间配置，需配置runtimeConfig； - user：用户空间配置，需配置lvmConfig 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// virtualSpace的大小，仅支持整数百分比。例如：90%。 &gt;一个group中所有virtualSpace的百分比之和不得超过100% 
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LVMConfig getLvmConfig() const;
    bool lvmConfigIsSet() const;
    void unsetlvmConfig();
    void setLvmConfig(const LVMConfig& value);

    /// <summary>
    /// 
    /// </summary>

    RuntimeConfig getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const RuntimeConfig& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string size_;
    bool sizeIsSet_;
    LVMConfig lvmConfig_;
    bool lvmConfigIsSet_;
    RuntimeConfig runtimeConfig_;
    bool runtimeConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_VirtualSpace_H_
