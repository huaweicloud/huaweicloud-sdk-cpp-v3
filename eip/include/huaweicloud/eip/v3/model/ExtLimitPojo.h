
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ExtLimitPojo_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ExtLimitPojo_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ExtLimitPojo
    : public ModelBase
{
public:
    ExtLimitPojo();
    virtual ~ExtLimitPojo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtLimitPojo members

    /// <summary>
    /// - 最小入云限速
    /// </summary>

    int32_t getMinIngressSize() const;
    bool minIngressSizeIsSet() const;
    void unsetminIngressSize();
    void setMinIngressSize(int32_t value);

    /// <summary>
    /// - 最大入云限速
    /// </summary>

    int32_t getMaxIngressSize() const;
    bool maxIngressSizeIsSet() const;
    void unsetmaxIngressSize();
    void setMaxIngressSize(int32_t value);

    /// <summary>
    /// 95计费保底率
    /// </summary>

    int32_t getRatio95peak() const;
    bool ratio95peakIsSet() const;
    void unsetratio95peak();
    void setRatio95peak(int32_t value);


protected:
    int32_t minIngressSize_;
    bool minIngressSizeIsSet_;
    int32_t maxIngressSize_;
    bool maxIngressSizeIsSet_;
    int32_t ratio95peak_;
    bool ratio95peakIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ExtLimitPojo_H_
