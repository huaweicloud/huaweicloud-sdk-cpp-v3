
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/CdnLog.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListDomainLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainLogsResponse();
    virtual ~ListDomainLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainLogsResponse members

    /// <summary>
    /// 日志总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 日志列表数据。
    /// </summary>

    std::vector<CdnLog>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<CdnLog>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<CdnLog> logs_;
    bool logsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListDomainLogsResponse_H_
