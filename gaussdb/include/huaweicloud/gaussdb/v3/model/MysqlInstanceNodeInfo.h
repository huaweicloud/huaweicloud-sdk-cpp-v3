
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlInstanceNodeVolumeInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceNodeInfo
    : public ModelBase
{
public:
    MysqlInstanceNodeInfo();
    virtual ~MysqlInstanceNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlInstanceNodeInfo members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点类型，master或slave。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 节点状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库端口号。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 节点的读内网地址。
    /// </summary>

    std::vector<std::string>& getPrivateReadIps();
    bool privateReadIpsIsSet() const;
    void unsetprivateReadIps();
    void setPrivateReadIps(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlInstanceNodeVolumeInfo getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const MysqlInstanceNodeVolumeInfo& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 实例所在的区域。
    /// </summary>

    std::string getRegionCode() const;
    bool regionCodeIsSet() const;
    void unsetregionCode();
    void setRegionCode(const std::string& value);

    /// <summary>
    /// 创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式与\&quot;created\&quot;字段对应格式完全相同。说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 规格ID。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 允许的最大连接数。
    /// </summary>

    std::string getMaxConnections() const;
    bool maxConnectionsIsSet() const;
    void unsetmaxConnections();
    void setMaxConnections(const std::string& value);

    /// <summary>
    /// CPU核数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 内存大小，单位为GB。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// 是否需要重启使修改的参数生效。
    /// </summary>

    bool isNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(bool value);

    /// <summary>
    /// 主备倒换优先级。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::vector<std::string> privateReadIps_;
    bool privateReadIpsIsSet_;
    MysqlInstanceNodeVolumeInfo volume_;
    bool volumeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string regionCode_;
    bool regionCodeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string maxConnections_;
    bool maxConnectionsIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    bool needRestart_;
    bool needRestartIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeInfo_H_
