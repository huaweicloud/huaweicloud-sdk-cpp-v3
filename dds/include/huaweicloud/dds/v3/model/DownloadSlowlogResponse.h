
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DownloadSlowlogResult.h>
#include <string>
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
class HUAWEICLOUD_DDS_V3_EXPORT  DownloadSlowlogResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadSlowlogResponse();
    virtual ~DownloadSlowlogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadSlowlogResponse members

    /// <summary>
    /// 具体信息。
    /// </summary>

    std::vector<DownloadSlowlogResult>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<DownloadSlowlogResult>& value);

    /// <summary>
    /// 慢日志下载链接生成状态。 - FINISH，表示下载链接已经生成完成。 - CREATING，表示正在生成文件，准备下载链接。 - FAILED，表示存在日志文件准备失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 慢日志链接数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DownloadSlowlogResult> list_;
    bool listIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadSlowlogResponse_H_
