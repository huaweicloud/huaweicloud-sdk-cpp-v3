
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogDownloadLinkResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListBinlogDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBinlogDownloadLinkResponse();
    virtual ~ListBinlogDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBinlogDownloadLinkResponse members

    /// <summary>
    /// **参数解释**：  Binlog日志下载链接列表，有效时间为5分钟。
    /// </summary>

    std::vector<std::string>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<std::string>& value);


protected:
    std::vector<std::string> links_;
    bool linksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogDownloadLinkResponse_H_
