
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_volume_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_volume_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例节点存储信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseNodeInfo_volume
    : public ModelBase
{
public:
    ClickHouseNodeInfo_volume();
    virtual ~ClickHouseNodeInfo_volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseNodeInfo_volume members

    /// <summary>
    /// 实例节点存储类型。 取值范围： - SSD：超高IO - ESSD：极速型SSD
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例节点存储大小。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 实例节点存储使用大小。
    /// </summary>

    std::string getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const std::string& value);

    /// <summary>
    /// 实例节点存储IOPS大小。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string used_;
    bool usedIsSet_;
    int32_t iops_;
    bool iopsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfo_volume_H_
