
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ManagementEventSelector_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ManagementEventSelector_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 管理类事件选择器。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ManagementEventSelector
    : public ModelBase
{
public:
    ManagementEventSelector();
    virtual ~ManagementEventSelector();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ManagementEventSelector members

    /// <summary>
    /// 标识不转储的云服务名称。 目前只支持设置为KMS，表示屏蔽KMS服务的createDatakey事件。
    /// </summary>

    std::vector<std::string>& getExcludeService();
    bool excludeServiceIsSet() const;
    void unsetexcludeService();
    void setExcludeService(const std::vector<std::string>& value);


protected:
    std::vector<std::string> excludeService_;
    bool excludeServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ManagementEventSelector_H_
