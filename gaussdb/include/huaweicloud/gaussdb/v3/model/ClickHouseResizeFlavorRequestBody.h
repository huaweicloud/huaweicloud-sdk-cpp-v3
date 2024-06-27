
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseResizeFlavorRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseResizeFlavorRequestBody_H_


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
/// 规格变更请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseResizeFlavorRequestBody
    : public ModelBase
{
public:
    ClickHouseResizeFlavorRequestBody();
    virtual ~ClickHouseResizeFlavorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseResizeFlavorRequestBody members

    /// <summary>
    /// 规格ID。可通过“查询规格信息”接口获取。  仅允许使用对应数据库，和对应实例类型的规格ID。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 是否延迟变更。默认false。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    bool delay_;
    bool delayIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseResizeFlavorRequestBody_H_
