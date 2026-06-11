
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateInstanceFlavorOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateInstanceFlavorOption_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例规格详情。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CreateInstanceFlavorOption
    : public ModelBase
{
public:
    CreateInstanceFlavorOption();
    virtual ~CreateInstanceFlavorOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstanceFlavorOption members

    /// <summary>
    /// **参数解释：** 节点数量。 **约束限制：** 不涉及。 **取值范围：** - GeminiDB Cassandra实例的节点数量可取3~60。 - GeminiDB Mongo 4.0版本副本集实例的节点数量为3。 - GeminiDB Influx集群实例的节点数量可取3~16。 - GeminiDB Influx单节点实例的节点数量可取1。 - GeminiDB Redis实例的节点数量可取3~12。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(const std::string& value);

    /// <summary>
    /// **参数解释：** 磁盘类型。 **约束限制：** 不涉及。 **取值范围：** 取值为“ULTRAHIGH”，表示SSD盘。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(const std::string& value);

    /// <summary>
    /// **参数解释：** 磁盘大小。必须为整数，单位为GB。 **约束限制：** GeminiDB Cassandra，GeminiDB Mongo，GeminiDB Influx的最小磁盘容量100GB，最大磁盘容量与实例的性能规格有关。GeminiDB Redis的最大和最小磁盘容量与节点数和实例的性能规格有关。 **取值范围：** - GeminiDB Cassandra请参见数据库实例规格。 - GeminiDB Mongo请参见数据库实例规格。 - GeminiDB Influx请参见数据库实例规格。 - GeminiDB Redis请参见数据库实例规格。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// -| **参数解释：** 资源规格编码。 **约束限制：** 不涉及。 **取值范围：** 获取方法请参见查询数据库规格 - QueryingInstanceSpecifications中响应参数“spec_code”的值。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);


protected:
    std::string num_;
    bool numIsSet_;
    std::string storage_;
    bool storageIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateInstanceFlavorOption_H_
