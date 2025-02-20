
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_repair_details_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_repair_details_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryRepairDetailResp_repair_details
    : public ModelBase
{
public:
    QueryRepairDetailResp_repair_details();
    virtual ~QueryRepairDetailResp_repair_details();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRepairDetailResp_repair_details members

    /// <summary>
    /// 源表标志列值。
    /// </summary>

    std::string getSourceMeta() const;
    bool sourceMetaIsSet() const;
    void unsetsourceMeta();
    void setSourceMeta(const std::string& value);

    /// <summary>
    /// 目标表标志列值。
    /// </summary>

    std::string getTargetMeta() const;
    bool targetMetaIsSet() const;
    void unsettargetMeta();
    void setTargetMeta(const std::string& value);

    /// <summary>
    /// 修复SQL状态。
    /// </summary>

    int32_t getRepairSqlState() const;
    bool repairSqlStateIsSet() const;
    void unsetrepairSqlState();
    void setRepairSqlState(int32_t value);

    /// <summary>
    /// 修复SQL。
    /// </summary>

    std::string getRepairSqlInfo() const;
    bool repairSqlInfoIsSet() const;
    void unsetrepairSqlInfo();
    void setRepairSqlInfo(const std::string& value);


protected:
    std::string sourceMeta_;
    bool sourceMetaIsSet_;
    std::string targetMeta_;
    bool targetMetaIsSet_;
    int32_t repairSqlState_;
    bool repairSqlStateIsSet_;
    std::string repairSqlInfo_;
    bool repairSqlInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryRepairDetailResp_repair_details_H_
