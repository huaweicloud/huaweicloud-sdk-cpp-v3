
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineFlavorData_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineFlavorData_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  EngineFlavorData
    : public ModelBase
{
public:
    EngineFlavorData();
    virtual ~EngineFlavorData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EngineFlavorData members

    /// <summary>
    /// CPU大小。例如：1表示1U。
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
    /// 资源规格编码。例如：rds.mysql.m1.xlarge.rr。  更多规格说明请参考数据库实例规格。  “rds”代表RDS产品。 “mysql”代表数据库引擎。 “m1.xlarge”代表性能规格，为高内存类型。 “rr”表示只读实例（“.ha”表示主备实例）。 “rha.rr”表示高可用只读实例，规格编码示例：rds.mysql.n1.large.4.rha.rr。 具有公测权限的用户才可选择高可用，您可联系华为云客服人员申请。 高可用只读功能介绍请参见高可用只读简介。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 是否支持ipv6。
    /// </summary>

    bool isIsIpv6Supported() const;
    bool isIpv6SupportedIsSet() const;
    void unsetisIpv6Supported();
    void setIsIpv6Supported(bool value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getTypeCode() const;
    bool typeCodeIsSet() const;
    void unsettypeCode();
    void setTypeCode(const std::string& value);

    /// <summary>
    /// 规格所在az的状态，包含以下状态： normal：在售。 unsupported：暂不支持该规格。 sellout：售罄。 abandon：未启用
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 性能规格，包含以下状态： normal：通用增强型。 normal2：通用增强Ⅱ型。 armFlavors：鲲鹏通用增强型。 dedicicateNormal（dedicatedNormalLocalssd）：x86独享型。 armLocalssd：鲲鹏通用型。 normalLocalssd：x86通用型。 general：通用型。 dedicated 对于MySQL引擎：独享型。 对于PostgreSQL和SQL Server引擎：独享型，仅云盘SSD支持。 rapid 对于MySQL引擎：独享型（已下线）。 对于PostgreSQL和SQL Server引擎：独享型，仅极速型SSD支持。 bigmem：超大内存型。 highPerformancePrivilegeEdition：超高IO 尊享版
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 最大连接数
    /// </summary>

    std::string getMaxConnection() const;
    bool maxConnectionIsSet() const;
    void unsetmaxConnection();
    void setMaxConnection(const std::string& value);

    /// <summary>
    /// 数据库每秒执行的事务数，每个事务中包含18条SQL语句。
    /// </summary>

    std::string getTps() const;
    bool tpsIsSet() const;
    void unsettps();
    void setTps(const std::string& value);

    /// <summary>
    /// 数据库每秒执行的SQL数，包含insert、select、update、delete等。
    /// </summary>

    std::string getQps() const;
    bool qpsIsSet() const;
    void unsetqps();
    void setQps(const std::string& value);

    /// <summary>
    /// 最小磁盘容量，单位G
    /// </summary>

    std::string getMinVolumeSize() const;
    bool minVolumeSizeIsSet() const;
    void unsetminVolumeSize();
    void setMinVolumeSize(const std::string& value);

    /// <summary>
    /// 最大磁盘容量，单位G
    /// </summary>

    std::string getMaxVolumeSize() const;
    bool maxVolumeSizeIsSet() const;
    void unsetmaxVolumeSize();
    void setMaxVolumeSize(const std::string& value);


protected:
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    bool isIpv6Supported_;
    bool isIpv6SupportedIsSet_;
    std::string typeCode_;
    bool typeCodeIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string maxConnection_;
    bool maxConnectionIsSet_;
    std::string tps_;
    bool tpsIsSet_;
    std::string qps_;
    bool qpsIsSet_;
    std::string minVolumeSize_;
    bool minVolumeSizeIsSet_;
    std::string maxVolumeSize_;
    bool maxVolumeSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_EngineFlavorData_H_
