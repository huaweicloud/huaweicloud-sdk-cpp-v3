
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumeSummaryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumeSummaryResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ComponentInfoResult.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatabaseVolumeSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseVolumeSummaryResponse();
    virtual ~ListDatabaseVolumeSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabaseVolumeSummaryResponse members

    /// <summary>
    /// **参数解释**: 数据盘总量。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDataDiskCapacity() const;
    bool dataDiskCapacityIsSet() const;
    void unsetdataDiskCapacity();
    void setDataDiskCapacity(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据盘使用量。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDataDiskUsage() const;
    bool dataDiskUsageIsSet() const;
    void unsetdataDiskUsage();
    void setDataDiskUsage(const std::string& value);

    /// <summary>
    /// **参数解释**: 空间使用日均增长量。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSpaceUsageGrowthPerDay() const;
    bool spaceUsageGrowthPerDayIsSet() const;
    void unsetspaceUsageGrowthPerDay();
    void setSpaceUsageGrowthPerDay(const std::string& value);

    /// <summary>
    /// **参数解释**: 预计可用天数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getEstimatedRemainingDays() const;
    bool estimatedRemainingDaysIsSet() const;
    void unsetestimatedRemainingDays();
    void setEstimatedRemainingDays(const std::string& value);

    /// <summary>
    /// **参数解释**: CN节点信息。
    /// </summary>

    std::vector<ComponentInfoResult>& getCnComponents();
    bool cnComponentsIsSet() const;
    void unsetcnComponents();
    void setCnComponents(const std::vector<ComponentInfoResult>& value);

    /// <summary>
    /// **参数解释**: DN节点信息。
    /// </summary>

    std::vector<ComponentInfoResult>& getDnComponents();
    bool dnComponentsIsSet() const;
    void unsetdnComponents();
    void setDnComponents(const std::vector<ComponentInfoResult>& value);


protected:
    std::string dataDiskCapacity_;
    bool dataDiskCapacityIsSet_;
    std::string dataDiskUsage_;
    bool dataDiskUsageIsSet_;
    std::string spaceUsageGrowthPerDay_;
    bool spaceUsageGrowthPerDayIsSet_;
    std::string estimatedRemainingDays_;
    bool estimatedRemainingDaysIsSet_;
    std::vector<ComponentInfoResult> cnComponents_;
    bool cnComponentsIsSet_;
    std::vector<ComponentInfoResult> dnComponents_;
    bool dnComponentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumeSummaryResponse_H_
