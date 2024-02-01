
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowLogsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowLogsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/LogObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLogsResponse();
    virtual ~ShowLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogsResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 日志列表数据。
    /// </summary>

    std::vector<LogObject>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<LogObject>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<LogObject> logs_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowLogsResponse_H_
