
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带宽信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  EipSpec_bandwidth
    : public ModelBase
{
public:
    EipSpec_bandwidth();
    virtual ~EipSpec_bandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipSpec_bandwidth members

    /// <summary>
    /// 带宽大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 带宽类型
    /// </summary>

    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_bandwidth_H_
