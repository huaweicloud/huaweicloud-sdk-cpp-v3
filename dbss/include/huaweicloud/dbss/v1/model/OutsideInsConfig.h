
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_OutsideInsConfig_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_OutsideInsConfig_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云实例配置
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  OutsideInsConfig
    : public ModelBase
{
public:
    OutsideInsConfig();
    virtual ~OutsideInsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutsideInsConfig members

    /// <summary>
    /// 主节点IP
    /// </summary>

    std::string getMasterNodeIp() const;
    bool masterNodeIpIsSet() const;
    void unsetmasterNodeIp();
    void setMasterNodeIp(const std::string& value);

    /// <summary>
    /// 从节点IP
    /// </summary>

    std::string getSlaveNodeIp() const;
    bool slaveNodeIpIsSet() const;
    void unsetslaveNodeIp();
    void setSlaveNodeIp(const std::string& value);

    /// <summary>
    /// 虚拟IP
    /// </summary>

    std::string getVirtualIp() const;
    bool virtualIpIsSet() const;
    void unsetvirtualIp();
    void setVirtualIp(const std::string& value);


protected:
    std::string masterNodeIp_;
    bool masterNodeIpIsSet_;
    std::string slaveNodeIp_;
    bool slaveNodeIpIsSet_;
    std::string virtualIp_;
    bool virtualIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_OutsideInsConfig_H_
