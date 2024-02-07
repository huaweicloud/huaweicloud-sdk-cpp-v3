
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateNewNodeAutoAddSwitchRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateNewNodeAutoAddSwitchRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开启或关闭新增节点自动加入该Proxy请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateNewNodeAutoAddSwitchRequestBody
    : public ModelBase
{
public:
    UpdateNewNodeAutoAddSwitchRequestBody();
    virtual ~UpdateNewNodeAutoAddSwitchRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNewNodeAutoAddSwitchRequestBody members

    /// <summary>
    /// 是否开启新增节点自动加入该Proxy。  取值范围： - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// 新增节点的读权重：  - 新增节点自动加入为ON，取值为0~1000。 - 新增节点自动加入为OFF，则可不输入读权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    std::string switchStatus_;
    bool switchStatusIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateNewNodeAutoAddSwitchRequestBody_H_
