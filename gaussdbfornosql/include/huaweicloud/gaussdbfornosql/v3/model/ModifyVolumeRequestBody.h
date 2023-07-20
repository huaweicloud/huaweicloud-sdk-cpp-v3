
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyVolumeRequestBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ModifyVolumeRequestBody
    : public ModelBase
{
public:
    ModifyVolumeRequestBody();
    virtual ~ModifyVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyVolumeRequestBody members

    /// <summary>
    /// 待变更到的磁盘容量。单位GB，取值为整数。 扩容场景下，必须大于当前磁盘容量。 缩容场景下，必须大于已用量的125%，向上取整。 磁盘容量的上下限与所选引擎类型以及规格相关。   - [GaussDB(for Cassandra)请参见[数据库实例规格](https://support.huaweicloud.com/cassandraug-nosql/nosql_05_0017.html)。](tag:hc)   - [GaussDB(for Cassandra)请参见[数据库实例规格。](https://support.huaweicloud.com/intl/zh-cn/cassandraug-nosql/nosql_05_0017.html)](tag:hk)   - [GaussDB(for Redis)请参见[数据库实例规格。](https://support.huaweicloud.com/redisug-nosql/nosql_05_0059.html)](tag:hc)   - [GaussDB(for Redis)请参见[数据库实例规格。](https://support.huaweicloud.com/intl/zh-cn/redisug-nosql/nosql_05_0059.html)](tag:hk)
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 扩容包年包月实例存储容量时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。   - true，表示自动从账户中支付。   - false，表示手动从账户中支付，默认为该方式。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyVolumeRequestBody_H_
