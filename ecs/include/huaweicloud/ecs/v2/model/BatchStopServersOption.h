
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerId.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchStopServersOption
    : public ModelBase
{
public:
    BatchStopServersOption();
    virtual ~BatchStopServersOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopServersOption members

    /// <summary>
    /// 标记为启动云服务器操作。
    /// </summary>

    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);

    /// <summary>
    /// 关机类型，默认为SOFT：  - SOFT：普通关机（默认）。 - HARD：强制关机。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<ServerId> servers_;
    bool serversIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersOption_H_
