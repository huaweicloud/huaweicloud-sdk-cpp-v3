
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryBinlogDownloadLinkRequestV3Body_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryBinlogDownloadLinkRequestV3Body_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  QueryBinlogDownloadLinkRequestV3Body
    : public ModelBase
{
public:
    QueryBinlogDownloadLinkRequestV3Body();
    virtual ~QueryBinlogDownloadLinkRequestV3Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryBinlogDownloadLinkRequestV3Body members

    /// <summary>
    /// **参数解释**：  Binlog日志ID列表。  获取方法请参见[查询Binlog日志列表](https://support.huaweicloud.com/api-taurusdb/ListBinlogs.html)。  **约束限制**：  50条以内。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryBinlogDownloadLinkRequestV3Body_H_
