
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/MysqlAvailableZoneInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceInfo
    : public ModelBase
{
public:
    InstanceInfo();
    virtual ~InstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceInfo members

    /// <summary>
    /// 数据库主实例或只读实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库实例读权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// 可用区信息。
    /// </summary>

    std::vector<MysqlAvailableZoneInfo>& getAvailableZones();
    bool availableZonesIsSet() const;
    void unsetavailableZones();
    void setAvailableZones(const std::vector<MysqlAvailableZoneInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::vector<MysqlAvailableZoneInfo> availableZones_;
    bool availableZonesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceInfo_H_
