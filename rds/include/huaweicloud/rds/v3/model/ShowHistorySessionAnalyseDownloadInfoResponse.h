
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DownloadInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowHistorySessionAnalyseDownloadInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHistorySessionAnalyseDownloadInfoResponse();
    virtual ~ShowHistorySessionAnalyseDownloadInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistorySessionAnalyseDownloadInfoResponse members

    /// <summary>
    /// 记录个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 下载信息
    /// </summary>

    std::vector<DownloadInfo>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<DownloadInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<DownloadInfo> list_;
    bool listIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHistorySessionAnalyseDownloadInfoResponse_H_
