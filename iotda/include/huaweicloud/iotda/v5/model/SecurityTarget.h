
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SecurityTarget_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SecurityTarget_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  SecurityTarget
    : public ModelBase
{
public:
    SecurityTarget();
    virtual ~SecurityTarget();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityTarget members

    /// <summary>
    /// 安全态势感知配置绑定的对象，目前仅支持PRODUCT产品级别，仅对设备级别的安全态势感知项生效。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 绑定对象id列表，target_type为PRODUCT时，由于产品ID在不同资源空间下可以重复，target_id格式为：资源空间ID:产品ID；资源空间ID与产品ID使用冒号拼接而成。
    /// </summary>

    std::vector<std::string>& getTargetIds();
    bool targetIdsIsSet() const;
    void unsettargetIds();
    void setTargetIds(const std::vector<std::string>& value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::vector<std::string> targetIds_;
    bool targetIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SecurityTarget_H_
