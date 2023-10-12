
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicyRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RecyclePolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RecyclePolicyRequestBody
    : public ModelBase
{
public:
    RecyclePolicyRequestBody();
    virtual ~RecyclePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclePolicyRequestBody members

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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicyRequestBody_H_
