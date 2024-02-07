
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipSegmentRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipSegmentRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ShowGlobalEipSegmentRequest
    : public ModelBase
{
public:
    ShowGlobalEipSegmentRequest();
    virtual ~ShowGlobalEipSegmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGlobalEipSegmentRequest members

    /// <summary>
    /// global_eip_segment_id
    /// </summary>

    std::string getGlobalEipSegmentId() const;
    bool globalEipSegmentIdIsSet() const;
    void unsetglobalEipSegmentId();
    void setGlobalEipSegmentId(const std::string& value);

    /// <summary>
    /// 只显示指定的字段
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);


protected:
    std::string globalEipSegmentId_;
    bool globalEipSegmentIdIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGlobalEipSegmentRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGlobalEipSegmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipSegmentRequest_H_
