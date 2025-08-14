
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridge_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridge_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加网桥结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddBridge
    : public ModelBase
{
public:
    AddBridge();
    virtual ~AddBridge();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddBridge members

    /// <summary>
    /// 网桥名称。**取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getBridgeName() const;
    bool bridgeNameIsSet() const;
    void unsetbridgeName();
    void setBridgeName(const std::string& value);

    /// <summary>
    /// 网桥ID。**取值范围**：长度不超过36，只允许字母、数字、_-字符的组合。
    /// </summary>

    std::string getBridgeId() const;
    bool bridgeIdIsSet() const;
    void unsetbridgeId();
    void setBridgeId(const std::string& value);


protected:
    std::string bridgeName_;
    bool bridgeNameIsSet_;
    std::string bridgeId_;
    bool bridgeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddBridge_H_
