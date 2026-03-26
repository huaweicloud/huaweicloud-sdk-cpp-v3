
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolume_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolume_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlVolume
    : public ModelBase
{
public:
    MysqlVolume();
    virtual ~MysqlVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlVolume members

    /// <summary>
    /// **参数解释**：  磁盘大小，单位GB。  **约束限制**：  必须为10的整数倍。创建按需实例时不可选。  **取值范围**：  10-128000。  **默认取值**：  10。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// **参数解释**：  磁盘存储类型。  **约束限制**：  不涉及。  **取值范围**：  - DL6：DL6存储类型。 - DL5：DL5存储类型。  **默认取值**：  DL6。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolume_H_
