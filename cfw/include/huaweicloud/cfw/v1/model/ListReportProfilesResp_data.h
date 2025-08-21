
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListReportProfilesResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListReportProfilesResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ReportProfileVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询模板列表响应 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListReportProfilesResp_data
    : public ModelBase
{
public:
    ListReportProfilesResp_data();
    virtual ~ListReportProfilesResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReportProfilesResp_data members

    /// <summary>
    /// **参数解释**： 数量限制 **取值范围**： 不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 偏移量 **取值范围**： 不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 模板列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<ReportProfileVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<ReportProfileVO>& value);

    /// <summary>
    /// **参数解释**： 总数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<ReportProfileVO> records_;
    bool recordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListReportProfilesResp_data_H_
