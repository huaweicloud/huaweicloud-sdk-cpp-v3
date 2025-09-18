
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/StatisticSeverityV2.h>
#include <huaweicloud/codeartscheck/v2/model/StatisticStatusV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskDefectsStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDefectsStatisticResponse();
    virtual ~ShowTaskDefectsStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDefectsStatisticResponse members

    /// <summary>
    /// 
    /// </summary>

    StatisticSeverityV2 getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const StatisticSeverityV2& value);

    /// <summary>
    /// 
    /// </summary>

    StatisticStatusV2 getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const StatisticStatusV2& value);


protected:
    StatisticSeverityV2 severity_;
    bool severityIsSet_;
    StatisticStatusV2 status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsStatisticResponse_H_
