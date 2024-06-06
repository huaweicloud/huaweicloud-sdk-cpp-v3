
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RecyclePolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetRecyclePolicyRequestBody
    : public ModelBase
{
public:
    SetRecyclePolicyRequestBody();
    virtual ~SetRecyclePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRecyclePolicyRequestBody members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetRecyclePolicyRequestBody_H_
