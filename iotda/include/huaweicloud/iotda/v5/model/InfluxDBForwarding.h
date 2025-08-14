
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InfluxDBForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InfluxDBForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ColumnMapping.h>
#include <string>
#include <huaweicloud/iotda/v5/model/NetAddress.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// InfluxDB配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  InfluxDBForwarding
    : public ModelBase
{
public:
    InfluxDBForwarding();
    virtual ~InfluxDBForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InfluxDBForwarding members

    /// <summary>
    /// 
    /// </summary>

    NetAddress getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const NetAddress& value);

    /// <summary>
    /// **参数说明**：连接InfluxDB数据库的库名,不存在会自动创建
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数说明**：连接InfluxDB数据库的用户名
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数说明**：连接InfluxDB数据库的密码
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数说明**：InfluxDB数据库的measurement,不存在会自动创建
    /// </summary>

    std::string getMeasurement() const;
    bool measurementIsSet() const;
    void unsetmeasurement();
    void setMeasurement(const std::string& value);

    /// <summary>
    /// **参数说明**：InfluxDB数据库和流转数据的对应关系列表。
    /// </summary>

    std::vector<ColumnMapping>& getColumnMappings();
    bool columnMappingsIsSet() const;
    void unsetcolumnMappings();
    void setColumnMappings(const std::vector<ColumnMapping>& value);


protected:
    NetAddress address_;
    bool addressIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string measurement_;
    bool measurementIsSet_;
    std::vector<ColumnMapping> columnMappings_;
    bool columnMappingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InfluxDBForwarding_H_
