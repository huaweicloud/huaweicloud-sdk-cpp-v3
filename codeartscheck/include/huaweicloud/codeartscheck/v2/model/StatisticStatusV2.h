
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  StatisticStatusV2
    : public ModelBase
{
public:
    StatisticStatusV2();
    virtual ~StatisticStatusV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticStatusV2 members

    /// <summary>
    /// **参数解释：** [待处理问题数。](tag:hws,hws_hk)[待处理和重新打开（需打开忽略审核开关）问题数。](tag:fcs,hcs,hcs_sm,hcs_site,hcs_sitesm) **取值范围：** 不涉及。
    /// </summary>

    int32_t getUnresolved() const;
    bool unresolvedIsSet() const;
    void unsetunresolved();
    void setUnresolved(int32_t value);

    /// <summary>
    /// **参数解释：** 已解决和已修复问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(int32_t value);

    /// <summary>
    /// **参数解释：** 已忽略问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDismissed() const;
    bool dismissedIsSet() const;
    void unsetdismissed();
    void setDismissed(int32_t value);

    /// <summary>
    /// **参数解释：** 已修复问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getFixed() const;
    bool fixedIsSet() const;
    void unsetfixed();
    void setFixed(int32_t value);

    /// <summary>
    /// **参数解释：** 已解决问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getSolved() const;
    bool solvedIsSet() const;
    void unsetsolved();
    void setSolved(int32_t value);


protected:
    int32_t unresolved_;
    bool unresolvedIsSet_;
    int32_t resolved_;
    bool resolvedIsSet_;
    int32_t dismissed_;
    bool dismissedIsSet_;
    int32_t fixed_;
    bool fixedIsSet_;
    int32_t solved_;
    bool solvedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_
