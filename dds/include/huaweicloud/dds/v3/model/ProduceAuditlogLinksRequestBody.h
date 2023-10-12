
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ProduceAuditlogLinksRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ProduceAuditlogLinksRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ProduceAuditlogLinksRequestBody
    : public ModelBase
{
public:
    ProduceAuditlogLinksRequestBody();
    virtual ~ProduceAuditlogLinksRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProduceAuditlogLinksRequestBody members

    /// <summary>
    /// 审计日志ID列表，限制50条以内。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ProduceAuditlogLinksRequestBody_H_
