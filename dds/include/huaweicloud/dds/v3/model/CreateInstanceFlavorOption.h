
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceFlavorOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceFlavorOption_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例规格详情。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateInstanceFlavorOption
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
    /// 节点类型。 取值：   - 集群实例包含mongos、shard和config节点，各节点下该参数取值分别为“mongos”、“shard”和“config”。   - 副本集实例下该参数取值为“replica”。   - 单节点实例下该参数取值为“single”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 节点数量。 取值：   - 集群实例下“mongos”类型的节点数量可取2~16。   - 集群实例下“shard”类型的组数量可取2~16。   - “shard”类型的组数量可取2~16。   - “config”类型的组数量只能取1。   - “replica”类型的组数量可取3，5，7。   - “single”类型的节点数量只能取1。
    /// </summary>

    std::string getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(const std::string& value);

    /// <summary>
    /// 磁盘类型。 取值：ULTRAHIGH，表示SSD。   - 对于集群实例的shard和config节点、副本集、以及单节点实例，该参数有效。mongos节点不涉及选择磁盘，该参数无意义。
    /// </summary>

    std::string getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(const std::string& value);

    /// <summary>
    /// 磁盘大小。 取值：必须为10的整数倍。单位为GB。   - 对于集群实例，shard组可取10GB~2000GB，config组仅可取20GB。mongos节点不涉及选择磁盘，该参数无意义。   - 对于副本集实例，可取10GB~2000GB。   - 对于单节点实例，可取10GB~1000GB。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 资源规格编码
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceFlavorOption_H_
