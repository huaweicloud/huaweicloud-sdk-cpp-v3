
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupResourcePackageFlavorsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupResourcePackageFlavorsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BackupResourcePackageFlavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowBackupResourcePackageFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupResourcePackageFlavorsResponse();
    virtual ~ShowBackupResourcePackageFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupResourcePackageFlavorsResponse members

    /// <summary>
    /// **参数解释**：  可用备份资源包规格列表。
    /// </summary>

    std::vector<BackupResourcePackageFlavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<BackupResourcePackageFlavor>& value);


protected:
    std::vector<BackupResourcePackageFlavor> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupResourcePackageFlavorsResponse_H_
