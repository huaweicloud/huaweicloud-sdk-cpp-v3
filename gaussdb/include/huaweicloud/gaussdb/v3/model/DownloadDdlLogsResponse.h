
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DownLoadFileInfoItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DownloadDdlLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadDdlLogsResponse();
    virtual ~DownloadDdlLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadDdlLogsResponse members

    /// <summary>
    /// **参数解释**：  每个日志文件的下载链接详情。  **取值范围**：  不涉及。 
    /// </summary>

    std::vector<DownLoadFileInfoItem>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<DownLoadFileInfoItem>& value);


protected:
    std::vector<DownLoadFileInfoItem> list_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadDdlLogsResponse_H_
