
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/LogVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 日志 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListLogsResp_data
    : public ModelBase
{
public:
    ListLogsResp_data();
    virtual ~ListLogsResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogsResp_data members

    /// <summary>
    /// **参数解释**： 条数 **取值范围**： 不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 日志 **取值范围**： 不涉及
    /// </summary>

    std::vector<LogVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<LogVO>& value);

    /// <summary>
    /// **参数解释**： 记录总数 **取值范围**： 不涉及
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::vector<LogVO> records_;
    bool recordsIsSet_;
    int64_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListLogsResp_data_H_
