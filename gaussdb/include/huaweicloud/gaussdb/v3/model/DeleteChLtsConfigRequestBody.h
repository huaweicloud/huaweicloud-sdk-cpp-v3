
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteChLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteChLtsConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DeleteChLtsConfigRequestBody_log_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除LTS配置
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteChLtsConfigRequestBody
    : public ModelBase
{
public:
    DeleteChLtsConfigRequestBody();
    virtual ~DeleteChLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteChLtsConfigRequestBody members

    /// <summary>
    /// LTS配置。
    /// </summary>

    std::vector<DeleteChLtsConfigRequestBody_log_configs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<DeleteChLtsConfigRequestBody_log_configs>& value);


protected:
    std::vector<DeleteChLtsConfigRequestBody_log_configs> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteChLtsConfigRequestBody_H_
