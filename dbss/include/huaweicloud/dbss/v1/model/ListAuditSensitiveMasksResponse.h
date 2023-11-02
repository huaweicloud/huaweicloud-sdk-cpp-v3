
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSensitiveMasksResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSensitiveMasksResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SensitiveMaskResponse_rules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditSensitiveMasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditSensitiveMasksResponse();
    virtual ~ListAuditSensitiveMasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditSensitiveMasksResponse members

    /// <summary>
    /// 规则列表
    /// </summary>

    std::vector<SensitiveMaskResponse_rules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<SensitiveMaskResponse_rules>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SensitiveMaskResponse_rules> rules_;
    bool rulesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSensitiveMasksResponse_H_
