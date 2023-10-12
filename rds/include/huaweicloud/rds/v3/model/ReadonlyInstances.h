
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadonlyInstances_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadonlyInstances_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/AvailableZone.h>
#include <string>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ReadonlyInstances
    : public ModelBase
{
public:
    ReadonlyInstances();
    virtual ~ReadonlyInstances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReadonlyInstances members

    /// <summary>
    /// 只读实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 只读实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 只读实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 只读实例读写分离权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// 可用区信息。
    /// </summary>

    std::vector<AvailableZone>& getAvailableZones();
    bool availableZonesIsSet() const;
    void unsetavailableZones();
    void setAvailableZones(const std::vector<AvailableZone>& value);

    /// <summary>
    /// 只读实例CPU个数。
    /// </summary>

    int32_t getCpuNum() const;
    bool cpuNumIsSet() const;
    void unsetcpuNum();
    void setCpuNum(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::vector<AvailableZone> availableZones_;
    bool availableZonesIsSet_;
    int32_t cpuNum_;
    bool cpuNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ReadonlyInstances_H_
