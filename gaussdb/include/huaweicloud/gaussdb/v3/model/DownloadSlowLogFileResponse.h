
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadSlowLogFileResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadSlowLogFileResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/DownloadSlowLogFileItem.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DownloadSlowLogFileResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadSlowLogFileResponse();
    virtual ~DownloadSlowLogFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadSlowLogFileResponse members

    /// <summary>
    /// 慢日志下载链接列表。
    /// </summary>

    std::vector<DownloadSlowLogFileItem>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<DownloadSlowLogFileItem>& value);

    /// <summary>
    /// 条数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DownloadSlowLogFileItem> list_;
    bool listIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownloadSlowLogFileResponse_H_
