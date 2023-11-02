
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDbPositionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDbPositionReq_H_


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
/// 采集数据库位点信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDbPositionReq
    : public ModelBase
{
public:
    QueryDbPositionReq();
    virtual ~QueryDbPositionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDbPositionReq members

    /// <summary>
    /// 重置位点时间, 使用UTC时间 示例：2023-09-19 15:00:00，UTC时间是2023-09-19T07:00:00Z
    /// </summary>

    std::string getResetPositionTime() const;
    bool resetPositionTimeIsSet() const;
    void unsetresetPositionTime();
    void setResetPositionTime(const std::string& value);


protected:
    std::string resetPositionTime_;
    bool resetPositionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDbPositionReq_H_
