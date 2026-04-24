
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_OperateDataCompareJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_OperateDataCompareJobReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作对比任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  OperateDataCompareJobReq
    : public ModelBase
{
public:
    OperateDataCompareJobReq();
    virtual ~OperateDataCompareJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateDataCompareJobReq members

    /// <summary>
    /// 操作的对比任务ID列表。
    /// </summary>

    std::vector<std::string>& getCompareJobIds();
    bool compareJobIdsIsSet() const;
    void unsetcompareJobIds();
    void setCompareJobIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> compareJobIds_;
    bool compareJobIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_OperateDataCompareJobReq_H_
