
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequestBody_global_eip_segment_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequestBody_global_eip_segment_H_


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
/// 更新全域弹性公网IP段请求对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipSegmentRequestBody_global_eip_segment
    : public ModelBase
{
public:
    UpdateGlobalEipSegmentRequestBody_global_eip_segment();
    virtual ~UpdateGlobalEipSegmentRequestBody_global_eip_segment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipSegmentRequestBody_global_eip_segment members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户自定义的资源描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipSegmentRequestBody_global_eip_segment_H_