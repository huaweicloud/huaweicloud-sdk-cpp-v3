
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateInstanceRemarkRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateInstanceRemarkRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateInstanceRemarkRequestBody
    : public ModelBase
{
public:
    UpdateInstanceRemarkRequestBody();
    virtual ~UpdateInstanceRemarkRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceRemarkRequestBody members

    /// <summary>
    /// 实例备注内容。 长度不能超过64位，不支持回车和&gt;!&lt;\&quot;&amp;&#39;&#x3D;特殊字符。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);


protected:
    std::string remark_;
    bool remarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateInstanceRemarkRequestBody_H_
