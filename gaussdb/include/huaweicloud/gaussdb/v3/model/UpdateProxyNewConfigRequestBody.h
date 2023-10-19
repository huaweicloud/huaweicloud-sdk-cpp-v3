
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyNewConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyNewConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/UpdateProxyConfigurationItem.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateProxyNewConfigRequestBody
    : public ModelBase
{
public:
    UpdateProxyNewConfigRequestBody();
    virtual ~UpdateProxyNewConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProxyNewConfigRequestBody members

    /// <summary>
    /// 修改的配置信息。
    /// </summary>

    std::vector<UpdateProxyConfigurationItem>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<UpdateProxyConfigurationItem>& value);


protected:
    std::vector<UpdateProxyConfigurationItem> configurations_;
    bool configurationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyNewConfigRequestBody_H_
