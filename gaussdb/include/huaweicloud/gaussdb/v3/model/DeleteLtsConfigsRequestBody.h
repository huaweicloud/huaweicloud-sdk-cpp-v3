
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteLtsConfigsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteLtsConfigsRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/InstanceDeleteLtsConfig.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteLtsConfigsRequestBody
    : public ModelBase
{
public:
    DeleteLtsConfigsRequestBody();
    virtual ~DeleteLtsConfigsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLtsConfigsRequestBody members

    /// <summary>
    /// 日志配置列表
    /// </summary>

    std::vector<InstanceDeleteLtsConfig>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<InstanceDeleteLtsConfig>& value);


protected:
    std::vector<InstanceDeleteLtsConfig> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteLtsConfigsRequestBody_H_
