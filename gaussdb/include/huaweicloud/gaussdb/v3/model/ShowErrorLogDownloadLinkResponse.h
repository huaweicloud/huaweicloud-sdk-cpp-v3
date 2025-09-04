
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowErrorLogDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowErrorLogDownloadLinkResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RDSErrorLogDownload.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowErrorLogDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowErrorLogDownloadLinkResponse();
    virtual ~ShowErrorLogDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowErrorLogDownloadLinkResponse members

    /// <summary>
    /// **参数解释**：  数量。  **取值范围**：  不涉及。 
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：  错误日志下载链接列表。 
    /// </summary>

    std::vector<RDSErrorLogDownload>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<RDSErrorLogDownload>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<RDSErrorLogDownload> list_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowErrorLogDownloadLinkResponse_H_
