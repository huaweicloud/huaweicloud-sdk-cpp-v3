
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChLtsConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/CreateChLtsConfigRequestBody_log_configs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 打开LTS配置
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChLtsConfigRequestBody
    : public ModelBase
{
public:
    CreateChLtsConfigRequestBody();
    virtual ~CreateChLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChLtsConfigRequestBody members

    /// <summary>
    /// 日志配置信息。
    /// </summary>

    std::vector<CreateChLtsConfigRequestBody_log_configs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<CreateChLtsConfigRequestBody_log_configs>& value);


protected:
    std::vector<CreateChLtsConfigRequestBody_log_configs> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChLtsConfigRequestBody_H_
