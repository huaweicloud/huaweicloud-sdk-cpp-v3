
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogLinksResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogLinksResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ListAuditlogLinksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditlogLinksResponse();
    virtual ~ListAuditlogLinksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAuditlogLinksResponse members

    /// <summary>
    /// 审计日志下载链接列表，有效时间5分钟。
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogLinksResponse_H_
