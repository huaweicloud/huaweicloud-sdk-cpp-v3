
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RenameHighRiskCommandsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RenameHighRiskCommandsRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/CommandInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改高危命令的请求体
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RenameHighRiskCommandsRequest
    : public ModelBase
{
public:
    RenameHighRiskCommandsRequest();
    virtual ~RenameHighRiskCommandsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RenameHighRiskCommandsRequest members

    /// <summary>
    /// 高危命令与对应重命名命令。
    /// </summary>

    std::vector<CommandInfo>& getCommands();
    bool commandsIsSet() const;
    void unsetcommands();
    void setCommands(const std::vector<CommandInfo>& value);


protected:
    std::vector<CommandInfo> commands_;
    bool commandsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RenameHighRiskCommandsRequest_H_
