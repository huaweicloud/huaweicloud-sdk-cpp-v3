
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsSlowLogsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsSlowLogsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/SlowLogDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsSlowLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLtsSlowLogsResponse();
    virtual ~ListLtsSlowLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsSlowLogsResponse members

    /// <summary>
    /// 慢日志具体信息。
    /// </summary>

    std::vector<SlowLogDetail>& getSlowLogs();
    bool slowLogsIsSet() const;
    void unsetslowLogs();
    void setSlowLogs(const std::vector<SlowLogDetail>& value);


protected:
    std::vector<SlowLogDetail> slowLogs_;
    bool slowLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsSlowLogsResponse_H_
