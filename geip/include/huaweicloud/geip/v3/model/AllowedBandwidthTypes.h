
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AllowedBandwidthTypes_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AllowedBandwidthTypes_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 地址池支持的全域公网带宽类型资源
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AllowedBandwidthTypes
    : public ModelBase
{
public:
    AllowedBandwidthTypes();
    virtual ~AllowedBandwidthTypes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllowedBandwidthTypes members

    /// <summary>
    /// 全域公网带宽类型名称
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 中文名称
    /// </summary>

    std::string getCnName() const;
    bool cnNameIsSet() const;
    void unsetcnName();
    void setCnName(const std::string& value);

    /// <summary>
    /// 英文名称
    /// </summary>

    std::string getEnName() const;
    bool enNameIsSet() const;
    void unsetenName();
    void setEnName(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string cnName_;
    bool cnNameIsSet_;
    std::string enName_;
    bool enNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AllowedBandwidthTypes_H_
