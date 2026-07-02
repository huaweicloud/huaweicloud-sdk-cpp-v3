
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取DDL日志下载链接请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DownloadDdlLogsRequestBody
    : public ModelBase
{
public:
    DownloadDdlLogsRequestBody();
    virtual ~DownloadDdlLogsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadDdlLogsRequestBody members

    /// <summary>
    /// **参数解释**：  DDL日志文件ID列表。  **约束限制**：  列表数量小于等于10。  **取值范围**：  不涉及。  **默认取值**：  不涉及。 
    /// </summary>

    std::vector<std::string>& getLogIds();
    bool logIdsIsSet() const;
    void unsetlogIds();
    void setLogIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> logIds_;
    bool logIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsRequestBody_H_
