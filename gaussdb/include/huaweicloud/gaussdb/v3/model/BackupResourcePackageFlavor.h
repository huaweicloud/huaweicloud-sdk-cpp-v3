
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupResourcePackageFlavor_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupResourcePackageFlavor_H_


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
/// **参数解释**:  备份资源包规格。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupResourcePackageFlavor
    : public ModelBase
{
public:
    BackupResourcePackageFlavor();
    virtual ~BackupResourcePackageFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupResourcePackageFlavor members

    /// <summary>
    /// **参数解释**：  备份资源包规格码。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getSpceCode() const;
    bool spceCodeIsSet() const;
    void unsetspceCode();
    void setSpceCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份资源包规格。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const std::string& value);


protected:
    std::string spceCode_;
    bool spceCodeIsSet_;
    std::string volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupResourcePackageFlavor_H_
