
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_fe_volume_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_fe_volume_H_


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
/// FE节点存储规格。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksCreateRequest_fe_volume
    : public ModelBase
{
public:
    StarRocksCreateRequest_fe_volume();
    virtual ~StarRocksCreateRequest_fe_volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksCreateRequest_fe_volume members

    /// <summary>
    /// 磁盘类型。通过查询HTAP引擎资源返回消息获取。
    /// </summary>

    std::string getIoType() const;
    bool ioTypeIsSet() const;
    void unsetioType();
    void setIoType(const std::string& value);

    /// <summary>
    /// 磁盘容量，单位GB 增长的步长：10GB。
    /// </summary>

    int32_t getCapacityInGb() const;
    bool capacityInGbIsSet() const;
    void unsetcapacityInGb();
    void setCapacityInGb(int32_t value);


protected:
    std::string ioType_;
    bool ioTypeIsSet_;
    int32_t capacityInGb_;
    bool capacityInGbIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_fe_volume_H_
