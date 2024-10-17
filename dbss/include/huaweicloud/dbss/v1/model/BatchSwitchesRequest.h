
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchSwitchesRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchSwitchesRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BatchSwitchesRequest
    : public ModelBase
{
public:
    BatchSwitchesRequest();
    virtual ~BatchSwitchesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSwitchesRequest members

    /// <summary>
    /// 规则ID,多个ID中间逗号分隔。可在查询风险规则策略接口ID字段获取。
    /// </summary>

    std::string getIds() const;
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::string& value);

    /// <summary>
    /// 开关状态 - OFF: 关闭 - ON: 开启
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string ids_;
    bool idsIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchSwitchesRequest_H_
