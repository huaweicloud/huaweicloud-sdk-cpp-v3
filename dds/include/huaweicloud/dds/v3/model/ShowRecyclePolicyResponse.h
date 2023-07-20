
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowRecyclePolicyResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowRecyclePolicyResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RecyclePolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowRecyclePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecyclePolicyResponse();
    virtual ~ShowRecyclePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowRecyclePolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    RecyclePolicy getRecyclePolicy() const;
    bool recyclePolicyIsSet() const;
    void unsetrecyclePolicy();
    void setRecyclePolicy(const RecyclePolicy& value);


protected:
    RecyclePolicy recyclePolicy_;
    bool recyclePolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowRecyclePolicyResponse_H_
